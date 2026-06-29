#include <stdio.h>

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }

float divide(float a, float b) {
    if (b == 0) {
        printf("Cannot divide by zero\n");
        return 0;
    }
    return a / b;
}

int main() {
    int choice;
    float a, b;

    while (1) {
        printf("\n1.Add 2.Sub 3.Mul 4.Div 5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 5) break;

        printf("Enter 2 numbers: ");
        scanf("%f %f", &a, &b);

        switch (choice) {
            case 1: printf("Result: %.2f\n", add(a,b)); break;
            case 2: printf("Result: %.2f\n", subtract(a,b)); break;
            case 3: printf("Result: %.2f\n", multiply(a,b)); break;
            case 4: printf("Result: %.2f\n", divide(a,b)); break;
            default: printf("Invalid choice\n");
        }
    }

    return 0;
}