#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// int main()
// {
//     int guess, answer, count = 0;
//     char resond;
//     do
//     {
//         printf("Enter the number: ");
//         scanf("%d", &guess);
//         answer = 1 + rand() % 1000;
//         while (guess != answer)
//         {
//             count++;
//             if (guess > answer)
//             {
//                 printf("Too big,try again: ");
//             }
//             else if (guess < answer)
//             {
//                 printf("Too small,try again: ");
//             }
//             scanf("%d", &guess);
//         }
//         printf("You have guessed it\n You tried %d times.", count);
//         printf("play again ? [y / n] : ");
//         scanf("%c", &resond);
//     } while (resond == 'y');
// }

// Write a C program to display Pascal's triangle.
/*      1
      1   1 
    1   2   1 
  1   3   3   1
1   4   6   4   1*/

int main() {
    int row, c = 1, blank;
    printf("Enter the number of row: ");
    scanf("%d", &row);
    for(int i = 0;i < row;i++)
    {
        for (blank = 1; blank <= row - i;blank++)
        {
            printf("  ");
        }
        for(int j = 0;j <= i;j++)
        {
            if (j == 0 || i == 0)
            {
                c = 1;
            }
            else
            {
                c = c * (i - j + 1) / j;
            }
            printf("%4d", c);
        }
        printf("\n");
    }
}
