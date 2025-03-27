#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Funktion för att jämföra två tecken (används av qsort)
int compareChars(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    char str[21]; // max 20 tecken + null terminator
    scanf("%20s", str); // läs in strängen

    int len = strlen(str);
    qsort(str, len, sizeof(char), compareChars); // sortera strängen

    printf("%s", str); // skriv ut resultatet

    return 0;
}
