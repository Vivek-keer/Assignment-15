#include <stdio.h>
#include <stdlib.h>
void unique(int a[]);

int main()
{
    int r[10],i;
    printf("Enter the 10 numbers: ");
    for(i=0;i<10;i++)
        scanf("%d",&r[i]);
        printf("Unique elements are ");
      unique(r);
    return 0;
}

void  unique(int a[])
{
    int m,i,count;
    for(m=0;m<=9;m++)
 { count=0;
       for(i=0;i<=9;i++)
   {  if(i==m) continue;
      if(a[m]==a[i])
      {
         count++; break;
      }
   } if(count==0) printf("%d ",a[m]);
 }
}


