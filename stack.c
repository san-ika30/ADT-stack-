#include <stdio.h>
#include <stdlib.h>

int main() {
    int top = -1;
    int choice, value, n;

    printf("Enter the size of the stack (n): ");
    scanf("%d", &n);

    int stack[n];

    while (1) {
        printf("\nStack operations:\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (top == n - 1) {
                    printf("Stack overflow\n");
                } else {
                    printf("Enter the value to push: ");
                    scanf("%d", &value);
                    top++;
                    stack[top] = value;
                    printf("Element %d pushed onto stack\n", value);
                }
                break;

            case 2:
                if (top == -1) {
                    printf("Stack underflow\n");
                } else {
                    printf("Element %d popped from stack\n", stack[top]);
                    top--;
                }
                break;

            case 3:
                if (top == -1) {
                    printf("Stack is empty\n");
                } else {
                    printf("Stack elements are:\n");
                    for (int i = top; i >= 0; i--) {
                        printf("%d\t", stack[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("Exiting program\n");
                exit(0);
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
