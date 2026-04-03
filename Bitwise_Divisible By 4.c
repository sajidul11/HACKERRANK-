#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long n;
    scanf("%ld",&n);
    if(n> 2147483647 || n< -2147483648)
    {
        printf("Out of Range");
        return 0;
    }
    else if((n&3)==0)
    {
        printf("Divisible");
    }
    else
    {
        printf("Not Divisible");
    }
    return 0;
}