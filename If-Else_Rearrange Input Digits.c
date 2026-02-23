#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

int max(int a, int b, int c);
int min(int a, int b, int c);
int mid(int a, int b, int c);

int max(int a, int b, int c){
    if(a >= b && a >= c) return a;
    if(b >= a && b >= c) return b;
    return c;
}

int min(int a, int b, int c){
    if(a <= b && a <= c) return a;
    if(b <= a && b <= c) return b;
    return c;
}

int mid(int a, int b, int c){
    return a + b + c - max(a,b,c) - min(a,b,c);
}

int main(){
    int num, ones, tens, hund, thou;
    scanf("%d", &num);

    ones = num % 10;
    tens = (num / 10) % 10;
    hund = (num / 100) % 10;
    thou = num / 1000;

    if(ones >= tens && ones >= hund && ones >= thou){
        printf("%d%d%d%d", ones,
               max(tens,hund,thou),
               mid(tens,hund,thou),
               min(tens,hund,thou));
    }
    else if(tens >= ones && tens >= hund && tens >= thou){
        printf("%d%d%d%d", tens,
               max(ones,hund,thou),
               mid(ones,hund,thou),
               min(ones,hund,thou));
    }
    else if(hund >= ones && hund >= tens && hund >= thou){
        printf("%d%d%d%d", hund,
               max(ones,tens,thou),
               mid(ones,tens,thou),
               min(ones,tens,thou));
    }
    else{
        printf("%d%d%d%d", thou,
               max(ones,tens,hund),
               mid(ones,tens,hund),
               min(ones,tens,hund));
    }

    return 0;
}
