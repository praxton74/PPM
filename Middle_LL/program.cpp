/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) 
    {
        int l=0;
        ListNode *temp=head;
        while(temp!=nullptr)
        {
            l++;
            temp=temp->next;
        }
        ListNode *temp2=head;
        int c=0;
        int mid=l/2;
        while(c<mid)
        {
            temp2=temp2->next;
            c++;
        }
        return temp2;
    }
};
