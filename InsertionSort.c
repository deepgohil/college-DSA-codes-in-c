#include<stdio.h>
#include<stdlib.h>

void main()
{
     int unsArr[11]={1,7,6,56,96,12,3564,2,3,4,5};

     for(int i=1;i<11;i++)
     {
          int cEle=unsArr[i];
          int darkWhole=i;
        while(darkWhole>0&&unsArr[darkWhole-1]>cEle)
        {
          // printf("Entering in loop %d\t",i);
          unsArr[darkWhole]=unsArr[darkWhole-1];
         darkWhole--;
        }
     unsArr[darkWhole]=cEle;

     }

     for (int i = 0; i < 11; i++)
     {
         printf("%d\t",unsArr[i]);
     }
     
}