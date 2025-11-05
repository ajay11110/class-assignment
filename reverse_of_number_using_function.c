#include <stdio.h>

int reverse(int num)
{
    int rev = 0;
    while (num != 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    return rev;
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = reverse(n);
    printf("Reversed number: %d", result);

    printf("\nAJAY YADAV,125113041");

    return 0;
}
