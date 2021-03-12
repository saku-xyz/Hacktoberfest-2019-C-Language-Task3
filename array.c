
#include <stdio.h>  
  
void  main()  
{  
    int arr[10]; 
    int i;  
       printf("\n\nRead Elements in array: \n");
       printf("-----------------------------------------\n");	
  
    printf("Input 10 Elements into array : \n");  
    for(i=1; i<=10; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\nElements in array are: ");  
    for(i=0; i<10; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    printf("\n");
    printf("\n");
}

