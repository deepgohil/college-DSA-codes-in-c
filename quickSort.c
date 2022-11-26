#include<stdio.h>
#include<stdlib.h>

void swapArray(int arr[],int i,int j);

int partition(int arr[],int pivot,int lo,int hi)
{
int i=lo,j=lo;

while(i<=hi)//Note:lo thi hi ni vache aj partition karva nu che and pivot index j-1 par hase 
{
     if(arr[i]>pivot)
     {
     i++;
     }
     else{
          swapArray(arr,i,j);
          i++;
          j++;
     }
     
}
return j-1;
}

void swapArray(int arr[],int i,int j)
{
     int temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;

}


void Quicksort(int arr[],int lo,int hi)
{

/////base condition lo>=hi array na part karta karta have part karva mate kai baichu aj nathi      
if(lo>=hi)
{
     return;
}


int pivit=arr[hi];
int pi=partition(arr,pivit,lo,hi);//Note:lo thi hi ni vache aj partition karva nu 
Quicksort(arr,lo,pi-1);
Quicksort(arr,pi+1,hi);

}
void main()
{

  int unsArr[11]={7,6,56,96,12,3564,2,3,4,5,1};

   for (int i = 0; i < 11; i++)
     {
         printf("%d\t",unsArr[i]);
     }
 printf("\naftersort\n");


Quicksort(unsArr,0,10);


     for (int i = 0; i < 11; i++)
     {
         printf("%d\t",unsArr[i]);
     }

}