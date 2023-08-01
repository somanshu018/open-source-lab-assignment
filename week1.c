#include <stdio.h>

int add(int a, int b)
{ return a+b; }

int sub(int a, int b)
{ return a-b ;}

int mult(int a, int b)
{ return a*b; }

int div(int a, int b)
{ return a/b; }


int main()
{
    printf("Please input 2 numbers: ");
    int a, b, x=0;
    scanf("%d %d", &a, &b);
    while(x == 0)
    {
        printf("\nWhat function would you like to conduct on your number:\n1. Add\n2. Sub\n3. Multiply\n4.Divide\n");
        scanf("%d", &x);
        if(x == 1)
        {
            printf("%d", add(a,b));
        }
        if(x==2)
        {
            printf("%d", sub(a,b));
        }
        if(x==3)
        {
            printf("%d", mult(a,b));
        }
        if(x==4)
        {
            printf("%d", div(a,b));
        }
        printf("\nPress 0 to continue or any key to finish.\n");
        scanf("%d", &x);
    }
}
