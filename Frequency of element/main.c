#include <stdio.h>
#include <stdlib.h>
void fre(int a[]);

int main()
{
    int r[10]; int i;
    printf("Enter the 10 numbers less than 100: ");
     for(i=0;i<10;i++)
        scanf("%d",&r[i]);

        printf("Frequency of elements are \n");
      fre(r);
    return 0;
}

void  fre(int a[])
{
   int temp[100]={}; int i,x;
   for(i=0;i<=9;i++)
   {
       x=a[i];
       temp[x]=temp[x]+1;
   }
   for(x=0;x<100;x++)
   {
       if(temp[x] )
   printf("%d is = %d times\n",x, temp[x]);
   }
}


