#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t_unit, unit_1, unit_2, prev, curr, total, total1, total2, rent, bill;
    double tax = 0.17;
    rent = 150;
    system("clear");
    // HEADER
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n ");
    printf("\t\t\t\t\t");
    printf("K.E MONTHLY BILL GENERATOR \n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n ");
    printf("\t\t\t\t\n");
    // USER INPUT
    printf("Enter Current Meter Reading ");
    printf("\t\t\t\t");
    scanf("%d", &curr);
    printf("\t\t\t\t\n");
    printf("Enter Previous Meter Reading ");
    printf("\t\t\t\t");
    scanf("%d", &prev);

    t_unit = curr - prev;
    // CONDITIONS
    if (t_unit <= 100)
    {
        unit_1 = t_unit;
        total1 = t_unit * 8;
        total = (total1 ) * tax;
        bill = total + total1 + rent;
        printf("\n");
        printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n ");
        printf("\t\t\t\t\t");
        printf("YOUR CURRENT BILL SUMMARY \n");
        printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n ");
        printf("\t\t\n\t\t\t");
        // UNIT TABLE
        printf("---------------------------------------------------------------");
        printf("\t\t\n\t\t\t");
        printf("Previous Reading \t Current Reading \t Total Units");
        printf("\t\t\n\t\t\t");
        printf("---------------------------------------------------------------");
        printf("\t\t\n\t\t\t");
        printf("\t %d \t\t\t   %d \t\t\t %d", prev, curr, t_unit);
        printf("\t\t\n\t\t\t\n\t\t\t");
        // SLAB TABLE
        printf("---------------------------------------------------------------");
        printf("\t\t\n\t\t\t");
        printf("Slabs \t\t Units \t\t Rate/Unit \t\t Amount");
        printf("\t\t\n\t\t\t");
        printf("---------------------------------------------------------------");
        printf("\t\t\n\t\t\t");
        printf("100 Units \t   %d \t\t   8 \t\t\t  %d", unit_1, total1);
        printf("\t\t\n\t\t\t");
        printf("---------------------------------------------------------------");
        printf("\t\t\n\t\t\t");
        printf("I.M.F Tax \t\t\t\t\t\t  %d ", total);
        printf("\t\t\n\t\t\t");
        printf("Meter Rent \t\t\t\t\t\t  150");
        printf("\t\t\n\t\t\t");
        printf("---------------------------------------------------------------");
        printf("\t\t\n\t\t\t");
        printf("Your Total Electricity Bill \t\t\t\t  %d", bill);
        printf("\t\t\n\t\t\t");
        printf("---------------------------------------------------------------");
        printf("\n");
        printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n ");
        printf("\t\t\t\t\t\t");
        printf("THANK YOU  \n");
        printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n ");
    }
    else if (t_unit > 100 && t_unit <= 200)
    {
        unit_2 = t_unit - 100;
        unit_1 = t_unit - unit_2;
        total1 = unit_1 * 8;
        total2 = unit_2 * 12;
        total = (total1 + total2) * tax;
        bill = total + total1 + total2 + rent;
        printf("\n");
        printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n ");
        printf("\t\t\t\t\t");
        printf("YOUR CURRENT BILL SUMMARY \n");
        printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n ");
        printf("\t\t\n\t\t\t");
        // UNIT TABLE
        printf("---------------------------------------------------------------");
        printf("\t\t\n\t\t\t");
        printf("Previous Reading \t Current Reading \t Total Units");
        printf("\t\t\n\t\t\t");
        printf("---------------------------------------------------------------");
        printf("\t\t\n\t\t\t");
        printf("\t %d \t\t\t %d \t\t\t %d", prev, curr, t_unit);
        printf("\t\t\n\t\t\t\n\t\t\t");
        // SLAB TABLE
        printf("---------------------------------------------------------------");
        printf("\t\t\n\t\t\t");
        printf("Slabs \t\t Units \t\t Rate/Unit \t\t Amount");
        printf("\t\t\n\t\t\t");
        printf("---------------------------------------------------------------");
        printf("\t\t\n\t\t\t");
        printf("100 Units \t %d \t\t   8 \t\t\t  %d", unit_1, total1);
        printf("\t\t\n\t\t\t");
        printf("200 Units \t %d \t\t  12 \t\t\t %d", unit_2, total2);
        printf("\t\t\n\t\t\t");
        printf("---------------------------------------------------------------");
        printf("\t\t\n\t\t\t");
        printf("I.M.F Tax \t\t\t\t\t\t  %d ", total);
        printf("\t\t\n\t\t\t");
        printf("Meter Rent \t\t\t\t\t\t  150");
        printf("\t\t\n\t\t\t");
        printf("---------------------------------------------------------------");
        printf("\t\t\n\t\t\t");
        printf("Your Total Electricity Bill \t\t\t\t %d", bill);
        printf("\t\t\n\t\t\t");
        printf("---------------------------------------------------------------");
        printf("\n");
        printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n ");
        printf("\t\t\t\t\t\t");
        printf("THANK YOU  \n");
        printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n ");
    }
    else
    {
        unit_2 = t_unit - 100;
        unit_1 = t_unit - unit_2;
        total1 = unit_1 * 8;
        total2 = unit_2 * 19;
        total = (total1 + total2 ) * tax;
        bill = total1 + total2 + rent + total;
        printf("\n");
        printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n ");
        printf("\t\t\t\t\t");
        printf("YOUR CURRENT BILL SUMMARY \n");
        printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n ");
        printf("\t\t\n\t\t\t");
        // UNIT TABLE
        printf("---------------------------------------------------------------");
        printf("\t\t\n\t\t\t");
        printf("Previous Reading \t Current Reading \t Total Units");
        printf("\t\t\n\t\t\t");
        printf("---------------------------------------------------------------");
        printf("\t\t\n\t\t\t");
        printf("\t %d \t\t\t %d \t\t\t %d", prev, curr, t_unit);
        printf("\t\t\n\t\t\t\n\t\t\t");
        // SLAB TABLE
        printf("---------------------------------------------------------------");
        printf("\t\t\n\t\t\t");
        printf("Slabs \t\t Units \t\t Rate/Unit \t\t Amount");
        printf("\t\t\n\t\t\t");
        printf("---------------------------------------------------------------");
        printf("\t\t\n\t\t\t");
        printf("100 Units \t %d \t\t   8 \t\t\t  %d", unit_1, total1);
        printf("\t\t\n\t\t\t");
        printf("200+ Units \t %d \t\t  19 \t\t\t %d", unit_2, total2);
        printf("\t\t\n\t\t\t");
        printf("---------------------------------------------------------------");
        printf("\t\t\n\t\t\t");
        printf("I.M.F Tax \t\t\t\t\t\t  %d ", total);
        printf("\t\t\n\t\t\t");
        printf("Meter Rent \t\t\t\t\t\t  150");
        printf("\t\t\n\t\t\t");
        printf("---------------------------------------------------------------");
        printf("\t\t\n\t\t\t");
        printf("Your Total Electricity Bill \t\t\t\t %d", bill);
        printf("\t\t\n\t\t\t");
        printf("---------------------------------------------------------------");
        printf("\n");
        printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n ");
        printf("\t\t\t\t\t\t");
        printf("THANK YOU  \n");
        printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n ");
    }
    // printf("\n");
    // printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n ");
    // printf("\t\t\t\t\t");
    // printf("YOUR CURRENT BILL SUMMARY \n");
    // printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n ");
    // printf("\t\t\n\t\t\t");
    // // UNIT TABLE
    // printf("---------------------------------------------------------------");
    // printf("\t\t\n\t\t\t");
    // printf("Previous Reading \t Current Reading \t Total Units");
    // printf("\t\t\n\t\t\t");
    // printf("---------------------------------------------------------------");
    // printf("\t\t\n\t\t\t");
    // printf("\t %d \t\t\t %d \t\t\t %d", prev, curr, t_unit);
    // printf("\t\t\n\t\t\t\n\t\t\t");
    // // SLAB TABLE
    // printf("---------------------------------------------------------------");
    // printf("\t\t\n\t\t\t");
    // printf("Slabs \t\t Units \t\t Rate/Unit \t\t Amount");
    // printf("\t\t\n\t\t\t");
    // printf("---------------------------------------------------------------");
    // printf("\t\t\n\t\t\t");
    // printf("100 Units \t Units \t\t Rate/Unit \t\t Amount");
    // printf("\t\t\n\t\t\t");
    // printf("200 Units \t Units \t\t Rate/Unit \t\t Amount");
    // printf("\t\t\n\t\t\t");
    // printf("---------------------------------------------------------------");
    // printf("\t\t\n\t\t\t");
    // printf("I.M.F Tax \t\t\t\t\t\t %d ", total);
    // printf("\t\t\n\t\t\t");
    // printf("Meter Rent \t\t\t\t\t\t   150");
    // printf("\t\t\n\t\t\t");
    // printf("---------------------------------------------------------------");
    // printf("\t\t\n\t\t\t");
    // printf("Your Total Electricity Bill \t\t\t\t%d", bill);
    // printf("\t\t\n\t\t\t");
    // printf("---------------------------------------------------------------");
    // printf("\n");
    // printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n ");
    // printf("\t\t\t\t\t\t");
    // printf("THANK YOU  \n");
    // printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n ");
}