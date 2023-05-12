/*write C Program to Make a Simple Calculator
Using switch...case*/

#include <stdio.h>

int main()
{
    float operand1=0.00, operand2=0.00, result=0.00;
    char operator;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%f %f", &operand1, &operand2);

    switch(operator)
    {
    case '+':
        result = operand1 + operand2;
        printf("%.2f + %.2f = %.2f", operand1, operand2, result);
        break;

    case '-':
        result = operand1 - operand2;
        printf("%.2f - %.2f = %.2f", operand1, operand2, result);
        break;

    case '*':
        result = operand1 * operand2;
        printf("%.2f * %.2f = %.2f", operand1, operand2, result);
        break;

    case '/':
        if( operand2 ==0.00 )
        {
            puts("you cannot divide number by zero! ");
            break;
        }
        else
        {
            result = operand1 / operand2;
            printf("%.2f / %.2f = %.2f", operand1, operand2, result);
            break;
        }
    }

    return 0;
}
