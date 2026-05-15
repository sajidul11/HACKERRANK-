#include <stdio.h>

int main() {
    int n,i,j,count=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
int x= a[0]; 
    for (i=1;i<n;i++) {
        if (a[i]==x) {
        count++;
        } else {
           count--;
        if (count == 0) {
          x=a[i];
             count = 1;
            }
        }
    }
    int count2 =0;
  for(i=0;i<n;i++){
      if(a[i]==x) count2++;
   }
   if(count2 >n/2){
      printf("%d",x);
      return 0;
   }else{
printf("No Majority Element");
       }
    return 0;
}
