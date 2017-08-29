#include <stdio.h>
int main()
{
    int i;

    printf("Enter a number: ");
    scanf("%d", &i);

    if (number <= 0.0)
    {
        if (number == 0.0)
            printf("it is 0");
        else
            printf("it is a negative number.");
    }
    else
        printf("it is a positive number.");
    return ;
}
