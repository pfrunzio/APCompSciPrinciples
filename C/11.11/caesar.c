//Paola Frunzio
//11.10-11.2020
//caesar cipher

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Please enter the right command.\n");
        return 1;
    }

    int i, n, p, k = atoi(argv[1]);

    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    //encrypting
    for (i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isalpha(plaintext[i]) != 0)
        {
            p = (int)(plaintext[i]);
            p += k;
            //to make sure it stays a letter
            while (p >= 123)
            {
                p -= 26;
            }
            printf("%c", (char)p);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}