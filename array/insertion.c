// Insertion in an array
/*
What is meant by insertion in an array?
It refers to inserting an element in an array at a specific location:
1) insertion at end
2) insertion at beginning
3) insertion at the middle*/
/*
Algorithm of inserting an element in the array:

START
define an array
find the size of an array(number of elements)
store the size in n
if n == max_size
    print "array is full: insertion not possible"
    exit
else
    for i = n-1 to pos
    arr[i+1] == arr[i] (shifting the element one index ahead to the right)
    END for
    arr[pos] = new_element   //inserts the element at the desired location
    [n += 1]                 // updates the number of elements
END if
STOP*/

// Code1:

#include <stdio.h>

int main() {

    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;   // number of elements = 5
    int max_size = sizeof(arr)/sizeof(arr[0]);
    printf("size of array is: %d\n", max_size);

    int new_element;
    printf("enter a new element to be inserted: ");
    scanf("%d", &new_element);

    int pos;
    printf("enter the position(0 to %d):", n);
    scanf("%d", &pos);

    if(pos < 0 || pos > n){     // pos == n is valid for insertion at the end
        printf("invalid position entered!");
        return 0;
    }

    //condition check
    if(n == max_size){
        printf("Array is full: Insertion not possible");
        return 0;
    }
    else{
        for(int i = n-1; i >= pos; i--){
            arr[i+1] = arr[i];
        }

        //insertion of element
        arr[pos] = new_element;
        n += 1;

    }

    //printing the updated array
    printf("Array after insertion:");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}


// Code2:

#include <stdio.h>

int main() {

    int arr[10];
    int n;
    printf("enter the number of elements:\n"); // no. of elements is told by the user
    scanf("%d", &n);

    if(n < 0 || n > 10){
        printf("Invalid number of elements:\n");
        return 0;
    }

    printf("enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("enter the position(0 to %d):", n);
    scanf("%d", &pos);

    if(pos < 0 || pos > n){     // pos == n is valid for insertion at the end
        printf("invalid position entered!\n");
        return 0;
    }

    int new_element;
    printf("enter a new element to be inserted: ");
    scanf("%d", &new_element);

    //condition check
    if(n == 10){
        printf("Array is full: Insertion not possible\n");
        return 0;
    }
    else{
        for(int i = n-1; i >= pos; i--){
            arr[i+1] = arr[i];
        }

        //insertion of element
        arr[pos] = new_element;
        n += 1;

    }

    //printing the updated array
    printf("Array after insertion:");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}


// Time Complexity:
/*
Here time complexity depends upon shifting of elements in the array
In code1:
for (int i = n - 1; i >= pos; i--) {
    arr[i + 1] = arr[i];
}
Number of iterations depends upon pos:
1) Best case : insert at the end (pos == n)
2) Worst case : insert at the beginning (pos == 0)
3) Average case : insert about middle of the array (pos == n/2)

| Case         | Time Complexity |
| ------------ | --------------- |
| Best Case    | O(1)            |
| Worst Case   | O(n)            |
| Average Case | O(n/2) = O(n)   | Big Oh(O) ignores the const (n/2)

Therefore overall time complexity = O(n)

In code2:
Input of array elements:
for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}
The loop runs n times, therefore time = O(n)

Insertion:
for (int i = n - 1; i >= pos; i--) {
    arr[i + 1] = arr[i];
}
In worst case pos == 0 (runs n times)
Time = O(n)

As these two loops are sequential in the code2, therefore they add up
O(n) + O(n) = O(2n)= O(n) [const is ignored]
Therefore as they are executed sequentially and not nested; therefore the overall time complexity is O(n), not O(n²).

// Space Complexity:
Code1:

Variables created:
int n, pos, new_element;
int i;
Only Constant number of variables
No extra array
No recursion

Therefore the space complexity = O(1) [no extra memory is used apart from variables.]

Code 2:
Space complexity = O(1)*/


