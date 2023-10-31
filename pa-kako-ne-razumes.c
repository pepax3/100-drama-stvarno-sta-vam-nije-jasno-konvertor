#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to convert units
double convert(double value, const char* from_unit, const char* to_unit) {
    // ... (Same as before)
}

int main() {
    char choice;
    
    do {
        // List available units
        printf("Available units:\n");
        printf("1. vodenica\n");
        printf("2. kamenova\n");
        printf("3. litri\n");
        printf("4. dana\n");
        printf("5. drama\n");

        char from_unit[20];
        char to_unit[20];
        double value;

        printf("Enter the unit to convert from: ");
        scanf("%s", from_unit);

        printf("Enter the unit to convert to: ");
        scanf("%s", to_unit);

        printf("Enter the value in %s: ", from_unit);
        scanf("%lf", &value);

        double result = convert(value, from_unit, to_unit);

        if (result >= 0.0) {
            printf("%.2f %s = %.2f %s\n", value, from_unit, result, to_unit);
        } else {
            printf("Conversion not supported.\n");
        }

        printf("\n\nDo you want to calculate again (Y/N)? \n");
        scanf(" %c", &choice);

        // Add extra empty lines after the question
        printf("\n\n");
        
    } while (tolower(choice) == 'y');

    printf("Goodbye!\n");
    return 0;
}
