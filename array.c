#include <stdio.h>

int i = 0;
int get_array_elements(int *numbers);
void print_numbers(int *n);
void get_array_elements2(int *numbers);

int main()
{
int numbers[20];
get_array_elements(numbers);

print_numbers(numbers);

getch();
return 0;
}
int get_array_elements(int *numbers)
{
printf("Input 10 elements in the array: ");
printf("\n");

for (i = 0; i < 10; i++)
{
printf("Element - %d : ", i+1);
scanf("%d", &numbers[i]);
}
}
void print_numbers(int *n)
{
printf("\nElements in array are: ");
for (i = 0; i < 10; i++)
{
printf("%d ", n[i]);
}
}
}