#include<stdio.h>

int main() {

    int a, b, choice,  result;

    printf("\n A Simple Calculator: ");

    printf("\n1)Sum\n2)Subtraction\n3)Multiplication\n4)Division\n5)Square\n");
    printf("\n6)Percentage/Module")

    printf("Enter Your Choice (1 - 6): ");
    scanf("%d", &choice);

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter another number:");
    scanf("%d", &b);

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
            result = a / b;
            if(b == 0) {
                printf("The division of the Two NUbmers is: %d\n", result);

            }else ("The division with zero is not possible\n");
            break;
        case 5:
            result = a*a;
            printf("The square of the number is: %d\n", result);
            result = b*b;
            printf("The square of the number is: %d\n", result);
            break;
        case 6:
            result = a % 100*1000;
            printf("The percentage of the Numbers is: %d\n", result);
            result = b % 100*1000;
            printf("The percentage of the Number is: %d\n", result);
            break;
        default:
            printf("Invalid choice(1 - 6)\n");
    
    }

    return 0;

}