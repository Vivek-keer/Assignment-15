#include <stdio.h>
#include <stdlib.h>
int adjdup(int a[]);

int main()
{
    int r[10]; int i,t,d;
    printf("Enter the 10 numbers: ");
    for(i=0;i<10;i++)
        scanf("%d",&r[i]);
        printf("First Adjacent duplicate is %d",adjdup(r));

    return 0;
}
int adjdup(int a[])
{
    int m;
    for(m=0;m<=9;m++)
     if(a[m]==a[m+1]) return a[m];

}

