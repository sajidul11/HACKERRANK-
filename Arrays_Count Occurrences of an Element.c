#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int n2;
    scanf("%d",&n2);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(n2==a[i])
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}