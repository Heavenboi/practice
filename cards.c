#include <stdio.h>
#include <stdlib.h>

/**
* Program to evaluate cads values.
* Returns program value on success.
* Rertuns error massage on fail.
*/

int main()
{
    char cards_name[3];
    puts("Enter cards name: ");
    scanf("%s", cards_name);
    int val = 0;
    if (cards_name[0] == 'K')
        {
            val = 10;
        }
    else if (cards_name[0] == 'Q')
        {
            val = 10;
        }
    else if (cards_name[0] == 'J')
        {
            val = 10;
        }
    else if (cards_name[0] == 'A')
        {
            val = 11;
        }
    else
        {
            printf("Error! please enter K,Q,J or A.\n");
        }
    printf("The card value is: %d\n", val);

        return 0;

        
}