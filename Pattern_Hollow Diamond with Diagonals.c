#include <stdio.h>

int main() {
    int n, i, j,k;
    scanf("%d", &n);
    if(n>1)
    {
    for(i = 1;i<=n; i++) {
        for(k=2; k<=n-i+1;k++) {
            printf(" ");
        }
        for(j=1;j<=(2 * i - 1);j++) {
           if(i==n||j==1||j==2*i-1|| j==i)
        {
            printf("*");
        }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
     for(i =2;i<=n; i++) {
        for(k=2; k<=i;k++) {
            printf(" ");
        }
        for(j=1;j<=(2 * (n-i+1)- 1);j++) {
           if(j==1||j==2*(n-i+1)-1|| j == (n - i + 1))
        {
            printf("*");
        }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    }
    else{
        printf("Shape Not Possible");
    }
    return 0;
}