#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        printf("%d",2*i-1);
        if(i==1)
        {
            printf(".");
        }
        else
        {
            printf(" ");
        }
    }
    return 0;
}