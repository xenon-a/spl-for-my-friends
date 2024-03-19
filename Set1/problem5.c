#include<stdio.h>

int main()
{
    char letter;
    printf("Enter the letter: ");
    scanf("%c", &letter);
    int ascii_code = (int) letter;
    
    if ((ascii_code >= 65 && ascii_code <= 90) || (ascii_code >= 97 && ascii_code <= 122)){
        // So it's an alphabet
        // Vowel Ascii codes: 65, 69, 73, 79, 85, 97, 101, 105, 111, 117
        if (ascii_code == 65 || ascii_code == 69 || ascii_code == 73 || ascii_code == 79 || ascii_code == 85 || ascii_code == 97 || ascii_code == 101 || ascii_code == 105 || ascii_code == 111 || ascii_code == 117)
            printf("Vowel\n");
        else
            printf("A consonant\n");
    }
    else
        printf("Not an alphabet\n");

    return 0;
}