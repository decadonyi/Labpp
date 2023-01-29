#include <stdio.h>

int main() {

    int sum, subtraction, multiplication, division, module;
    int n1, n2;
    printf("Insert the first int value: ");
    scanf ("%d", &n1);
    printf("Insert the second int value: ");
    scanf("%d",&n2);
    sum = n1 + n2;
    subtraction = n1 - n2;
    multiplication = n1 * n2;
    division = n1 / n2;
    module = n1%n2;

    printf("Results from the operations using the essetial of the operations \n");
    printf("Sum %d \n", sum);
    printf("Subtraction %d \n", subtraction);
    printf("Multiplication %d \n", multiplication);
    printf("Division %d \n", division);
    printf("Module %d \n", module);

    return 0;
}
