//Paola Frunzio
//10.30.2020
//compute absolute value

#include <stdio.h>
#include <cs50.h>
#include <string.h>

bool compstring();

int main(void)
{
    string first = get_string("Word: ");
    string second = get_string("Word: ");

    bool same = compstring(first, second);

    if (same == true)
    {
        printf("Same\n");
    }
    else
    {
        printf("Not Same\n");
    }
    return 0;
}

bool compstring(string word1, string word2)
{
    int i = 0;
    {
        if (!(word1[i] == word2[i]))
          {
              return false;
          }
          i ++;
    }
    while (word1[i] != '\0' && word2[i] != '\0')
    if (word1[i] == '\0' && word2[i] == '\0')
    {
        return true;
    }
    return false;

    // int i, length1, length2;
    // length1 = strlen(word1);
    // length2 = strlen(word2);
    // if (length1 == length2)
    // {
    //     for (i = 0; i < length1; i ++)
    //     {
    //         if (!(word1[i] == word2[i]))
    //       {
    //           return false;
    //       }
    //     }
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
}