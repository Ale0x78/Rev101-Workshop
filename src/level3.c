// This level uses a check_flag function that checks if the input in argv[1] is equal to workshop{Random_flag_here}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// you need to include this for memset

int check_flag(char *input)
{
    const char *enc_flag = "\x74\x6e\x73\x68\x71\x6b\x6e\x72\x7a\x50\x63\x6d\x66\x6e\x6f\x5c\x67\x6d\x63\x65\x5c\x6b\x66\x73\x66\x7e";

    char *new_input = malloc(40);
    memset(new_input, 0, 40);
    unsigned char keys[] = {0x01, 0x02, 0x03};
    for (int i = 0; i < strlen(enc_flag); i++)
    {
        new_input[i] = (enc_flag[i] ^ keys[i % 3]);
    }
    printf("Result is %s \n", new_input);
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