#include <stdio.h>

int main() {

   double x;
    int i=1,n,stop=0;
    scanf("%lf %d",&x,&n);
    double orgn=x;
    double mina=x;
   
    if(x>=50){
    for(;i<=n;++i)
    {
        if(orgn<0.4*x)
        {   stop=i-1;
                break;
        }
        if(i%6==0)
        {
            orgn= orgn*1.7;
            i=i+6;
            continue;

        }
        else if(i%2==0)
        {
            orgn= orgn*0.875;
            
        }
        else if(i%3==0)
        {
            orgn= orgn*0.8;
            
        }
        else
        {
            orgn=orgn*0.9;
            
        }
        if(orgn<mina)
        {
            mina=orgn;
        }
        
        
        
    }
    if(stop)
    {
    
        printf("Stopped early after %d days: %.2f\n",stop,orgn);
    }
    else{
        printf("After %d days: %.2f\n",n,orgn);
    }
    printf("Minimum amount held by Bhaskar: %.2f\n",mina);
    if(orgn>0.7*x)
    {
        printf("Lucky Bhaskar\n");
    }
    else{
        printf("Better Luck Next Time!\n");
    }
    }
    
    return 0;
}