#include<stdio.h>
#include<stdlib.h>

int size=0;
struct Node
{
  int data;
  struct Node *next;
};
void displayData(struct Node *ptr)
{
  int i=0;
while(ptr!=NULL)
{

  printf("Data is %d\n",ptr->data);
  printf("position is %d\n",i);

  ptr=ptr->next;

i++;
}
}


struct Node * DeleteAtStart(struct Node *head)
{
    if(size<0)
    {
        return NULL;
    }
    else{
size--;    
return head->next;
    }

} 

void DeleteAtEnd(struct Node *head)
{
    if(size<0)
    {
        printf("ERROR size<0");
    }
    else{
        size--;
while(head->next->next!=NULL)
{
    head=head->next;
}

head->next=NULL;
    }
} 


struct Node * DeleteNodeInBetween(struct Node *head,int pos)
{
    // printf("%d",head->data);
if(size==0)
{
    printf("No Node");
    return NULL;
}
if(pos==0)
{
    struct Node *new_head=DeleteAtStart(head);
    size--;
    return new_head;
}
if(pos==size)
{
DeleteAtEnd(head);
size--;
return head;
}
else{
    struct Node * ptr_head ;
    ptr_head=head;
    for (int i = 1; i < pos; i++)
    {
        head=head->next;

    }
    head->next=head->next->next;
    

    size--;
    // printf("%d",ptr_head->data);
    return ptr_head;
}

}
int main() {
   // printf() displays the string inside quotation
   struct Node *head;
   struct Node *first;
   struct Node *second;
   struct Node *third;
   struct Node *forth;
   struct Node *fifth;


////////////////////////////memory alocation
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    

   head->data=0;
   head->next=first;
   size++;
   
   first->data=10;
   first->next=second;
   size++;

   second->data=20;
   second->next=third;
   size++;

    third->data=30;
    third->next=forth;
    size++;

    forth->data=40;
    forth->next=fifth;
    size++;

    fifth->data=50;
    fifth->next=NULL;
    size++;

    // ////////////////////Delete at the start
    // displayData(head);
    // head=DeleteAtStart(head);
    // printf("AFTER DELETE");
    // displayData(head);
    

/////////////////////Delete at end
    // displayData(head);
    // DeleteAtEnd(head);
    // printf("AFTER DELETE\n");

    // displayData(head);

/////////////////////Deleting a node in between
  
 displayData(head);
 printf("\nAFTER Deleting a node in between\n");
 head=DeleteNodeInBetween(head,5);
  displayData(head);

printf("%d",size);
   return 0;
}



// git config --global user.email "monisha.g@somaiya.edu"
// git config --global user.name "deepgohil"