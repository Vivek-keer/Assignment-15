#include <stdio.h>
#include <stdlib.h>
int greatest(int great[]);
int main()
{
    int G[20],i;
    printf("Enter the 20 numbers: ");
    for(i=0;i<20;i++)
    scanf("%d",&G[i]);
    printf("Greatest number is %d", greatest(G));
    return 0;
}
int greatest(int g[])
{
    int i,n;
      for(i=0;i<19;i++)
      {
         g[i+1]=g[i]> g[i+1]?g[i]:g[i+1];
      }
      return g[19];
}

