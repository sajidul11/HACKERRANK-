#include <stdio.h>

int main() {

       int n,i;
     scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int target;
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            printf("%d",i);
            return 0;
        }
        
    }
    if(i==n)
    {
        printf("-1");
    }
    return 0;
}