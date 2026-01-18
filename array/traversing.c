// Traversing an array

/*
 * What is traversal of an array?
 * It refers to accessing the elements of an array sequentially.*/

/*
 * Algorithm of traversing an array:
 *
 * START
 * define an array
 * determine the size of array(upper bound)
 * for i = 0 to n-1 (increment i by 1)
 * print arr[i]
 * end for
 * STOP
 */

//code :

#include <stdio.h>

int main() {
    int arr[] = {3, 4, 5, 2, 8};  // Input

    size_t size = sizeof(arr)/ sizeof(arr[0]);
    printf("size of array is %zu\n", size);

    int i;          // Extra
    for(i=0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

// Time complexity
/*
 * As time complexity depends upon the number of times the loop runs, therefore:
 *
 * Here in traversing an array, for loop runs from i = 0 to n-1 i.e. n times
 * Time complexity of array traversal : O(n)
 * Time per iteration (for one element) : O(1)
 * Time for n iteration (for n elements) : n * O(1) = O(n)
 * As while traversing an array we visit each element, hence:
 *
 * | Case         | Time Complexity |
 * | ------------ | --------------- |
 * | Best Case    | O(n)            |
 * | Average Case | O(n)            |
 * | Worst Case   | O(n)            |
 *
 * Since Best = Average = Worst, therefore array traversal = Θ(n) {growth is fixed}
 */

// Space Complexity
/*
 * Space complexity only considers auxillary space, not the input space
 * Here in the traversal of array, arr[] is input space, while int i is auxillary space
 * Therefore:
 * Space complexity = O(1)
 *
 * What is counted in Space complexity:
 * 1) Loop variables (i,j)
 * 2) Temorary variables
 * 3) Extra arrays
 * 4) Recurssion stack
 */


