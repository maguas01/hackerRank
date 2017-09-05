/*
 John has discovered various rocks. Each rock is composed of various elements, and each element is represented by a lower-case Latin letter from 'a' to 'z'. An element can be present multiple times in a rock. An element is called a gem-element if it occurs at least once in each of the rocks.

Given the list of N rocks with their compositions, display the number of gem-elements that exist in those rocks.
 */

#include <iostream>
#include <vector>
#include <string>
#include <map>

int gemstones(std::vector <std::string> & arr){
    int count = 0;
    std::map<char, int> letterMap;
    std::map<char, int> unique;
    
    for (int i = 0; i < arr.size(); i++){
        letterMap.clear();
        for (int j = 0; j < arr[i].length(); j++){
            letterMap[arr[i].at(j)]++;
        }
        for(auto it = letterMap.begin(); it != letterMap.end(); ++it){ 
            if ( it->second > 0 ){ 
                unique[it->first]++;
            }
        }
    }
    for(auto it = unique.begin(); it != unique.end(); ++it){
        if(it->second == arr.size())
            count++;
    }
    return count;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       std::cin >> arr[arr_i];
    }
    int result = gemstones(arr);
    std::cout << result << '\n';
    return 0;
}
