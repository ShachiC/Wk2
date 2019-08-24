#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    string key = argv[1];
    for (int i=0, n = strlen(key); i < n; i++) {
        if (!isdigit(key[i]))
        {
           printf("Usage: ./caesar key\n"); 
            return 1;
        }      
    }   
    string input = get_string("plaintext: ");
    int k = atoi(argv[1]);
    printf("ciphertext: ");
    char a = 'a';
    char A = 'A';
    for (int i=0, n = strlen(input); i < n; i++) {
        if (islower(input[i])){
        int j = input[i] - a;
        printf("%c", ((j+k)%26 +a));
        } else if (isupper(input[i])) {
            int m = input[i] - A;
            printf("%c", ((m+k)%26 +A));
        } else 
            printf("%c", input[i]);
    }
    printf("\n");
}    
