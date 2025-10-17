#include<stdio.h>

int main() {

    int a, b, choice, result;

    printf("\n A Simple Calculator: ");

    printf("\n1)Sum\n2)Subtraction\n3)Multiplication\n4)Division\n5)Square\n");

    choice = 0;
    while (choice < 1 || choice > 5) {
    printf("Enter Your Choice(1 - 5): ");
    scanf("%d", &choice);
    if(choice < 1 || choice > 5) {
        printf("Invalid choice.Try again.\n");

    }
    }

    if(choice == 5) {
        printf("Enter a Number: ");
        scanf("%d", &a);
    result = a*a;
        printf("The square of the number is: %d\n",result);
    }else {
        printf("Enter a first number: ");
        scanf("%d", &a);

        printf("Enter a second number: ");
        scanf("%d", &b);
    }

    switch (choice) {
        case 1:
            result = a + b;
            printf("The Sum of the Two Numbers is: %d\n", result);
            break;
        case 2:
            result = a - b;
            printf("The Subtraction of the Two numbers is: %d\n", result);
            break;
        case 3:
            result = a * b;
            printf("The Multiplication of the Two nubmers is: %d\n", result);
            break;
        case 4:
            if(b != 0) {
                
                printf("The division of the Two Nbmers is: %d\n", a / b);

            break;
            }else {
                printf("The division with zero is not possible\n");
            }

    return 0;
    }
}