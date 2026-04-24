#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            break;
        }
    }
    if(i==n-1)
    {
        printf("Sorted");
        
    }
    else
    {
        printf("Not Sorted");
    }
    
     
    
    return 0;
}