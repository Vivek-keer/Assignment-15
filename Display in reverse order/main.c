#include <stdio.h>
#include <stdlib.h>
void display_rev(int a[],int n);
int main()
{
    int a[100];
    int i,x;
    printf("Enter the number of elements: "); scanf("%d",&x);
    printf("Enter the number: ");
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    display_rev(a,x);
}
void display_rev(int a[],int n)
{
    int i;
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
}
