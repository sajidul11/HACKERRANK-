#include <stdio.h>

int main() {
    int budget,numguests,food,decoration,music,extraexpense;
    scanf("%d %d %d %d %d %d",&budget,&numguests,&food,&decoration,&music,&extraexpense);

    int foodt = numguests * food;
    int total = foodt + decoration + extraexpense + music;

    if(numguests <= 5 || numguests > 50) {
        printf("Celebration Denied");
        return 0;
    }

    if(total > budget) {
           printf("Celebration Denied");
        return 0;
    }

    if(!(decoration < 0.3 * budget || foodt < 0.5 * budget)) {
        
    
        printf("Celebration Denied");
        return 0;
    }

    if(numguests > 25 && music <= 0) {
        printf("Celebration Denied");
        return 0;
    }

    printf("Celebration Approved");
    return 0;
}