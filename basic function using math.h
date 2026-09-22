#include <stdio.h>
#include <math.h>
#include <stdlib.h> // for system("cls") or system("clear")

int main() {
    int choice;
    double num1, num2, result;

    do {
        // Clear screen - use "cls" on Windows, "clear" on Linux/Mac
        system("cls"); // Replace with system("clear"); on Linux/Mac

        printf("=== MATH.H FUNCTION MENU ===\n");
        printf("1. Square Root (sqrt)\n");
        printf("2. Power (pow)\n");
        printf("3. Absolute Value (fabs)\n");
        printf("4. Sine (sin)\n");
        printf("5. Ceiling (ceil)\n");
        printf("6. Floor (floor)\n");
        printf("7. Natural Log (log)\n");
        printf("8. Log base 10 (log10)\n");
        printf("9. Exponential (exp)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter number: ");
                scanf("%lf", &num1);
                result = sqrt(num1);
                printf("sqrt(%.2f) = %.2f\n", num1, result);
                break;

            case 2:
                printf("Enter base: ");
                scanf("%lf", &num1);
                printf("Enter exponent: ");
                scanf("%lf", &num2);
                result = pow(num1, num2);
                printf("%.2f^%.2f = %.2f\n", num1, num2, result);
                break;

            case 3:
                printf("Enter number: ");
                scanf("%lf", &num1);
                result = fabs(num1);
                printf("fabs(%.2f) = %.2f\n", num1, result);
                break;

            case 4:
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                result = sin(num1 * (M_PI / 180.0));
                printf("sin(%.2f degrees) = %.2f\n", num1, result);
                break;

            case 5:
                printf("Enter number: ");
                scanf("%lf", &num1);
                result = ceil(num1);
                printf("ceil(%.2f) = %.2f\n", num1, result);
                break;

            case 6:
                printf("Enter number: ");
                scanf("%lf", &num1);
                result = floor(num1);
                printf("floor(%.2f) = %.2f\n", num1, result);
                break;

            case 7:
                printf("Enter number (>0): ");
                scanf("%lf", &num1);
                if (num1 > 0) {
                    result = log(num1);
                    printf("log(%.2f) = %.2f\n", num1, result);
                } else {
                    printf("Error: log undefined for non-positive numbers.\n");
                }
                break;

            case 8:
                printf("Enter number (>0): ");
                scanf("%lf", &num1);
                if (num1 > 0) {
                    result = log10(num1);
                    printf("log10(%.2f) = %.2f\n", num1, result);
                } else {
                    printf("Error: log10 undefined for non-positive numbers.\n");
                }
                break;

            case 9:
                printf("Enter exponent: ");
                scanf("%lf", &num1);
                result = exp(num1);
                printf("exp(%.2f) = %.2f\n", num1, result);
                break;

            case 0:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please select a valid option.\n");
        }

        printf("\nPress Enter to continue...");
        getchar(); // to consume leftover newline
        getchar(); // to pause until Enter is pressed

    } while(choice != 0);

    return 0;
}
