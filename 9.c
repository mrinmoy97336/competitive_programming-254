#include <stdio.h>

int main() {
    int n, i, max, min, maxHour, above = 0;
    float sum = 0, avg;

    printf("Enter number of hours: ");
    scanf("%d", &n);

    int patients[n];

    printf("Enter patient count for each hour:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &patients[i]);
        sum += patients[i];
    }

    max = min = patients[0];
    maxHour = 1;

    for (i = 1; i < n; i++) {
        if (patients[i] > max) {
            max = patients[i];
            maxHour = i + 1;
        }

        if (patients[i] < min)
            min = patients[i];
    }

    avg = sum / n;

    for (i = 0; i < n; i++) {
        if (patients[i] > avg)
            above++;
    }

    printf("Maximum patients: %d\n", max);
    printf("Hour of maximum patients: %d\n", maxHour);
    printf("Minimum patients: %d\n", min);
    printf("Peak hour: %d\n", maxHour);
    printf("Average patients: %.2f\n", avg);
    printf("Hours above average: %d\n", above);

    return 0;
}