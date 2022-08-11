#include <stdio.h>
int main()
{
    /* Initialize all of the needed variables */
    char op;
    float num1, num2; 
    /* Ask for the specific operator and store it in the "op" variable */
    printf("Enter an operator such as (+, -, *, /): ");
    scanf("%c", &op); 
    /* Ask for two numbers and store them both in their respected variables */
    printf("Enter two numbers with a space in between to calculate: ");
    scanf("%f %f", &num1, &num2);
    /* Construct the switch statement that checks the operator variable inputed previosly */
    switch (op) {
    /* The switch statment prints out the problem and the solution for the specific operator */
        case '+':
            printf("%0.2f + %0.2f = %0.2f", num1, num2, num1 + num2); 
            break;
        case '-':
            printf("%0.2f - %0.2f = %0.2f", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%0.2f * %0.2f = %0.2f", num1, num2, num1 * num2); 
            break;
        case '/':
            printf("%0.2f / %0.2f = %0.2f", num1, num2, num1 / num2);
            break;
        default:
            printf("Sorry, the operator that was entered was not a valid one.");
            break; 
    }
    return 0;
}



