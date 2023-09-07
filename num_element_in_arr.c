// this prints the number of elements in an array
#include <stdio.h>
int main()
{
 int arr[] = { 10, 20, 30, 40, 50, 60 };
 int size_arra = (arr, sizeof arr / sizeof *arr);
 printf("Number of elements in arr[]:  %d", size_arra);
}