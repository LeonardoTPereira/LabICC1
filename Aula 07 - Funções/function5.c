#include <stdio.h> 
  
// Note that arr[] for fun is just a pointer even if square 
// brackets are used 
void fun(int arr[])  // SAME AS void fun(int *arr) 
{ 
   unsigned int n = sizeof(arr)/sizeof(arr[0]); 
   printf("\nArray size inside fun() is %d", n); 
} 
  
// Driver program 
int main() 
{ 
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}; 
   unsigned int n = sizeof(arr)/sizeof(arr[0]); 
   printf("Array size inside main() is %d", n); 
   fun(arr); 
   return 0; 
} 