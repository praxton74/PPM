ListNodedummy=new ListNode();
ListNodetemp=dummy;
int carry=0;
while(l1!=NULL||l2!=NULL||carry!=0)
{
int sum=0;
if(l1!=NULL)
{
sum+=l1->val;
l1=l1->next;
}
if(l2!=NULL)
{
sum+=l2->val;
l2=l2->next;
}
sum+=carry;
int a=sum%10;
carry=sum/10;
ListNode*node=new ListNode(a);
temp->next=node;
temp=temp->next;
}
return dummy->next;
