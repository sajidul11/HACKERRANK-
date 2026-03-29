#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int n,n2;
    scanf("%d %d",&n,&n2);
    if(n2==0)
    {
        printf("%d",n);
        return 0;
    }
    if(n==0)
    {
        printf("%d",n2);
        return 0;
    }
    for(int i=n2;i>0;i--)
    {
        if(n%i==0 && n2%i==0)
        {
            printf("%d",i);
            return 0;
        }
    }
    return 0;
}