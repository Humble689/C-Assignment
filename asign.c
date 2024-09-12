/*START
    Input n
    Declare array arr[n]
    
    FOR i = 0 to n-1:
        Input arr[i]
    END FOR

    max = arr[0]  // Assume first element is maximum
    
    FOR i = 1 to n-1:
        IF arr[i] > max THEN
            max = arr[i]
        END IF
    END FOR
    
    Output max
END */

#include <stdio.h>

int main() {
    int n, i, max;

    // Ask the user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  // Declare an array of size 'n'

    // Ask the user to enter the elements of the array
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the maximum
    max = arr[0];

    // Loop through the array to find the maximum element
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];  // Update max if current element is greater
        }
    }

    // Output the maximum element
    printf("The maximum element in the array is: %d\n", max);
    return 0;
}
