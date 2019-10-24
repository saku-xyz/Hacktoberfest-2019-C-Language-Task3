#include <stdio.h>  
void  main()  
{  
    int arr[50]; 
    int i;  
       printf("\n Reading elements in an array: \n");
       printf("******************************************\n");	
  
    printf("Input 50 elements into the array : \n");  
    for(i=1; i<=50; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\nBelow are the elements stored in the array: ");  
    for(i=0; i<50; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    printf("\n");
}