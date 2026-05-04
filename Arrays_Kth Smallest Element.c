#include <stdio.h>
int kthSmallest(int arr[], int n, int k) {
  
    for(int i=0;i<k;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
            {
                index=j;
            }
            
        }
        if(arr[i-1]==arr[index] && i>0)
        {
            k++;
        }
        int temp=arr[i];
        arr[i]=arr[index];
        arr[index]= temp;
        
    }
    return arr[k-1];
    
}

int main() {
  int n, k;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &k);
  printf("%d\n", kthSmallest(arr, n, k));

  return 0;
}