#include <stdio.h>

int main() {
    // Declare a variable to store the age
    int age;

    // Input person's age
    printf("Enter the person's age: ");
    scanf("%d", &age);

    // Determine category and discount eligibility using nested if-else
    if (age < 12) {
        // Category: Child
        printf("Category: Child\n");
        printf("Discount: 50%%\n");
    }
    else if (age >= 12 && age <= 18) {
        // Category: Teenager
        printf("Category: Teenager\n");
        if (age == 18) {
            printf("Discount: 20%%\n");
        } else {
            printf("Discount: 10%%\n");
        }
    } 
    else {  // age above 18 (Adult category)
        // Category: Adult
        printf("Category: Adult\n");
        if (age >= 60) {
            // Senior citizen
            printf("Discount: 30%%\n");
        } else {
            // Regular adult
            printf("Discount: No discount\n");
        }
    }

    return 0;
}
