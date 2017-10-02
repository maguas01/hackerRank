/*
	Brie’s Drawing teacher asks her class to open their n-page book to page number p. Brie can either start turning 
	pages from the front of the book (i.e., page number n) or from the back of the book (i.e., page number 1), and she 
	always turns pages one-by-one (as opposed to skipping through multiple pages at once). When she opens the 
	book, page 1 is always on the right side:
	
	Each page in the book has two sides, front and back, except for the last page which may only have a front side 
	depending on the total number of pages of the book (see the Explanation sections below for additional diagrams).

	Given  n and p, find and print the minimum number of pages Brie must turn in order to arrive at page p . 
*/

#include <bits/stdc++.h>

int solve(int n, int p){
    n = n/2;
    p = p/2;
    
    if(n-p < p)
        return n-p;
    return p;
}

int main() {
    int n, p;
    std::cin >> n >> p;
    int result = solve(n, p);
    std::cout << result << '\n';
    return 0;
}