#include <math.h>
#include <stdio.h>

int main(void) {
    int n;

    printf("\nEnter n: \n");
    scanf("%d", &n);

    int operation_counter = 0;
    int math_call = 0;

    double sum = 0.0;
    double pow = 1.0;

    for (int i = 1; i <= n; i++) {
        double mul = 1.0;
        for (int j = 1; j <= i; j++) {
            mul *= j + cos(j);

            operation_counter += 5;
            math_call++;
        }
        pow *= 4.0;
        sum += mul / (pow - i);

        operation_counter += 9 + math_call;
    }

    operation_counter += 3;

    printf("The number of operations %d\n", operation_counter);
    printf("The result is %.7lf\n", sum);

    return 0;
}