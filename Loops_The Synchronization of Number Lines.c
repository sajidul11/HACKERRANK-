#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int n,n2,lcm;
    scanf("%d %d",&n,&n2);
    if(n>n2)
    {
        lcm= n;
    }
    else
    {
        lcm=n2;
    }
    for(;;lcm++)
    {
        if(lcm%n==0 && lcm%n2==0)
        {
           printf("%d",lcm);
            return 0;
        }
    }
    return 0;
}