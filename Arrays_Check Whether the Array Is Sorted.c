#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,asc=1,desc=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            asc=0;
        }
        if(a[i]<a[i+1])
        {
            desc=0;
        }
    }
    if(asc)
    {
        printf("Ascending");
    }
    else if(desc)
    {
        printf("Descending");
    }
    else
    {
        printf("Not Sorted");
    }
    return 0;
}