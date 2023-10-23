#include<stdio.h>

int main()
{
    int arr[5];
    // input array
    for (int i = 0; i <= 4; i++){
    printf("Enter the %d element : \n", i);
    scanf("%d", &arr[i]);
    }
    // output array

    for(int i = 4; i >= 0; i--){
        printf("%d \t", arr[i]);
    }
   
   return 0;
}
