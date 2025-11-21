#include <stdio.h>

int add(int *a, int *b)
{
    if (*a == 0)
    {
        return *b;
    }

    int c = *a % 10;
    *b += c;
    *a /= 10;

    return add(a, b);
}
int main()
{

    int num, sum = 0;
   
    printf("enter number :");
    scanf("%d", &num);

    printf("sum of digits is %d", add(&num, &sum));

     printf("\nAJAY YADAV,125113041");
    return 0;
}

