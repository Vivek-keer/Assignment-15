#include <stdio.h>
#include <stdlib.h>
 void mergdes(int x[],int y[]);
int main()
{
    int first[5]={200,109,80,31,19}; int sec[5]={19,18,4,2,0};
   mergdes(first,sec);
}
 void mergdes(int a[],int b[])
 {
     int temp[10]={};
     int i=0,j=0,x=3;
     while(i<5&&j<5)
     {
         if(a[i]>b[j])
         {
             temp[i+j]=a[i];
             temp[i+j+1]=b[j];
             i++;  if(i==5&&j<4) x=0;
         }
         else
         {
             temp[i+j]=b[j];
             temp[i+j+1]=a[i];
             j++; if(j==5&&i<4) x=1;
         }
     }

     if(x<2)
        switch(x)
        {
        case 0:
            for(x=j+1,j=i+j+1;j<10;j++,x++)
            temp[j]=b[x]; break;
        case 1:
            for(x=i+1,i=j+i+1;i<10;i++,x++)
            temp[i]=a[x]; break;
        }

     for(i=0;i<10;i++)
     {
         printf("%d ",temp[i]);
     }
 }




