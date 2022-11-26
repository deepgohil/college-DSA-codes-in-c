#include<stdio.h>
#include<stdlib.h>
void swapArray(int arr[],int i,int j);

int partition(int arr[],int pivot)
{
int i=0,j=0;
int arrLength=11;
while(i<arrLength)
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
void main()
{

  int unsArr[11]={7,6,56,96,12,3564,2,3,4,5,1};

//    for (int i = 0; i < 11; i++)
//      {
//          printf("%d\t",unsArr[i]);
//      }
partition(unsArr,unsArr[1]);

     for (int i = 0; i < 11; i++)
     {
         printf("\n%d\t",unsArr[i]);
     }

}