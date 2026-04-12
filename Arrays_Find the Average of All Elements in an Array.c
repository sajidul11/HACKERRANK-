#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
   double sum=0;
    scanf("%d",&n);
    double a[n];
    int size=sizeof(a)/sizeof(a[0]);
    
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);
        sum= sum+ a[i];
    }
    double avg= sum/size;

    printf("%f",avg);
    
    return 0;
}