#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int age = 30;

    printf("\n age : %d", age);

    int student_age[4] = {19, 19, 24, 28};

    // printf("\n Student age 1 : %d", student_age[0]);
    // printf("\n Student age 1 : %d", student_age[1]);
    // printf("\n Student age 1 : %d", student_age[2]);
    // printf("\n Student age 1 : %d", student_age[3]);
    printf("\n");

    for (int i = 0; i <= 3; i++)
    {
        printf("\n Student age %d Loop : %d", i + 1, student_age[i]);
    }
}