// Deletion in an array
/*
What is meant by deletion in an array
It refers to deletion of an element in an array at a specific location
1) deletion at end (n-1 pos)
2) deletion at beginning
3) deletion at the middle*/

/*
Algorithm of deleting an element of an array:

START
define an array
find the size of array(number of elements)
store the size in n
if n == 0
    print "Array is empty: Deletion not possible"
    exit
else
    for i = pos to n-2
        arr[i] = arr[i+1]
    END for
    n -= 1
END if
STOP*/

// Code1:

#include <stdio.h>

int main() {
    int arr[10] = {10,40,20,30,40};
    int n = 5;  // 5 elements in array

    int pos;
    printf("enter the position (0 to %d): ", n-1);
    scanf("%d", &pos);

    if(pos < 0 || pos >= n){
        printf("Invalid position!\n");
        return 0;
    }


    if(n == 0){
        printf("Array is empty: Deletion not possible!\n");
        return 0;
    }
    else{
        for(int i = pos; i<= n-2; i++){
            arr[i] = arr[i+1];
        }

        n -= 1;
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;

}


// Code 2:

#include <stdio.h>

int main() {
    int arr[10];
    //number of elements to be entered in array
    int n;
    printf("enter the number of elements(max = 10): ");
    scanf("%d", &n);

    if(n < 0 || n > 10){
        printf("Invalid number of elements!\n");
        return 0;
    }

    //taking input from user
    printf("enter elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("enter the position: ");
    scanf("%d", &pos);

    if(pos < 0 || pos >= n){  // pos == n is not valid for deletion as it goes out of bound
        printf("Invalid position!\n");
        return 0;
    }

    //condition check
    if(n == 0){    //nothing to delete
        printf("Array is empty: Deletion not possible\n");
        return 0;
    }
    else{
        for(int i = pos; i <= n-2; i++){
            arr[i] = arr[i+1];   // arr[n-2] = arr[n-2+1] = arr[n-1]
        }

        n -= 1; //updating the number of elements in the array
    }

    // printing the updated array
    printf("Array after deletion:");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;

}

/*
logic:

why take i = pos to n-2?
let's suppose:
Index:  0   1   2   3   4
Array: 10  20  30  40  50
n = 5
Delete element at pos = 1(value = 20)
Now acc to for loop: i = 1 to (5-2 = 3)
i = 1 → arr[1] = arr[2]
i = 2 → arr[2] = arr[3]
i = 3 → arr[3] = arr[4]

if we went to i = 4
arr[4] = arr[5]  (invalid as arr[5] is out of bound)
Therefore we cant take i = pos to n-1*/

// Time Complexity:
/*
 * Here time complexity depends upon shifting of elements in the array (right to left)
 * In code1:
 * for (int i = pos; i <= n-2; i++) {
 *    arr[i] = arr[i+1];
 * }
 * Number of iterations depends upon pos:
 * 1) Best case : delete at the end (pos == n-1)
 * 2) Worst case : delete at the beginning (pos == 0)
 * 3) Average case : delete about middle of the array (pos == n/2)
 *
 * | Case         | Time Complexity |
 * | ------------ | --------------- |
 * | Best Case    | O(1)            |
 * | Worst Case   | O(n)            |
 * | Average Case | O(n/2) = O(n)   | Big Oh(O) ignores the const (n/2)
 *
 * Therefore overall time complexity = O(n)
 *
 * In code2:
 * Input of array elements:
 * for (int i = 0; i < n; i++) {
 *    scanf("%d", &arr[i]);
 * }
 * The loop runs n times, therefore time = O(n)
 *
 * Deletion:
 * for (int i = pos; i <= n-2; i++) {
 *    arr[i] = arr[i+1];
 * }
 * In worst case pos == 0 (runs n times)
 * Time = O(n)
 *
 * As these two loops are sequential in the code2, therefore they add up
 * O(n) + O(n) = O(2n)= O(n) [const is ignored]
 * Therefore as they are executed sequentially and not nested; therefore the overall time complexity is O(n), not O(n²).
 *
 * // Space Complexity:
 * Code1:
 *
 * Variables created:
 * int n, pos
 * int i;
 * Only Constant number of variables
 * No extra array
 * No recursion
 *
 * Therefore the space complexity(auxilary) = O(1) [no extra memory is used apart from variables.]
 * Total space complexity = O(n) [total space complexity = input space+ auxilary space]
 *
 * Code 2:
 * Space complexity = O(1)*/
