/*Name of the author:Bhagyashree N M
Date of modification:30th Oct 2021*/

//Linear Search Algorithm in C.
Linear_Search ( Array X, Value i)

Set j to 1
If j > n, jump to step 7
If X[j] == i, jump to step 6
Then, increment j by 1 i.e. j = j+1
Go back to step 2
Display the element i which is found at particular index i, then jump to step 8
Display element not found in the set of input elements.
Exit/End

//Implementation of the algorithm in C language
#include <stdio.h> 

int LINEAR_SEARCH(int inp_arr[], int size, int val) 
{ 

    for (int i = 0; i < size; i++) 
        if (inp_arr[i] == val) 
            return i; 
    return -1; 
} 


int main(void) 
{ 
    int arr[] = { 10, 20, 30, 40, 50, 100, 0 }; 
    int key = 100; 
    int size = 10; 
    int res = LINEAR_SEARCH(arr, size, key); 
    if (res == -1)
    printf("ELEMENT NOT FOUND!!");
    else
    printf("Item is present at index %d", res);

    return 0; 
} 
