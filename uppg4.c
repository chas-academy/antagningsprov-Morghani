#include <stdio.h>
#include <string.h>

int main() {
    char str[21]; // max 20 tecken + '\0'
    scanf("%20s", str);

    if (strlen(str) < 3) {
        printf("Too short");
    } else {
        printf("%c", str[2]); // tredje tecknet (index 2)
    }

    return 0;
}
