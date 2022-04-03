/* Create a program that determining the age of a user, if he/she is eligible to vote*/
#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age < 18)
    {
        printf("You are not eligible to vote!! \n");
    }
    else{
        printf("You are eligible to vote!! \n");
    }


    return 0;
}
