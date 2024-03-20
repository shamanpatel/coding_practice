#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void split_and_print(const char *input, char delimiter, int field_num) {
    char *token = strtok((char *)input, &delimiter); // Splitting the input based on the delimiter

    int count = 0;
    while (token != NULL && count < field_num) {
        // Trim leading spaces
        char *trimmed_token = token;
        while (*trimmed_token == ' ')
            trimmed_token++;
        
        printf("%s\n", trimmed_token);
        token = strtok(NULL, &delimiter);
        count++;
    }
}

int main() {
    char input[100];
    char delimiter;
    int field_num;

    printf("Enter the input string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    printf("Enter the delimiter character: ");
    scanf(" %c", &delimiter); // Note the space before %c to consume any preceding whitespace
    getchar(); // Clearing the input buffer

    printf("Enter the field number: ");
    scanf("%d", &field_num);

    printf("Substrings:\n");
    split_and_print(input, delimiter, field_num);

    return 0;
}
// shaman@devdsk:~/workspace/coding_practice$ gcc Cut.c -o Cut
// shaman@devdsk:~/workspace/coding_practice$ ./Cut
// Enter the input string: Shaman, patel, is, a, good person. He, is, a, good, student at seattle university.
// Enter the delimiter character: ,
// Enter the field number: 5
// Substrings:
// Shaman
// patel
// is
// a
// good person. He
// shaman@devdsk:~/workspace/coding_practice$ gcc Cut.c -o Cut
// shaman@devdsk:~/workspace/coding_practice$ ./Cut
// Enter the input string: Shaman, patel, is, a, good person. He, is, a, good, student at seattle university.
// Enter the delimiter character: ,
// Enter the field number: 4
// Substrings:
// Shaman
// patel
// is
// a
// shaman@devdsk:~/workspace/coding_practice$ gcc Cut.c -o Cut
// shaman@devdsk:~/workspace/coding_practice$ ./Cut
// Enter the input string: Shaman, patel, is, a, good person. He, is, a, good, student at seattle university.
// Enter the delimiter character: .
// Enter the field number: 2
// Substrings:
// Shaman, patel, is, a, good person
// He, is, a, good, student at seattle university