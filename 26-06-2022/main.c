// PROGRAM NO.1

// #include <stdio.h>

// int main()
// {
//     printf("Hello, World! \n");
//     printf("Welcome to Shaikh Dev Inc. \n");
//     int year = 2019;
//     int revenue = 250;
//     printf("This Company was founded in %d \n", year);
//     printf("This Company has generated %dK revenue yearly \n", revenue);

//     return 0;
// }

// NOTES

// char single value like 's' or 'a' == %c
// char multiple value like 'sami' or 'ahmed' == %s
// int value like 12 or 234556 == %d
// float value like 12.23 or 234556.898 == %f

// PROGRAM NO.2

// #include <stdio.h>

// int main()
// {
//     int age = 25;                         // variable declared & initialized
//     float height = 55.55;                 // variable declared & initialized
//     char name = 'S';                      // variable declared & initialized
//     char name1[20] = "Shaikh Abdul Sami"; // variable declared & initialized

//     printf("My age is %d \n", age);
//     printf("My height is %f \n", height);
//     printf("My name is %c \n", name);
//     printf("My name is %s \n", name1);
// }

// PROGRAM NO.3

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your Age : ");
    scanf("%d", &age); // Used for User Input
    printf("Your Age is : %d \n", age);
    printf("Your POINTER Age variable is : %p \n", &age);

    char name[20];
    printf("Enter your Name : ");
    scanf("%s", &name); // Used for User Input
    // fgets(name, sizeof(name), stdin);
    printf("Your Name is : %s \n", name);
    printf("Your POINTER Name variable is : %p \n", &name);
}