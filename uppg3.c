#include <stdio.h>
#include <string.h>

int main() {
    char str[21]; // max 20 tecken + '\0'
    scanf("%20s", str);

    int length = strlen(str);
    printf("%d", length);

    return 0;
}
