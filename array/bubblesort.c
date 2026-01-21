// Bubble sorting in array
/*
What is meant by bubble sorting in an array?
Bubble sorting is a technique by which sorting can be done, in which elemets are compared and swapped if in wrong order.*/

/*For ascending order:
Algorithm of bubble sort:

START
define an array
find number of elements n
for i = 0 to n-1
    for j = 0 to j = n - 1 - i
        if arr[j] > arr[j+1]
            swap arr[j] and arr[j+1]
        END if
    END for
END for
STOP*/

// Code:

#include <stdio.h>

int main() {
    int arr[5] = {5, 2, 9, 1, 6}; //defining an array
    int n = 5;       //number of elements
    int temp;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j+1]){     //condition check
                temp = arr[i];          //swapping method
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    printf("Array after sorting:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", &arr[i]); //sorted array
    }

    return 0;
}
/*
logic:
outer loop:

for (i = 0; i < n - 1; i++)
in the above loop:
controls how many times we scan the array
each pass places one element in its places

DRY RUN:
inner loop:

for (j = 0; j < n - 1 - i; j++)
compares adjacent elements
performs swap

PASS 1 (i = 0)
Inner loop runs from j = 0 → 3
j  Comparison  Action  Array
0   5 > 2      swap     [2, 5, 9, 1, 6]
1   5 > 9     no swap   [2, 5, 9, 1, 6]
2   9 > 1       swap    [2, 5, 1, 9, 6]
3   9 > 6       swap    [2, 5, 1, 6, 9]
✅ Largest element 9 is now fixed at the end.

PASS 2 (i = 1)
Inner loop runs from j = 0 → 2
j Comparison Action   Array
0   2 > 5   no swap  [2, 5, 1, 6, 9]
1   5 > 1   swap     [2, 1, 5, 6, 9]
2   5 > 6   no swap  [2, 1, 5, 6, 9]
✅ Second largest 6 is fixed.

PASS 3 (i = 2)
Inner loop runs from j = 0 → 1
j   Comparison   Action   Array
0   2 > 1        swap    [1, 2, 5, 6, 9]
1   2 > 5       no swap  [1, 2, 5, 6, 9]

PASS 4 (i = 3)
Inner loop runs from j = 0 → 0
j  Comparison  Action
0  1 > 2      no swap
✅ FINAL SORTED ARRAY
[1, 2, 5, 6, 9]

Outer loop bubbles one element to its place, while nested loop bubbles all elements to its place*/

// Time Complexity:
/*
 * In code:
 * Nested loop:
for(int i = 0; i < n - 1; i++){        *
    for(int j = 0; j < n - 1 - i; j++){
    }
}
 * Number of iterations depends upon pos:
 * 1) Best case : array is already sorted, still bubble sort performs all passess O(n^2)
 * 2) Worst case : all passess and comparisions run, O(n^2)
 * 3) Average case : all passes and comparisions run, maximum number of swaps, O(n^2)
 *
 * | Case         | Time Complexity |
 * | ------------ | --------------- |
 * | Best Case    | O(n^2)          |
 * | Worst Case   | O(n^2)          |
 * | Average Case | O(n^2)          |
 *
 * Therefore overall time complexity = O(n^2)
 In unoptimized bubble sort, the best, average, and worst-case time complexities are all O(n²) because the algorithm always performs all comparisons regardless of the initial order of elements.


// Space Complexity:
* Code:
* Variables created:
* int i, j;
* int n, temp;
* Only Constant number of variables
* No extra array
* No recursion
*
* Therefore the space complexity(auxilary) = O(1) [no extra memory is used apart from variables.]
* Total space complexity = O(n) [total space complexity = input space + auxilary space = O(n)+O(1) = O(n)]
  Input space = arr[n] = stores n elements
*/



















