#include <stdio.h>

int main() {

    int n,i=0;
    scanf("%d",&n);
    int b[11];
    int n2=n;
    for( i=0;n>0;i++)
    {
        b[i]=n%2;
        n=n/2;
    }
    printf("Binary equivalent of %d: ",n2);
    if(n2==0)
    {
        printf("0");
        return 0;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",b[i]);
    }
    return 0;
}