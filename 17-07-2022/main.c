/*
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// PROGRAM NO. 01 (SWITCH CASE)
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/

// #include <stdio.h>

// int main()
// {
//     int age;
//     printf("Enter yout age ");
//     scanf("%d", &age);
//     printf("\n");

//     switch (age)
//     {
//     case 50:
//         printf(" Your are Old \n");
//         break;
//     case 30:
//         printf("Your are mature \n ");
//         break;
//     case 18:
//         printf(" Your are Teenage \n ");
//         break;
//     default:
//         printf(" You are Dead \n");
//     }
// }
/*
@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// PROGRAM NO. 02 (FOR LOOP)
@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/

// #include <stdio.h>

// int main()
// {
//     for (int i = 1; i <= 15; i++)
//     {
//
//         printf("Welcome %d", i);
//         printf("\n");
//     }
// }

/*
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// PROGRAM NO. 03 (FOR LOOP TABLE)
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/

// #include <stdio.h>

// int main()
// {
//     int num = 0;
//     printf("Enter any number ");
//     scanf("%d", &num);

//     for (int i = 1; i <= 12; i++)
//     {
//         printf("\n");
//         printf("%d x %d = %d", num, i, num * i);
//         printf("\n");
//     }
// }

/*
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// PROGRAM NO. 04 (FOR LOOP TABLE ADV.)
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/

// #include <stdio.h>

// int main()
// {
//     // int num = 0;
//     // printf("Enter any number ");
//     // scanf("%d", &num);

//     for (int i = 1; i <= 12; i++)
//     {
//         for (int j = 1; j <= 12; j++)
//         {
//
//             printf("\n");
//             printf("%d x %d = %d", i, j, i * j);
//             printf("\n");
//         }

//         printf("----------------------");
//         // printf("%d x %d = %d", num, i, num * i);
//         // printf("\n");
//     }
// }

/*
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// PROGRAM NO. 05 (FOR LOOP SQUARE BOX)
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/

// #include <stdio.h>

// int main()
// {
//     int rows = 0;
//     printf("Enter Number of Rows ");
//     scanf("%d", &rows);

//     for (int i = 1; i <= rows; i++)
//     {
//         printf("******\n");
//     }
// }

/*
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// PROGRAM NO. 06 (FOR LOOP SHAPE TASK)
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/

// #include <stdio.h>

// int main()
// {
//     int rows = 0;
//     printf("Enter Number of Rows ");
//     scanf("%d", &rows);
//     int col = 0;
//     printf("Enter Number of Columns ");
//     scanf("%d", &col);

//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

/*
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// PROGRAM NO. 07 (While LOOP)
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/

// #include <stdio.h>

// int main()
// {
//     int num = 1;
//     while (num <= 10)
//     {
//
//         printf("Welcome[%d] \n", num);
//         num++;
//     }
//     printf("End While Loop");
// }

/*
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// PROGRAM NO. 08 (Do While LOOP)
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/

// #include <stdio.h>

// int main()
// {
//     int num = 1;
//     do
//     {
//         printf("Welcome[%d] \n", num);
//         num++;
//     } while (num <= 10);
// }

/*
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// PROGRAM NO. 09 (for While LOOP Task)
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/

// #include <stdio.h>

// int main()
// {
//     int out = 0;
//     printf("Enter Outter number ");
//     scanf("%d", &out);
//     int inner = 0;
//     printf("Enter Inner number ");
//     scanf("%d", &inner);
//     for (int i = 1; i <= out; i++)
//     {
//         int j = 0;
//         printf("\n Outter %d \n", i);
//         printf("Inside ");
//         while (j <= inner)
//         {
//             printf(" %d ", j);
//             j++;
//         }
//     }
// }

/*
@@@@@@@@@@@@@@@@@@@@@@@@@
// PROGRAM NO. 10 (ASCII)
@@@@@@@@@@@@@@@@@@@@@@@@@
*/

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     system("clear");

//     for (int i = 0; i <= 255; i++)
//     {
//         printf("%d \t %c \n", i, i);
//     }
// }
