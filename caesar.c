#include <stdio.h>
#include <cs50.h>
#include <ctype.h> // location of "isdigit" "isalpha" "islower" "isupper"
#include <string.h> // location of "strlen"
#include <stdlib.h> // location of "atoi"

char fetch_lower(char a, int b); // function for converting an input char from plaintext to ciphertext
char fetch_upper(char c, int d); // function for converting an input char from plaintext to ciphertext

int main(int argc, string argv[])

{
    int k;
    int dig = 0;

    if (argc == 2)
    {

        int sl = strlen(argv[1]);  // gets the length of a string in the command line

        for (int x = 0; x < sl; x++)
        {

            if (isdigit(argv[1][x]) != 0)
            {
                dig++;
            }

        }

        if (dig == sl)
        {
            {
                k = (atoi(argv[1]));
                //printf("%i\n", k);
            }

            string text = get_string("plaintext: ");


            printf("ciphertext: ");

            for (int x = 0; text[x] != '\0'; x++)
            {
                if (isalpha(text[x]) == 0) // identifies non-alphabetic chars and...
                {
                    printf("%c", text[x]);  // leaves them unchanged
                }
                else if (islower(text[x]) != 0)  // identifies lower case chars
                {
                    char ct = fetch_lower(text[x], k);  // funct for converting a LC input char from plaintext to ciphertext
                    printf("%c", ct);                 // prints plaintext char rotated by the key (k) = ciphertext char
                }
                else if (isupper(text[0]) != 0)  // identifies upper case chars
                {
                    char CT = fetch_upper(text[x], k);  // funct for converting a UC input char from plaintext to ciphertext
                    printf("%c", CT);                   // prints plaintext char rotated by the key (k) = ciphertext char
                }

            }

            printf("\n");

        }
        else
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }

    }

    else

    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

}

char fetch_lower(char a, int b) // function for converting an input char from plaintext to ciphertext
{
    int ai = (a - 97);      // using ascii values converts LC input char to an alphabetical index (ai) value
    int fr = (ai + b) % 26; // formula allows letters to wrap around to begin at a again after passing z
    char result = (fr + 97);     // takes the formula result (fr) and converts it back to the correct cipherext char
    return result;          // returns plaintext char rotated by the key (k) = ciphertext char
}

char fetch_upper(char c, int d)
{
    int AI = (c - 65);      // using ascii values converts UC input char to an alphabetical index (AI) value
    int FR = (AI + d) % 26; // formula allows letters to wrap around to begin at a again after passing z
    char result = (FR + 65);     // takes the formula result (FR) and converts it back to the correct cipherext char
    return result;          // returns plaintext char rotated by the key (k) = ciphertext char
}
