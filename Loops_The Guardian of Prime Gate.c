#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    int flag=0;
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);++i)
    {
        if(n%i==0)
        {
            printf("Composite");
            flag=1;
                break;
        }
        
    }
    if(n<2)
    {
        printf("None");
    }
    else if(flag==0)
    {
        printf("Prime");
    }
    return 0;
}