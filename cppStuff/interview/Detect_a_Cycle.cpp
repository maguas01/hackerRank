//
//A linked list is said to contain a cycle if any node is visited more than once while traversing 
//the list.
//
//Complete the function provided in the editor below. It has one parameter: a pointer to a
//Node object named that points to the head of a linked list. Your function must return a boolean 
//denoting whether or not there is a cycle in the list. If there is a cycle, return true; 
//otherwise, return false.

#include <map>
/*
 * Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.
 *
 * A Node is defined as: 
 * struct Node {
 *      int data;
 *      struct Node* next;
 *                         }
 *                         */
bool has_cycle(Node* head) {  
    if (head == NULL)
        return 0;
    Node* current = head;
    map<long int , int> m; 

    while(current != NULL )
    {
        m[(long int)(&*current)]++;
        if(m[(long int)(&*current)] > 1)
            return 1;
        current = current->next;
    }
    return 0;
}
