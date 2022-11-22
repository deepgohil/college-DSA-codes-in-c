#include<stdio.h>
#include<stdlib.h>

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


struct Node * InsertAtStart(struct Node *prevHead,int data)
{
 struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
ptr->data=data;
ptr->next=prevHead;

return ptr;


} 

void InsertAtPosition(struct Node *Head,int data,int pos)
{
 struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
 
for (int i = 1; i < pos; i++)
{
  // printf("%d",Head->data);
Head=Head->next; 

}
ptr->data=data;
ptr->next=Head->next;

Head->next=ptr;
} 



void InsertAtEnd(struct Node *head,int data)
{
struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
ptr->data=data;
ptr->next=NULL;

while(head->next!=NULL)
{
head=head->next;
}

head->next=ptr;



}


void InsertAfterGivenNode(struct Node *head,struct Node *pos,int data)
{
 struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
 ptr->data=data;

 ptr->next=pos->next;
 pos->next=ptr;



}

int main() {
   // printf() displays the string inside quotation
   struct Node *head;
   struct Node *first;
   struct Node *second;
   struct Node *third;


////////////////////////////memory alocation
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));

   head->data=0;
   head->next=first;
   
   first->data=10;
   first->next=second;

   second->data=20;
   second->next=third;

    third->data=30;
    third->next=NULL;

//  displayData(head);
//  head=InsertAtStart(head,60);
//  printf("AFTER INSERT on head \n");
//  displayData(head);



//  displayData(head);
//  printf("AFTER INSERT on pos 2 \n");
//  InsertAtPosition(head,100,2);
//   displayData(head);

/////////////////////insert at end
  
//  displayData(head);
//  printf("AFTER INSERT END \n");
//  InsertAtEnd(head,10000);
//   displayData(head);

/////////////////////INSERT AFTER GIVEN NODE
  
//  displayData(head);
//  printf("AFTER INSERT END \n");
  // InsertAfterGivenNode(head,second,1234);
  // displayData(head);


   return 0;
}

