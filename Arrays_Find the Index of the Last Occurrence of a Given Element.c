#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int n2,n3=-1;
    scanf("%d",&n2);
    for( i=0;i<n;i++)
    {
        if(n2==a[i])
        {
            n3=i;
        }
    }
    if(n3==-1)
    {
        printf("-1");
    }
    else
    printf("%d",n3);
    
    return 0;
    
}