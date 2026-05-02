#include <stdio.h>

int main() {

    int n,min,min2;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    if(n<2)
    {
        printf("-1");
        return 0;
    }
    min=a[0];
    min2=a[0];
    for(int i=0;i<n;i++)
    {
    if(min>a[i])
    {
        min2=min;
        min=a[i];
    }
    else if(a[i]>min && (min2==min || a[i]<min2))
    {
        min2=a[i];
    }
    }
    if(min2==min)
    {
        printf("-1");
    }
    else
    {
    printf("%d",min2);
    }
    return 0;
}