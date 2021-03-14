
#include <stdio.h>  
void  main()  
{  
    int arr[50]; 
    int i;  
       printf("\n Reading elements in an array: \n");
       printf("**********************************\n");	
  
    printf("Input 100 elements into the array : \n");  
    for(i=1; i<=100; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\nElements that are stored in an array: ");  
    for(i=0; i<100; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    printf("\n");
    printf("\n");
}

