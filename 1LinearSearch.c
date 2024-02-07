#include <stdio.h>

int main()
{
    int n, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n); // Time: O(1), Space: O(1)

    int ar[n];

    printf("\nEnter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]); // Time: O(n), Space: O(1)
    }

    printf("\nEnter the element to search: ");
    scanf("%d", &key); // Time: O(1), Space: O(1)

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == key)
        {
            flag = 1;
            break;
        }
    } // Best Case: O(1), Worst Case: O(n), Average Case: O(n/2) or simply O(n), Space: O(1)

    if (flag == 1)
    {
        printf("Element found in the array.\n"); // Best Case: O(1), Worst Case: O(1), Average Case: O(1), Space: O(1)
    }
    else
    {
        printf("Element not found in the array.\n"); // Best Case: O(1), Worst Case: O(1), Average Case: O(1), Space: O(1)
    }

    return 0;
}

/*
Algorithm:
0. Start
1. Input the size of the array
2. Input the elements of the array
3. Input the element to search for
4. Search for the element in the array
5. If the element is found, output "Element found in the array"
6. If the element is not found, output "Element not found in the array"
7. End
 */

/*
Complixity Analize:
Reading the size of the array: O(1) (constant time).
Reading elements of the array: O(n) (linear time, where "n" is the size of the array).
Searching for the element in the array:
Best Case: O(1) (element found at the beginning of the array).
Worst Case: O(n) (element not found or located at the end of the array).
Average Case: O(n) (average search time considering the element could be anywhere in the array).
Printing whether the element is found or not: O(1) (constant time).
The overall time complexity is dominated by the linear search through the array, resulting in O(n) for the worst case and average case. The best case occurs when the element is found at the beginning of the array, leading to a constant time complexity of O(1).

 */

/* 
Time Complexity: O(n)
Space Complexity: O(1)
 */