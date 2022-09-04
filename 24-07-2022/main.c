#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int prev, curr, unit, bill, imf, rent, total, choice;
    choice = 0;

    do
    {
        system("clear");
        printf("\n Prev Reading ");
        scanf("%d", &prev);
        printf("\n Curr Reading ");
        scanf("%d", &curr);

        unit = curr - prev;
        bill = unit * 10;
        imf = bill * 0.10;
        rent = 150;
        total = bill + imf + rent;

        printf("\n units %d ", unit);
        printf("\n bill %d ", bill);
        printf("\n imf %d ", imf);
        printf("\n rent %d ", rent);
        printf("\n total %d ", total);

        printf("\n Do you want to continue.... ");
        printf("Press 1 to generate another bill ");
        scanf("%d", &choice);

    } while (choice == 1);
    printf("Thank you for using ");
}
