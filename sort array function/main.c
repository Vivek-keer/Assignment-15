#include<stdio.h>
#include <stdlib.h>
int srt(int s[],int n);
int main()
{
    int a[6]; int n,i;
    printf("Enter the 6 numbers: ");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(n=0;n<=5;n++)
     printf("%d  ",srt(a,n));
      return 0;
}

int srt(int s[],int n)
 {
    int swap,i,m;
    for(m=0;m<=n;m++)
     {
     for(i=m+1;i<=5;i++)
       {
          if(s[m]>s[i])
           {
                 swap=s[m];
                 s[m]=s[i];
                 s[i]=swap;
           }
        }
     }
    return s[n];
 }






