#include<stdio.h>

int main()
{
        int num1,num2,num3, add, average;

    printf("My name is Cyrel Cabodbod\n");
    printf("Compute the Sum and Average of 3 inputted Numbers\n ");

    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    printf("Enter Third Number: ");
    scanf("%d", &num3);
    add = num1 + num2 + num3;
    average= add / 3;
    printf("Sum : %d \n", add);

    printf("Average: %d \n", average);

    return 0;
}
