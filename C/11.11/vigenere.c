//Paola Frunzio
//11.11.2020
//vigenere cipher

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }

    string key = argv[1];
    int i, n, p, k, out, j = 0, klength = strlen(key);

    //check that it's all alphabetical characters
    for (i = 0; i < klength; i ++)
    {
        if (isalpha(key[i]) == 0)
        {
            printf("Usage: ./vigenere k\n");
            return 1;
        }
    }

    //get plaintext
    string plaintext = get_string("plaintext: ");
    n = strlen(plaintext);

    string ciphertext = plaintext;

    printf("ciphertext: ");
    for (i = 0; i <= n; i ++)
    {
        if (isalpha(plaintext[i]) != 0)
        {
            //get the key
            k = (int)key[j];
            if (k >= 97 && k <= 122)
            {
                k -= 97;
            }
            else if (k >= 65 && k <= 90)
            {
                k -= 65;
            }
            j ++;
            if (j == klength)
            {
                j = 0;
            }

            //encrypting
            p = (int)(plaintext[i]);
            out = p + k;
            //need some check to keep them all letters and in the right case
            if (p >= 97 && p <= 122)
            {
                while (!(out >= 97 && out <= 122))
                {
                    out -= 26;
                }
            }
            else if (p >= 65 && p <= 90)
            {
                while (!(out >= 65 && out <= 90))
                {
                    out -= 26;
                }
            }
            ciphertext[i] = out;
        }
        else
        {
            ciphertext[i] = plaintext[i];
        }
    }

    printf("%s\n", ciphertext);
}