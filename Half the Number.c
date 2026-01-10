#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    scanf("%d",&num);
    float res= (float)num/2;
    printf("Half of %d is %.2f",num,res);
    return 0;
}
