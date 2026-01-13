#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int hours,minutes;
    scanf("%d %d",&hours,&minutes);
    if(hours==0){
        if(minutes<10){
            printf("12:0%d AM",minutes);
        }
        else{
            printf("12:%d AM",minutes);
        }
        
    }
    else if(hours<10){
        if(minutes<10){
            printf("0%d:0%d AM",hours,minutes);
        }
        else{
            printf("0%d:%d AM",hours,minutes);
        }
        
    }
    else if(hours<12){
        if(minutes<10){
            printf("%d:0%d AM",hours,minutes);
        }
        else{
            printf("%d:%d AM",hours,minutes);
        }
        
    }

    else if(hours==12){
        if(minutes<10){
            printf("%d:0%d PM",hours,minutes);
        }
        else{
            printf("%d:%d PM",hours,minutes);
        }
        
    }
    else if(hours<23){
        if(minutes<10){
            printf("0%d:0%d PM",hours-12,minutes);
        }
        else{
            printf("0%d:%d PM",hours-12,minutes);
        }
        
    }
    else if(hours<=23){
        if(minutes<10){
            printf("%d:0%d PM",hours-12,minutes);
        }
        else{
            printf("%d:%d PM",hours-12,minutes);
        }
        
    }
    
    
    return 0;
}