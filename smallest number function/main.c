#include <stdio.h>
#include <stdlib.h>
int mallest(int small[]);
int main()
{
    int s[]={12,23,34,45,56,67,67,78,78,8,9,87},i;
    printf("The given string is {12,23,34,45,56,67,67,78,78,8,9,87}\n");

    printf("smallest number is %d", smallest(s));
    return 0;
}
int smallest(int g[])
{
    int i,n;
      for(i=0;i<11;i++)
      {
         g[i+1]=g[i]<g[i+1]?g[i]:g[i+1];
      }
      return g[11];
}

