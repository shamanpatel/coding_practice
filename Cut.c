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
    char input[100];
    int start, end;
    char ranges[50]; 

    printf("Enter the input string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    printf("Enter the ranges from start1-end1,start2-end2,...): ");
    fgets(ranges, sizeof(ranges), stdin);

    // Replace '\n' with '\0' to remove newline character
    ranges[strcspn(ranges, "\n")] = '\0';

    // strtok() is used to delimit the string into substrings. Here the delimiter is ','.
    char *token = strtok(ranges, ",");
    while (token != NULL) {
        // sscanf is uded to parse the token ranges.
        sscanf(token, "%d-%d", &start, &end);

        if (start == end) {
            printf("Input String: %s\n", input);
            printf("%d:%c\n", start, input[start]);
        } else {
            printf("Input String: %s\n", input);
            printf("Range(%d-%d): ", start, end);
            cut_bytes(input, start, end);
        }

        token = strtok(NULL, ","); // Move to the next token
    }

    return 0;
}
