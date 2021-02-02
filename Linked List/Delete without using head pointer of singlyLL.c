#This is just an code snippet

struct LL
{
    int data;
    struct LL *next;
}*first=NULL;

//The position of the node to be deleted is passed as argument
void delete_without_head(struct LL *pos)
{
     if(pos==NULL)
     {
        return ;
      }
      else if(pos->next==NULL
      {
        return ;
      }
      else
      {
         pos->data=pos->next->data;
         pos->next->next=pos->next->next;
       }
  }   
