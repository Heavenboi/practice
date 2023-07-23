#include <stdio.h>

/**
 * a program that sort an array in ascending order using a bubble sort.
 *
 */

void bubbleSearch(int arr[], int size);
int main()
{
    int nums[] = {2, 7, 9, 10, 4, 6, 5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int i;

    bubbleSearch(nums, numsSize);
    printf("Printing the list:\n");
    for (i = 0; i < numsSize; i++)
    {
        printf("%d\n", nums[i]);
    }

    return 0;
}

void bubbleSearch(int arr[], int size)
{
    int i, j;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            // swap if current element is greater than the next element.
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}