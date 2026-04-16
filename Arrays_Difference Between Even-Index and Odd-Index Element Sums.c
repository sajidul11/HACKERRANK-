#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    long long odd=0,even=0;
    long long diff=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        {
            even+= a[i];
        }
        else
        {
            odd+=a[i];
        }
    }
      
    diff= even-odd;
    printf("%lld",diff);
    
    return 0;
}