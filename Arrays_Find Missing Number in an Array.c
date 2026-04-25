#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    int a[n-1];
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    int total= n*(n+1)/2;
        int res=total-sum;
    printf("%d",res);
    
    return 0;
}