#include <stdio.h>

#include "myfunc.h"

int main() {
    printf("Enter a non-negative number: ");
    double n;
    if (scanf("%lf", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a non-negative number.\n");
        return 0;      }        

    // ��������, ��� �������� ������ ���� �����
    int d;
    while ((d = getchar()) != '\n' && d != EOF) {
        if (d != ' ') {
            printf("Invalid input. Please enter only one positive integer.\n");
            return 0;
        }
    }

    printf("Fibonacci of %f is %d\n", n, fibonachi((int)n));
 
    double *roots;

    printf("Enter a, b, c\n");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    roots = solveQuadraticEquation(a, b, c);
	
    if (roots == NULL) {
        printf("No real roots\n");
    } else {
        printf("ROOT1 %f\n", roots[0]);
        printf("ROOT2 %f\n", roots[1]);
        free(roots);
    }
    
    return 0;
}