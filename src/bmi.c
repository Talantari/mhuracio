#include <stdio.h>

int main() {
    float weight, height, bmi;
    //Get data 
    printf("=== BMI Calculator ===\n");
    printf("Enter weight (kg): ");
    scanf("%f", &weight);
    
    printf("Enter height (m): ");
    scanf("%f", &height);
    
    // Calculate bmi
    bmi = weight / (height * height);
    
    // Display bmi
    printf("\nYour BMI: %.2f\n", bmi);
    
    //Categorizing
    if (bmi < 18.5)
        printf("Category: in Underweight\n");
    else if (bmi < 25)
        printf("Category: Normal weight\n");
    else if (bmi < 30)
        printf("Category: Overweight\n");
    else
        printf("Category: Obese\n");
    
    return 0;
}
