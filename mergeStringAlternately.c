#include <stdio.h>

char * mergeAlternately(char * word1, char * word2)
{
    int len1 = strlen(word1);
    int len2 = strlen(word2);

    int totalLength = len1 + len2;

    char* result = malloc((totalLength + 1) * sizeof(char));

    if (result == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    int i, k = 0;
    for (i = 0; i < len1 || i < len2; i++) {
        if (i < len1) {
            result[k++] = word1[i];
        }
        if (i < len2) {
            result[k++] = word2[i];
        }
    }
    result[k] = '\0';

    return result;
}