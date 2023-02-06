#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Ask the user to enter the password SuperSecret
// Fail if they do not enter it correctly
int main(int argc, char *argv[])
{
    char password[40];
    printf("Enter the password: ");
    scanf("%s", password);
    if (strcmp(password, "workshop{SuperSecret}") == 0)
    {
        printf("Correct password\n");
        return 0;
    }
    else
    {
        printf("Incorrect password\n");
        return 2;
    }
}
