/*
Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    if(head1==NULL || head2==NULL)
    {
          return -1;
    }
    Node *a=head1;
    Node *b=head2;
    while(a!=b)
    {
       a=a==NULL?head2:a->next;
       b=b==NULL?head1:b->next;
    }
   return a->data;
}
