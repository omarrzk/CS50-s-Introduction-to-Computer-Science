#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float valueOne;
    float valueTwo;
    char operator;
    float answer;

    printf("Enter a number and an operator (+, -, *, /, ^ for power, # for square root): ");
    if (scanf("%f %c %f", &valueOne, &operator, &valueTwo) != 3) {
        printf("Invalid input\n");
        return 1; // Exit with an error code
    }

    switch (operator) {
        case '/':
            if (valueTwo != 0) {
                answer = valueOne / valueTwo;
            } else {
                printf("Division by zero is not allowed.\n");
                return 1;
            }
            break;
        case '*':
            answer = valueOne * valueTwo;
            break;
        case '+':
            answer = valueOne + valueTwo;
            break;
        case '-':
            answer = valueOne - valueTwo;
            break;
        case '^':
            answer = pow(valueOne, valueTwo);
            break;
        case '#':
            if (valueTwo >= 0) {
                answer = sqrt(valueTwo);
            } else {
                printf("Square root of a negative number is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Unknown operator.\n");
            return 1;
    }

    printf("%.9g %c %.9g =  %.6g\n\n", valueOne, operator, valueTwo, answer);
    return 0;
}
