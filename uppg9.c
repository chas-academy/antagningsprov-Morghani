#include <stdio.h>
#include <stdlib.h>

int main() {
    char str1[4], str2[4]; 
    scanf("%3s %3s", str1, str2);

    int num1 = atoi(str1);
    int num2 = atoi(str2);
    int sum = num1 + num2;

    printf("%d", sum);
    return 0;
}
