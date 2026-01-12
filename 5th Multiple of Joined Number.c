#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int buildNumber(int a, int b, int c, int d){
    int res=(a*1000)+(b*100)+(c*10)+(d);
    res*=5;
    return res;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num1,num2,num3,num4;
    scanf("%d %d %d %d",&num1,&num2, &num3, &num4);
    printf("The number is: %d",buildNumber(num1,num2,num3,num4));
    
    
    return 0;
}
