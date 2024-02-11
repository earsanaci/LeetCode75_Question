char* gcdOfStrings(char* str1, char* str2) 
{
    int character1[26] = {0}, character2[26] = {0}, j = 0;
    char commonDivisor[1000] = {0}, index = 0;

    for(int i = 0; i<strlen(str1); i++)
    {
        character1[str1[0] - 'A']++;
    }

    for(int i = 0; i<strlen(str2); i++)
    {
        character2[str2[0] - 'A']++;
    }

    for (int k = 0; k < 26; k++) {
        
    }

    commonDivisor[index] = '\0';
    char* result = strdup(commonDivisor);
    return result;

}