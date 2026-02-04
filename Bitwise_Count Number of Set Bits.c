#include <stdio.h>

int main() {

int n;
    scanf("%d", &n);
    int flag = 0;
    
    for (int i = 0; i < 4; i++){
        if (n & (1 << i)){
            flag++;
        }
    }
    
printf("%d", flag);
    return 0;
}