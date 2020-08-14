#include <stdio.h>

int main() {
    int loop, largest;
    int arr[5];

    printf("Enter first value : ");
    scanf("%d",&arr[0]);

    printf("Enter second value : ");
    scanf("%d",&arr[1]);

    printf("Enter third value : ");
    scanf("%d",&arr[2]);

    printf("Enter fourth value : ");
    scanf("%d",&arr[3]);

    printf("Enter fifth value : ");
    scanf("%d",&arr[4]);

   largest = arr[0];
   
   for(loop = 0; loop < 5; loop++) {
      if( largest < arr[loop] ) 
         largest = arr[loop];
   }
   
   printf("Highest number in array is : %d", largest);   
   
   return 0;
}