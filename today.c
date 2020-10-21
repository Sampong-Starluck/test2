#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// int main() {
//     float a, b, c, delta;
//     printf("Enter the number for a: ");
//     scanf("%d", &a);
//     printf("Enter the number for b: ");
//     scanf("%d", &b);
//     printf("Enter the number for c: ");
//     scanf("%d", &c);

//     delta = (b * b) - (4 * a * c);

//     if (delta > 0)
//     {
//         printf("The roots are: %.2f, %.2f", ((-b + sqrt(delta)) / (2 * a)), ((-b - sqrt(delta)) / (2 * a)));
//     }
//     else if (delta == 0)
//     {
//         printf("The root is %.2f",(-b) / (2 * a));
//     }
//     else
//     {
//         printf("There are no roots.");
//     }
    
// }

/*Write a program that uses looping to print the following table of values.
Use the tab escape sequence, \t, in the printf statement to separate the columns with tabs.*/
// int main() {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     printf("N\tN^2\tN^3\tN^4\n");
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d\t%d\t%d\t%d\n", i, (i * i), (i * i * i), (i * i * i * i));
//     }
// }

// int main() {
//     int num, i = 1, sum = 0;
//     while (i != 0)
//     {
//         printf("Enter the number: ");
//         scanf("%d", &num);
//         if (num == 0)
//         {
//             break;
//         }
//         sum += num;
//     }
//     printf("The total summation: %d", sum);
// }

// Program code to Display Fibonacci Series 1 1 2 3 5 8 13 ...
// void fibonacci(int a)
// {
//     int f1 = 0, f2 = 1, f;
//     printf("%d %d ", f1, f2);
//     for (int i = 2; i < a; i++)
//     {
//         f = f1 + f2;
//         f1 = f2;
//         f2 = f;
//         printf("%d ", f);
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter the number: ");
//     scanf("%d", &num);
//     fibonacci(num);
// }

// check palindrome in c madam 121
int main() {
    char a[10], b[10];
    printf("Enter a string: ");
    scanf("%s", &a);
    strcpy(b, a);
    strrev(b);
    if (strcmp(a, b) == 0)
    {
        printf("This string is a palindrome.");
    }
    else
    {
        printf("This string is not a palindrome");
    }
    
}