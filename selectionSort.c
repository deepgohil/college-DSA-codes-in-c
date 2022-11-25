#include<stdio.h>
#include<stdlib.h>

void main()
{
     int unsArr[11]={7,6,56,96,12,3564,2,3,4,5,1};
     int sArr[11];
     for (int j = 0; j < 11; j++)
     {
    
     
     int cMinidx=0;
     for(int i=0;i<11;i++)
     {
         if(unsArr[cMinidx]>unsArr[i])
         {
             cMinidx=i;
         }
     }
     sArr[j]=unsArr[cMinidx];
     unsArr[cMinidx]=100000;
     }


     for (int i = 0; i < 11; i++)
     {
         printf("%d\t",sArr[i]);
     }

     
     
}