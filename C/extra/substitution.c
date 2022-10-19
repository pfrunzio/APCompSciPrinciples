//Paola Frunzio
//10.28-11.5.2020
//encrypt text with a key given by the user

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    //get key
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    //length
    // string key[] = argv[2];
    // if (strlen(key) != 26)
    // {
    //     printf("Key must contain 26 characters.\n");
    //     return 1;
    // }
    //non alphabetic characters
    //repeated characters


    //validate key
    //get plaintext
    string plaintext = get_string("Text: ");

    //encipher
    //print cyphertext

}