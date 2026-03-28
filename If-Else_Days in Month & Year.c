#include <stdio.h>
#include <string.h>

int main() {

    int y,m;
    scanf("%d %d",&m,&y);
    if(y>=1)
    {
        if(m>=1 && m<=12)
        {
            if(m==2)
            {
                if(y%400==0 || (y%4==0 && y%100!=0))
                {
                    printf("29");
                }
                else
                {
                    printf("28");
                }
            }
            else if(m==4 || m==6 || m==9 || m==11)
            {
                printf("30");
            }
            else
            {
                printf("31");
            }
            
        }
        else
        {
            printf("Invalid Month\n");
        }
    }
    else{
        if(!(m>=1 && m<=12))
        {
            printf("Invalid Month\n");
        }
        printf("Invalid Year\n");
    }
    return 0;
}