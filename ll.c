#include<stdio.h>
#include<stdlib.h>
int size=-1;
struct node{
    int data;
    struct node *next;
};
struct node *head=0;
void insert()
{
    if(size==-1)
    {
        struct node *newnode=(struct node *) malloc(sizeof(struct node)); 
        newnode->data=100;
        newnode->next=0;
        head=newnode;
        size++;
    }
    else
    {

    }
}
void traversal()
{
    struct node *temp;
    temp=head;
    // printf("%d",temp->data);
    while(temp->next!=0)
    {
        printf("%d   ",temp->data);
        temp=temp->next;
    }
     printf("%d   ",temp->data);
}
void main()
{
 struct node *newnode=(struct node *) malloc(sizeof(struct node)); 
    head=newnode;
    newnode->data=100;
    newnode->next=0;

     struct node *newnodetwo=(struct node *) malloc(sizeof(struct node)); 
    newnodetwo->data=200;
    newnodetwo->next=0;
    newnode->next=newnodetwo;

     struct node *newnodethree=(struct node *) malloc(sizeof(struct node)); 
    newnodethree->data=300;
    newnodethree->next=0;
     newnodetwo->next=newnodethree;

     traversal();
    //  printf("%d",head->data);

}