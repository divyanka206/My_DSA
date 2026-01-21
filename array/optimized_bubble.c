// Optimized Bubble Sort:
/*
What is Optimized Bubble Sort?
In Optimized Bubble Sorting, in a full pass(outer loop):
if no swaps occur, then array is already sorted, exits the loop

In Normal Bubble Sorting, even if array is already sorted the loop continues and keeps on comparing, thus increasing time complexity*/

/*
Algorithm of Optimised Bubble Sort:

START
define an array
store the number of elements in n
for i = 0 to i = n-1
    initialise a flag = 0

    for j = 0 to n - 2 - i
        if arr[j] > arr[j+1] then
            swapping
            flag = 1
        END if
    END for

    if flag == 0
        BREAK
    END if

END for
STOP*/

// Code:

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; //Best Case(already sorted array)
    int n = 5;

    int temp;

    for(int i = 0; i < n-1; i++){
        int swapped = 0;   //flag

        for(int j = 0; j < n-2-i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1; //(if swap occurs then swapped = 1)
            }
        }

        if(swapped == 0){ // if no swap occurs in full pass then the loop breaks
            break;
        }

    }

    printf("Sorted Array:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", &arr[i]);
    }

    printf("\n");
    return 0;

}

/*
logic:

lets take an array [1, 2, 3, 5, 4]
n = 5
DRY RUN:

Pass 1(i=0):
inner loop 0 to 3
| j | Compare | Result | Array       | swapped |
| - | ------- | ------ | ----------- | ------- |
| 0 | 1 > 2   | ❌      | [1,2,3,5,4] | 0       |
| 1 | 2 > 3   | ❌      | [1,2,3,5,4] | 0       |
| 2 | 3 > 5   | ❌      | [1,2,3,5,4] | 0       |
| 3 | 5 > 4   | swap   | [1,2,3,4,5] | 1       |

after pass 1, swapped == 1, so no loop breaks

Pass2(i=1)
inner loop 0 to 2
| j | Compare | Result |
| - | ------- | ------ |
| 0 | 1 > 2   | ❌      |
| 1 | 2 > 3   | ❌      |
| 2 | 3 > 4   | ❌      |

after pass2, swapped == 0, loop breaks*/

/*
Time complexity:

For Best case (already sorted array):
Outer loop runs 2 times
Inner loop runs n times
Time complexity = O(2*n) = O(n)

Average case : O(n^2)
Worst case : O(n^2)

  | Case         | Time Complexity|
* | ------------ | -------------- |
* | Best Case    | O(n)           |
* | Worst Case   | O(n^2)         |
* | Average Case | O(n^2)         |
*

In optimized bubble sort, the average, and worst-case time complexities are O(n²) because the algorithm always performs all comparisons regardless of the initial order of elements, whereas in best case the the time complexity is O(n), making it much more optimized that upotimised buble sort




// Space Complexity:
* Code:
* Variables created:
* int i, j;
* int n, temp, swapped;
* Only Constant number of variables
* No extra array
* No recursion
*
* Therefore the space complexity(auxilary) = O(1) [no extra memory is used apart from variables.]
* Total space complexity = O(n) [total space complexity = input space + auxilary space = O(n)+O(1) = O(n)]
Input space = arr[n] = stores n elements
*/






















