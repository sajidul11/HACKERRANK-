#include <stdio.h>

int main() {

    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int pr= y*z;
    
    if(x%y==0 && x%z==0)
    {
        printf("X defeats all!\n");
    }
    else if(x%z==0)
    {
        printf("Z outsmarts X!\n");
    }
    else if(x%y==0)
    {
        printf("Y triumphs over X!\n");
    }
    else
    {
        printf("X remains undefeated!\n");
    }
    return 0;
}