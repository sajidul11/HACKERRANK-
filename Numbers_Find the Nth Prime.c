#include <stdio.h>

int main() {
 int n,num,n2,count,i;
    scanf("%d",&n);
    while(count < n) {
        num++;
        for(i = 2; i <= num; i++) {
            if(num % i == 0) 
            {
                break;
            }
        }
        if(i == num) 
        {
            count++;
        }
    }

    printf("%d",num);
    return 0;
}