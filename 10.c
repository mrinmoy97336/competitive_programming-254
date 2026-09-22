#include <stdio.h>
#include <string.h>
#include <ctype.h>

int equalIgnoreCase(char a[], char b[]) {
    int i = 0;

    while (a[i] && b[i]) {
        if (tolower(a[i]) != tolower(b[i]))
            return 0;
        i++;
    }

    return a[i] == b[i];
}

int main() {
    int n, i, found;
    char name[50], search[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    char names[n][50];

    printf("Enter student names:\n");
    for (i = 0; i < n; i++)
        scanf("%s", names[i]);

    printf("Enter name to search: ");
    scanf("%s", search);

    found = 0;

    for (i = 0; i < n; i++) {
        if (strcmp(names[i], search) == 0) {
            printf("Case-sensitive: Found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Case-sensitive: Not found\n");

    found = 0;

    for (i = 0; i < n; i++) {
        if (equalIgnoreCase(names[i], search)) {
            printf("Case-insensitive: Found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Case-insensitive: Not found\n");

    return 0;
}