#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Funktion för att kolla om tecken är vokal
int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main() {
    char str[21];
    scanf("%20s", str);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
