#include <stdio.h>

    int toSeconds(int hours, int minutes, int seconds){
        return hours*60*60+minutes*60+seconds;
    }

int main() {
    
    int hours,minutes,seconds;
    scanf("%d %d %d",&hours, &minutes, &seconds);
    
    int sec =toSeconds(hours,minutes,seconds);
    printf("Total seconds: %d",sec);

       
    return 0;
}
