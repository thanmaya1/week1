#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

// Function to sort an array using insertion sort
void insertionSort(int N, int arr[]) {
int i,j;
int value;
for(i=1;i<N;i++)
{
value=arr[i];
j=i-1;
while(j >= 0 && value < arr[j])
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=value;
}
}

// Function to print the array
void printArray(int arr[], int n)
{
int i;
for (i = 0; i < n; i++)
printf("%d ", arr[i]);
printf("\n");
}

int main(void) {


int N;
scanf("%d", &N);
int arr[N], i;
for(i = 0; i < N; i++) {
scanf("%d", &arr[i]);
}


insertionSort(N, arr);
printArray(arr, N);

return 0;
}
