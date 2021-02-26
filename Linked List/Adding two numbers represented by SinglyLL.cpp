/* This is just a code snippet   */

/*   You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit.  
     Add the two numbers and return the sum as a linked list. You may assume the two numbers do not contain any leading zero, except the number 0 itself.   */

struct ListNode 
{
    int val;
    ListNode *next;
};                             

struct ListNode sum(ListNode *l1,ListNode *l2)
{
     ListNode first(0),*temp=&first;
     int sum,carry=0,x,y;
     while(l1 || l2 || carry)
     {
        x=(l1)?(l1->val):(0);
        y=(l2)?(l2->val):(0);
        sum=x+y+carry;
        temp->next=new ListNode(sum%10);
        temp=temp->next;
        carry=sum/10;
        l1=(l1)?(l1->next):(l1);
        l2=(l2)?(l2->next):(l2);
     }
  return first.next;
}
