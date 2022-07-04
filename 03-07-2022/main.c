// PROGRAM NO.01

// #include <stdio.h>

// int main()
// {
//     int physics, chemistry, maths, english, urdu, pst, total, obtained;
//     float percent;
//     total = 600;
//     printf("\n\n -----------------");
//     printf("\n\n MARKSHEET PROGRAM");
//     printf("\n\n -----------------");
//     printf("\n Enter Physics Marks ");
//     scanf("%d", &physics);
//     printf("\n Enter Chemsitry Marks ");
//     scanf("%d", &chemistry);
//     printf("\n Enter Mathematics Marks ");
//     scanf("%d", &maths);
//     printf("\n Enter English Marks ");
//     scanf("%d", &english);
//     printf("\n Enter Urdu Marks ");
//     scanf("%d", &urdu);
//     printf("\n Enter Pak.Studies Marks ");
//     scanf("%d", &pst);

//     printf("\n\n Your Physics marks are : %d ", physics);
//     printf("\n\n Your Chemistry marks are : %d ", chemistry);
//     printf("\n\n Your Mathematics marks are : %d ", maths);
//     printf("\n\n Your English marks are : %d ", english);
//     printf("\n\n Your Urdu marks are : %d ", urdu);
//     printf("\n\n Your Pak.Studies marks are : %d ", pst);

//     obtained = physics + chemistry + maths + english + urdu + pst;

//     printf("\n\n Your Obtained marks are : %d ", obtained);
//     percent = obtained / 600.0 * 100.0;
//     printf("\n\n Your Total Perctage is : %f ", percent);
//     printf("\n\n -----------------------");
//     printf("\n\n MARKSHEET PROGRAM ENDED");
//     printf("\n\n -----------------------");
// };

// PROGRAM NO.02

// #include <stdio.h>
// int main()
// {
//     int num, square;
//     printf("Enter any number");
//     scanf("%d", &num);
//     square = num * num;
//     printf("Square is : ");
//     printf("%d", square);
// }

// PROGRAM NO.03

// #include <stdio.h>
// int main()
// {
//     int num1, num2, div, rem;
//     printf("\n Enter any number");
//     scanf("%d", &num1);
//     printf("\n Enter any number");
//     scanf("%d", &num2);
//     div = num1 / num2;
//     rem = num1 % num2;
//     printf("\n %d divided by %d is %d \n", num1, num2, div);
//     printf("\n %d divided by %d remainder is  %d \n", num1, num2, rem);
// };

// PROGRAM NO.04

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int random = rand();
    int remainder = random % 6;
    printf("The number is %d \n", random);
    remainder = remainder + 1;

    printf("The Remainder is %d \n ", remainder);
}