#include <stdio.h>

int main() {
    int n, i, below = 0, pos = 0;
    float threshold, sum = 0, min;

    printf("Enter number of students: ");
    scanf("%d", &n);

    float a[n];

    printf("Enter attendance percentages:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &a[i]);
        sum += a[i];
    }

    printf("Enter attendance threshold: ");
    scanf("%f", &threshold);

    min = a[0];

    for (i = 0; i < n; i++) {
        if (a[i] < threshold)
            below++;

        if (a[i] < min) {
            min = a[i];
            pos = i;
        }
    }

    printf("Students below threshold: %d\n", below);
    printf("Lowest attendance: %.2f%%\n", min);
    printf("Position: %d\n", pos + 1);
    printf("Average attendance: %.2f%%\n", sum / n);

    return 0;
}