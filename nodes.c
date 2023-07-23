#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[30];
    int grade;
    int age;
    struct student *next;
};

int main()
{
    struct student nodeOne, nodeTwo, nodeThree;
    scanf("%s %d %d", nodeOne.name, nodeOne.grade, nodeOne.age);
    scanf("%s %d %d", nodeTwo.name, nodeTwo.grade, nodeTwo.age);
    scanf("%s %d %d", nodeThree.name, nodeThree.grade, nodeThree.age);
}
