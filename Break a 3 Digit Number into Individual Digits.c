#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int num;
    scanf("%d",&num);
    int ones= num%10;
    int tens1= (num/10)%10;
    int tens2= (num%100)/10;
    int hundreds= num/100;
    printf("%d %d %d",hundreds,tens1,ones);
    return 0;
}
