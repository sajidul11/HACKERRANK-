#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]); 
    }
    int k=0,count=0;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
      if(k<a[i])
      {
         count++ ;
      }
    }
    printf("%d",count);
    return 0;
}