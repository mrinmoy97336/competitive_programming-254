#include <stdio.h>

int main() {
    int base, i, j, rows = 3, size = sizeof(int);
    int address;

    printf("Enter base address: ");
    scanf("%d", &base);

    printf("Enter row index: ");
    scanf("%d", &i);

    printf("Enter column index: ");
    scanf("%d", &j);

    address = base + ((j * rows + i) * size);

    printf("Address = %d", address);

    return 0;
}