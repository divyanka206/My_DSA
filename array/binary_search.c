// Binary Search in array
/*
What is meant by binary search in an array
It is a searching technique which repeatedly divides the array into half to find an element
It only works on sorted array

Basic idea:
Pick a number
calc the mid of the array
if the element at middle is < number, go left from mid (mid-1)
if the element at middle is > number, go right from mid (mid + 1)*/

/*
Algorithm of Binary Search:

START
define a sorted array
define n storing the number of elements in the array
set low = 0
set high = n-1
set found = 0

While low <= high
    mid = (low+high)/2

    IF arr[mid] = key
        print "elemet found at mid"
        found = 1
        BREAK
    ELSE IF key > arr[mid]
        low = mid +1
    ELSE
        high = mid-1
    END IF
END While

print "element not found"
STOP*/


// Code
/*
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int low = 0;
    int high = n-1;

    int key;
    printf("enter number to search");
    scanf("%d", &key);

    int found = 0;

    while(low <= high){
        int mid = (low+high)/2;

        if(arr[mid] == key){
            printf("element found at %d\n", mid);
            found = 1;
            break;
        }
        else if(key > arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }

    }

    if(!found){
        printf("element not found");
    }

    return 0;
}*/

// Time Complexity
/*
Best Case → O(1)
The element is found in the very first comparison(in the middle)
Example:
Array: [10, 20, 30, 40, 50]
Key: 30
low = 0, high = 4
mid = 2
arr[mid] == key → FOUND
Only 1 comparison.
✅ Constant time → O(1)

Worst Case → O(log n)
The element is:
at the end, or
not present at all
But even then, we keep halving the array.
Example with 16 elements:
16 → 8 → 4 → 2 → 1
Number of steps = how many times we divide by 2
That is exactly log₂(n)
So:
Worst case time = O(log n)

Average Case → O(log n)
Why average is also O(log n)?
Because most of the time, the element is found:
not immediately (best case)
not at the very end either
On average, binary search still performs log n comparisons.
So:
Average case = O(log n)

If an algorithm reduces the problem size by half each time → O(log n)

| Search Type   | Elements checked | Time Complexity |
| ------------- | ---------------- | --------------- |
| Linear Search | 1 by 1           | O(n)            |
| Binary Search | Half every step  | O(log n)        |


// Space Complexity
Space Complexity
Auxiliary space: O(1) (variables)
Total space: O(n) (input array)*/

// Code-2 (using bubble sorting):

#include <stdio.h>

int main() {
    int arr[5];

    int n; //no of elements in array
    printf("enter the number of elements(max = 5): ");
    scanf("%d", &n);

    if (n < 0 || n > 5){
        printf("invalid number of elements\n");
        return 1;
    }
    printf("enter elements of array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //sorting the array
    int temp;

    for(int i = 0; i < n-1 ; i++){
        int swapped = 0;

        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;

            }
        }

        if(swapped == 0){
            break;
        }
    }

    printf("sorted array:");
    for(int i=0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    //binary search:
    int key;
    printf("enter the number to search: ");
    scanf("%d", &key);

    int low = 0;
    int high = n - 1;
    int found = 0;

    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid] == key){
            printf("element found at %d index: \n", mid);
            found = 1;
            break;
        }else if(key > arr[mid]){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    if(!found){
        printf("element not found\n");
    }
    return 0;
}
















































































