#include <stdio.h>

int main() {

    int n, a, d;
    scanf("%d %d %d", &n, &a, &d);
    
    for (int i = 0; i <n; i++) {
        printf("%d ", a + (i * d));
    }
    return 0;
}