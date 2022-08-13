#include <stdio.h>
#include <stdlib.h>
int countdup(int a[]);

int main()
{
    int r[10],i;
    printf("Enter the 10 numbers: ");
    for(i=0;i<10;i++)
        scanf("%d",&r[i]);
        printf("Number of duplicate element is %d",countdup(r));
    return 0;
}

int countdup(int a[])
{
    int m,i,count=0;
    for(m=0;m<=8;m++)
     for(i=m+1;i<=9;i++)
     if(a[m]==a[i]) count++;
     return count;


}

