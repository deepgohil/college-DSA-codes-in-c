#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root=0;
struct node *left=0;
struct node *right=0;

void preorder(struct node *root)
{
    if(root==0)
    {
        return ;
    }
    printf("%d \n",root->data);
    preorder(root->left);
    preorder(root->right);
}
struct node * create()
{
    int data;

struct node *newnode=(struct node *) malloc(sizeof(struct node)); 
newnode->left=0;
newnode->right=0;
    printf("Data to store (-1 for no node): ");
    scanf("%d",&data);
    if(data==-1)
    {
        return 0;
    }
    newnode->data=data;


printf("Left child of %d ",data);
newnode->left=create();

printf("Right child of %d ",data);
newnode->right=create();

return newnode;
}


void inset(struct node* root,int key)
{
    struct node *prev;
    while(root!=0)
    {
        prev=root;
        if(root->data==key)
        {
return ;
        }
        else if(key<root->data)
        {
                root=root->left;
        }
        else{
            root=root->right;
        }

    }
    struct node *newnode=(struct node *) malloc(sizeof(struct node)); 
    newnode->data=key;
newnode->left=0;
newnode->right=0;
if(key<prev->data)
{
prev->left=newnode;
}
else
{
    prev->right=newnode;
}

}
void main()
{
root=create();
inset(root,2000);
preorder(root);

}