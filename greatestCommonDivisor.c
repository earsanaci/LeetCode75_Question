//
//  main.c
//  compiler
//
//  Created by Emre ARSANACI on 12.02.2024.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char str1[] = "ABCABC";
    char str2[] = "ABC";
    
    int character1[26] = {0}, character2[26] = {0};
    char commonDivisor[1000] = {0}, index = 0;

    for(int i = 0; i<strlen(str1); i++)
    {
        character1[str1[i] - 'A']++;
    }

    for(int i = 0; i<strlen(str2); i++)
    {
        character2[str2[i] - 'A']++;
    }

    for (int k = 0; k < 26; k++) {
        if(character1[k] > 0 && character2[k] > 0)
        {
            commonDivisor[index++] = k + 'A';
            character1[k]--;
            character2[k]--;
        }

    }

    commonDivisor[index] = '\0';
   char* result = strdup(commonDivisor);
    return 0;
}
