#include<stdio.h>
#include<stdlib.h>
int queue[5];
int f=-1,r=-1;
void enque(int x)
{
    if(f==-1&&r==-1)
    {
        f=r=0;
        queue[r]=x;
    }
    else if((r+1)%5==f)
    {
        printf("Full");
    }
    else{
        r=(r+1)%5;
        queue[r]=x;
    }
}
void deque()
{
    if(f==-1&&r==-1)
    {
printf("Empty");
    }
    else if(f==r)
    {
         printf("Dequed : %d",queue[f]);
         f=-1;
         r=-1;
    }
   
    else{
        printf("Dequed : %d",queue[f]);
        f=(f+1)%5;
        
    }
}
void display()
{
    int i=f;
    printf("Data is ");
    while(i!=r)
    {
        printf("%d  ",queue[i]);
        i=(i+1)%5;
    }
     printf("%d  ",queue[r]);
}
void main()
{
    enque(5);
    enque(15);
    enque(25);
    deque();
    deque();
    enque(15);
    enque(25);
    display();
}