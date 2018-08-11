#include <stdio.h>

int factorial(int num)
{
    if(num == 0)
        return 1;
    else
        return (num * factorial(num - 1));
}

int main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = factorial(n);
    printf("%d\n", result);
    return 0;
}
