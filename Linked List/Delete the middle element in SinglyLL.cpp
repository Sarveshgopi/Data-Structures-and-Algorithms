/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return NULL;
    }
    Node *p=head,*q=head,*last=head;
    while(p && p->next)
    {
        last=q;
        q=q->next;
        p=p->next->next;
    }
    last->next=q->next;
    free(q);
    return head;
}
