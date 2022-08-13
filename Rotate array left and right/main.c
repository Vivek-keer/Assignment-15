#include <stdio.h>
#include <stdlib.h>
void Lrotate(int a[],int);
void Rrotate(int a[],int);
int main()
{
    int r[10]; int i,t,d;
    printf("Enter the 10 numbers: ");
    for(i=0;i<10;i++)
        scanf("%d",&r[i]);
    printf("Enter number of times for rotation: ");
    scanf("%d",&t);
    printf("choose option:\n ");
    printf("1.For right rotate\n 2.For left rotate");
    printf("\n");
    scanf("%d",&d); printf("\n");
    switch(d)
    {
        case 2: Lrotate(r,t); break;
        case 1: Rrotate(r,t); break;
    }
    return 0;
}
void Lrotate(int a[],int n)
{
    int m,x,i;
    for(i=1;i<=n;i++)
    {
        x=a[0];
    for(m=0;m<=8;m++)
        a[m]=a[m+1];
        a[9]=x;
    }
     for(m=0;m<=9;m++)
    printf("%d ",a[m]);
}

void Rrotate(int a[],int n)
{
    int m,x,i;
    for(i=1;i<=n;i++)
    {
        x=a[9];
    for(m=9;m>=1;m--)
        a[m]=a[m-1];
        a[0]=x;
    }
       for(i=0;i<=9;i++)
       printf("%d ",a[i]);
}
