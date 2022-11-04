#include <bits/stdc++.h> 
/****************************************************************
Following is the Linked list node structure already written

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T>* next;
    LinkedListNode(T data)
    { 
        this->data = data;
        next = NULL;
    }
};
*****************************************************************/


LinkedListNode<int>* moveToFront(LinkedListNode<int> *head) {

    /*
     Don't write main().
     Don't read input, it is passed as function argument.
     Write your code here.
    */
    
    if(!head || !head->next)
       return head;
   
   LinkedListNode<int>* temp = head;
   
   while(temp->next->next)
       temp = temp->next;
   
   LinkedListNode<int>* move = temp->next;
   
   temp->next = temp->next->next;
   
   move->next = head;
   head = move;
   
   return head;
    

}
