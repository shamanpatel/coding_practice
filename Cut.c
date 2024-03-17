#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cut_bytes(const char *input, int start, int end) {
    int length = strlen(input);

    if (start < 0 || start >= length || end < 0 || end >= length || start > end) {
        printf("Invalid range, enter correct range.\n");
        return;
    }

    for (int i = start; i <= end; i++) {
        printf("%c", input[i]);
    }
    printf("\n");
}

int main() {
    char input[50];
    int start;
    int end;

    printf("Enter the input string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    printf("From index: ");
    scanf("%d", &start);

    printf("To index: ");
    scanf("%d", &end);

    if (start == end) {
        printf("Input String: %s\n", input);
        printf("%d:%c\n", start, input[start]);
    } else {
        printf("Input String: %s\n", input);
        printf("Range(%d-%d): ", start, end);
        cut_bytes(input, start, end);
    }

    return 0;
}
// shaman@devdsk:~/workspace/coding_practice$ gcc Cut.c -o Cut
// shaman@devdsk:~/workspace/coding_practice$ ./Cut
// Enter the input string: Sachi Sagarkumar Patel
// From index: 0
// To index: 20
// Input String: Sachi Sagarkumar Patel
// Range(0-20): Sachi Sagarkumar Pate
// shaman@devdsk:~/workspace/coding_practice$ gcc Cut.c -o Cut
// shaman@devdsk:~/workspace/coding_practice$ ./Cut
// Enter the input string: Sachi Patel
// From index: 0
// To index: 0
// Input String: Sachi Patel
// 0:S