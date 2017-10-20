/*
Create a list, seqList of N empty sequences, wherer each sequence is indexed from 0 to N - 1.
the elemts within each of the N sequences also use 0 indexing.

create an integer, lastAnswer, and initialize it to 0

the 2 types of queries that can be performed on your list of sequences are described below : 
	1. Query 1 x y
		find the sequence seq at index (  ( x xor lastAnswer) % N) in seqList 
		append integer y to sequence seq
	
	2. Query 2 x y
		find the sequence seq at index (  ( x xor lastAnswer) % N) in seqList 
		find the value of element y % size in seq (where  size is the size of seq) and assign it to lastAnswer
		print the new value of lastAnswer on a new line
		
	Given N, Q, queries, execute each query.  
*/

#include <vector>
#include <iostream>

void functionOne( int x, int y, int lastAnswer, std::vector< std::vector<int> > & _vec){
    int seq = (x ^ lastAnswer) % _vec.size();
    _vec[seq].push_back(y);
}

void functionTwo( int x, int y, int & lastAnswer, std::vector< std::vector<int> > & _vec){
    int seq = (x ^ lastAnswer) % _vec.size();
    lastAnswer = _vec[seq][y % _vec[seq].size()];
}

int main() {   
    int n, q, lastAnswer = 0;
    std::cin >> n >> q;
    std::vector< std::vector<int> > _vec(n);
  
    while(q--){
        int num, x, y;
        std::cin >> num >> x >> y;
        if(num == 1){ 
            functionOne( x, y, lastAnswer, _vec);
        } else {
            functionTwo( x, y, lastAnswer, _vec);
            std::cout << lastAnswer << '\n';
        }
    }
    return 0;
}
