#include <stdio.h>

float BMI(float weight, float height) {
    return weight / (height * height);
}

// ---- OBS! Du får INTE modifiera koden i main() ----
int main(){
    float weight = 0.0, height = 0.0;
    scanf("%f%f", &weight, &height);
    printf("%.2f", BMI(weight, height));
    return 0;
}
// ---------------------------------------------------
