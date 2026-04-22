#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    int i, max=arr[0],max2=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max2=max;
            max=arr[i];
        }
        else if(arr[i]<max && (max2==max || max2<arr[i]))
        {
            max2=arr[i];
        }
        
    }
    if(max2==max)
    {
        max2=-1;
    }
    return max2;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if(n<2)
    {
        printf("-1");
        return 0;
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}