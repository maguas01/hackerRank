/*
In this challenge, you must implement a simple text editor. Initially, your editor contains an empty string, . You must perform operations of the following types:

    append(W)- Append string W to the end of S.
    delete(K) - Delete the last k characters of S.
    print(k) - Print the kth character of S.
    undo() - Undo the last (not previously undone) operation of type or , reverting to the state it was in prior to that operation.

*/




/*
 // without using a class
 
#include <string>
#include <iostream>
#include <stack>


int main() {

    std::string s = "", word = "";
    int q, k, stringToNum;
    std::stack<std::string> aStack;
    
    std::cin >> q;
    while (q--)
    {
        std::cin >> k;
        std::cin.ignore();
        
        switch (k)
        {
            case 1 :   
                    std::getline(std::cin,s);
                    word = aStack.empty() ? word + s : aStack.top() + s;
                    aStack.push(word);
                    break;
            case 2 :
                    std::getline(std::cin,s);
                    stringToNum = std::stoi (s,nullptr,0);
                    word = word.substr(0, word.length() - stringToNum);
                    aStack.push(word);
                    break;      
            case 3 :  
                    std::getline(std::cin,s);
                    stringToNum = std::stoi (s,nullptr,0);
                    std::cout << aStack.top().at(stringToNum - 1) << '\n';
                    break;   
            case 4 : 
                    aStack.pop();
                    word = aStack.empty() ? "" : aStack.top();
                    break;
        }
    }
    
    return 0;
}

*/

//using a class

#include <string>
#include <iostream>
#include <stack>

class textEditor
{
    private:
        std::stack<std::string> aStack;
        std::string word = "";
    public:
    // pre - string s passed to method
    //post - appends s to the end of word
    void _append(std::string s)
    {
        word = aStack.empty() ? word + s : aStack.top() + s;
        aStack.push(word);
    }
    // pre - string s is passed to the method
    //post - removes k letter from word
    void _delete(std::string s)
    {
        int stringToNum = std::stoi (s,nullptr,0);
        word = word.substr(0, word.length() - stringToNum);
        aStack.push(word);
    }
    // pre - string s passed to the method
    //post - prints the kth letter in word
    char _print(std::string s)
    {
        int stringToNum = std::stoi (s,nullptr,0);
        return  aStack.top().at(stringToNum - 1);
    }
    // pre - none
    //post - undo the last append or delete
    void _undo()
    {
        aStack.pop();
        word = aStack.empty() ? "" : aStack.top();
    }
 
};


int main() {

    std::string s = "";
    int q, k;
    textEditor t;
    std::cin >> q;
    
    while (q--)
    {
        std::cin >> k;
        std::cin.ignore();
        
        switch (k)
        {
            case 1 : 
                    std::getline(std::cin,s);
                    t._append(s);
                    break;
            case 2 :
                    std::getline(std::cin,s);
                    t._delete(s);
                    break;      
            case 3 :  
                    std::getline(std::cin,s);
                    std::cout << t._print(s) << '\n';
                    break;   
            case 4 : 
                    t._undo();
                    break;
        }
    }
    
    return 0;
}