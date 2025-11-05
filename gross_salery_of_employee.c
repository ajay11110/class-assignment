#include<stdio.h>

struct emp
{
    float basic;
    float da;
    float hra;
};

int main()
{
float salary=0;

struct emp e;

printf("ENTER BASIC SALARY: ");
scanf("%f",&e.basic);

printf("ENTER DA SALARY: ");
scanf("%f",&e.da);

printf("ENTER HRA SALARY: ");
scanf("%f",&e.hra);

salary=e.basic+e.da+e.hra;

printf("GROSS SALARY OF EMPLOYEE IS %f",salary);

printf("\nAJAY YADAV,125113041");
    return 0;
}