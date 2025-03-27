#include <stdio.h>

int main() {
    int nums[5];
    
    // Läs in 5 tal
    for (int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }

    // Sortera med enkel bubble sort
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    // Skriv ut näst största (näst sista i sorterad array)
    printf("%d", nums[3]);

    return 0;
}
