#include <stdio.h>

int main() {
    int listOfNums[50], size, i;

    printf("Enter size of array (up to 50):\n");
    scanf("%d", &size);

    printf("Enter elements of array:\n");
    for (i = 0; i < size; i++)
    {
       scanf("%d", &listOfNums[i]);
    }

    printf("The elements you entered are:\n");
    for (i = 0; i < size; i++) 
    {
        printf("%d\n", listOfNums[i]);
    }

    return 0;
}
