// This level uses a check_flag function that checks if the input in argv[1] is equal to workshop{Random_flag_here}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// you need to include this for memset

int check_flag(char *input)
{
    const char *enc_flag = "\x76\x6d\x71\x6a\x71\x6b\x6e\x72\x78\x53\x63\x6d\x65\x6d\x6e\x5e\x64\x6f\x60\x65\x5c\x69\x67\x71\x64\x7f";

    char *new_input = malloc(40);
    memset(new_input, 0, 40);
    unsigned char keys[] = {1, 2, 3};
    for (int i = 0; i < strlen(input); i++)
    {
        new_input[i] = (input[i] ^ keys[i % 3]);
    }
    return strncmp(new_input, enc_flag, 26);
}

void main(void)
{
    char input[40];
    memset(input, 0, 40);
    printf("Enter the password: ");
    scanf("%s", input);
    if (check_flag(input) == 0)
    {
        printf("Correct password");
    }
    else
    {
        printf("Incorrect password");
    }
}