#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    double sum=0;
    double avg=0;
    long count=0;
  
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum+a[i];
        
    }
    avg=sum/n;
    for(int i=0;i<n;i++)
    {
        if(a[i]>avg)
        {
            ++count;
        }
        
    
    }
    printf("%ld",count);
    return 0;
}