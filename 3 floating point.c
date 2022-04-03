#include <stdio.h>

int main() {
    float num1,num2,num3, average;

    printf("Enter 3 Floating point number: \n"); /*display text*/
    printf(""); /*input num1*/
    scanf("%f", &num1); /*scan num1*/
    printf(""); /*input num2*/
    scanf("%f", &num2); /*scan num2*/
    printf(""); /*input num3*/
    scanf("%f", &num3); /*scan num3*/

    average = (num1+num2+num3)/3; /*formula for the average by adding the 3 numbers and divide it by 3*/

    printf("\nAverage= %.1f",average); /*the result*/

    return 0;
}
