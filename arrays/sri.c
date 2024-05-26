#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countWords(char* str);
void countCharacters(char* str);
void countVowelsConsonants(char* str);
void findASandSEndingWords(char* str);
void reverseString(char* str);

int main() {
    char input[1000];
    
    // Accepting the input string
    printf("Enter a string: ");
    gets(input);
    
    // Call the functions
    countWords(input);
    countCharacters(input);
    countVowelsConsonants(input);
    findASandSEndingWords(input);
    reverseString(input);

    return 0;
}

void countWords(char* str) {
    int words = 0;
    char* token = strtok(str, " ");
    
    while(token != NULL) {
        words++;
        token = strtok(NULL, " ");
    }
    
    printf("Number of words: %d\n", words);
}

void countCharacters(char* str) {
    int alphabetic = 0, nonAlphabetic = 0;
    for(int i = 0; str[i] !='\0'; i++) 
	{
        if(isalpha(str[i]))
            alphabetic++;
        else if(str[i] != ' ')
            nonAlphabetic++;
    }
    
    printf("Frequency of alphabetic characters: %d\n", alphabetic);
    printf("Frequency of non-alphabetic characters: %d\n", nonAlphabetic);
}

void countVowelsConsonants(char* str) {
    int vowels = 0, consonants = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if(ch >= 'a' && ch <= 'z') {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    
    printf("Frequency of vowels: %d\n", vowels);
    printf("Frequency of consonants: %d\n", consonants);
}

void findASandSEndingWords(char* str) {
    char* token = strtok(str, " ");
    
    while(token != NULL) {
        if(token[0] == 'A' || token[strlen(token)-1] == 'S')
            printf("%s\n", token);
        
        token = strtok(NULL, " ");
    }
}

void reverseString(char* str) {
    printf("Reversed string: ");
    for(int i = strlen(str)-1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

