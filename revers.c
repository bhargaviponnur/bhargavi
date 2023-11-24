
#include <stdio.h>
#include <conio.h>
int main()
{
    int number, revers = 0, rightdigit;
    printf("Enter a number \n");
    scanf("%d", &number);
    while (number != 0)
    {
        rightdigit = number % 10;
        revers = (revers * 10) + rightdigit;
        number = number / 10;
    }
    printf("reversed number : % d\n", revers);
    getch();
    return 0;
}
// site:B.com(compuers).degree
