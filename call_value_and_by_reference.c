#include <stdio.h>

int main()
{
    int a;
    a = 10;

    int *ptr = &a;
    printf("number is %d\n", a);    // call by valaue
    printf("number is %d\n", *ptr); // call by reference
    
    printf("\nAJAY YADAV,125113041");
    return 0;
}