// Searching in array
/*
What is meant by searching in an array?
Searching refers to finding if the given element exists and if yes then at which particular position.

Types of Searching:
1) Linear Search [un-sorted array, small array/small data]
2) Binary Search [sorted array, large array/large data]*/

/*
Algorithm for Linear Search:

START
define an array
find the number of elements in array
store it in n
Input key(element) to be searched
for i = 0 to n-1
   if arr[i] == key
     print "element found at index i"
     exit
   END if
END for

if not found
    print "element not found"
END if
STOP*/

// Code1:

#include <stdio.h>

int main() {
    int arr[5] = {10,20,30,40,50};
    int n = 5;

    int key;
    printf("enter the key to search: ");
    scanf("%d", &key);

    int found = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            printf("found %d at index %d\n", key, i);
            found = 1;
            break;
        }
    }

    if(found == 0){
        printf("Key not found\n");
    }

    return 0;
}

// Code2:

#include <stdio.h>

int main() {
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  //defining an array
    printf("enter %d elements: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int key;  //taking input for the element to be searched
    printf("enter the element to search: ");
    scanf("%d", &key);

    int found = 0; //flag

    for(int i = 0; i < n; i++){
        if(arr[i] == key){    //condition check
            printf("Found %d at index %d\n", key, i);
            found = 1;
            break;    // loop wont run after key is found
        }
    }

    if (!found){
        printf("%d not found\n", key);
    }

    return 0;
}

// Time Complexity:
/*
 * In code1:
 * for (int i = 0; i < n; i++) {
 *    if(arr[i] == key){
 *         print(found)
 *    }
 * }
 * Number of iterations depends upon pos:
 * 1) Best case : finding at beginning (i == 0)
 * 2) Worst case : finding at the end (i == n-1)
 * 3) Average case : finding at middle of the array (pos == n/2)
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
 * Searching:
 * for (int i = 0; i < n; i++) {
 *    if(arr[i] == key){
 *         print(found)
 *    }
 * }
 * In worst case pos == n-1 (runs n times)
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
 * int n, key;
 * int i;
 * Only Constant number of variables
 * No extra array
 * No recursion
 *
 * Therefore the space complexity = O(1) [no extra memory is used apart from variables.]
 *
 * Code 2:
 * Space complexity = O(1)*/


























