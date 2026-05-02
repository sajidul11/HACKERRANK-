#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    
    if(n<2)
    {
        printf("-1");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum;
    scanf("%d",&sum);
    

    for(int i=0;i<n;i++)
    {   
        
        for(int j=i+1;j<n;j++)
        {
        if(sum == a[i]+a[j])
        {
            printf("%d %d",a[i],a[j]);
            return 0;
        }
        }
        
       
    }
   printf("-1");
    return 0;
}