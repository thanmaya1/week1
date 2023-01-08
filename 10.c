#include <stdio.h>

// A function to swap two integers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// A function to print an array of size n
void print_array(int arr[], int n)
{
    for (int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Function to sort an array using Shell Sort
void shell_sort(int arr[], int n)
{
    // Start with a big gap, then reduce the gap
    for (int gap=n/2; gap>0; gap/=2)
    {
        // Do a gapped insertion sort for this gap size.
        // The first gap elements arr[0..gap-1] are already in gapped order
        // keep adding one more element until the entire array is gap sorted
        for (int i=gap; i<n; i++)
        {
            // add arr[i] to the elements that have been gap sorted
            // save arr[i] in temp and make a hole at position i
            int temp = arr[i];

            // shift earlier gap-sorted elements up until the correct location for arr[i] is found
            int j;
            for (j=i; j>=gap && arr[j-gap] > temp; j-=gap)
                arr[j] = arr[j-gap];

            // put temp (the original arr[i]) in its correct location
            arr[j] = temp;
        }

        // Print the array after each iteration
        print_array(arr, n);
    }
}

// Driver program
int main()
{
    int arr[] = {5, 2, 1, 4, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original array:\n");
    print_array(arr, n);

    printf("\nSorted array:\n");
    shell_sort(arr, n);

    return 0;
}
