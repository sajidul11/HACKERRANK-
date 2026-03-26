#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,rem,sum,pr=1,diff;
    scanf("%d",&n);
    while(n>0)
    {
        rem= n%10;
        pr= pr*rem;
        sum= sum+rem;
        n=n/10;
        
    }
    diff= pr - sum;
    printf("%d",diff);
    return 0;
}