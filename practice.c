# include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char *argv[]){
    FILE * file;
    int lines = 0, words = 0, characters = 0;
    int state = OUT;
    char c;

    if (argc != 2){
        printf("Enter a valid: %s filename\n", argv[0]);
        return 1;
    }

    file = fopen(argv[1], "r");
    if (file == NULL){
        perror("Error");
        return 1;
    }

    while((c = getc(file)) != EOF){
            characters ++;
            if (c == '\n')
                lines ++;
            if (c == ' ' || c == '\n' || c == '\t')
                state = OUT;
            else if (state == OUT) {
            state = IN;
            words++;
            }
        }
        fclose (file);

        printf("Total lines: %d\n", lines);
        printf("Total Words: %d\n", words);
        printf("Total characters: %d\n", characters);

    return 0;
}

// Enter a valid: /home/shaman/practice filename
// [1] + Done                       "/usr/bin/gdb" --interpreter=mi --tty=${DbgTerm} 0<"/tmp/Microsoft-MIEngine-In-4okhfmz5.d5m" 1>"/tmp/Microsoft-MIEngine-Out-kyhqmevs.h2l"
// shaman@devdsk:~$ gcc -o word_count practice.c
// shaman@devdsk:~$ wc -w practice.c
// 116 practice.c
// shaman@devdsk:~$ ./word_count practice.c
// Total lines: 41
// Total Words: 116
// Total characters: 873
// shaman@devdsk:~$ ^C
// shaman@devdsk:~$ ^C
// shaman@devdsk:~$ 
