#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int ar[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, flag = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (ar[mid] == key)
        {
            flag = 1;
            break;
        }
        else if (ar[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (flag == 1)
    {
        printf("Element found.\n");
    }
    else
    {
        printf("Element not found.\n");
    }
    return 0;
}

/*

Algorithm:
1. Start
2. Input the size of the array
3. Input the elements of the array
4. Input the element to search for
5. Set low to 0, high to n-1, and flag to 0.
6. While low is less than or equal to high, do steps 7-10:
    7. Calculate mid as (low + high) / 2.
    8. If the element at index mid in the array 'ar' is equal to key, set flag to 1 and break the loop.
    9. Else, if the element at index mid in the array 'ar' is less than key, update low to mid + 1.
    10. Else, update high to mid - 1.
11. If flag is 1, output "Element found."
12. Else, output "Element not found."
13. End.
 */