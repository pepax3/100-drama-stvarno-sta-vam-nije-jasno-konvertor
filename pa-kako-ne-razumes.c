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

        printf("Unesite jedinicu iz koje konvertujete: ");
        scanf("%s", from_unit);

        printf("Unesite jedinicu u koju konvertujete: ");
        scanf("%s", to_unit);

        printf("Enter the value in %s: ", from_unit);
        scanf("%lf", &value);

        double result = convert(value, from_unit, to_unit);

        if (result >= 0.0) {
            printf("%.2f %s = %.2f %s\n", value, from_unit, result, to_unit);
        } else {
            printf("Konverzija nije podrzana. \n");
        }

        printf("\n\nDa li zelite da racunate ponovno Y/N ? \n");
        scanf(" %c", &choice);

        // Add extra empty lines after the question
        printf("\n\n");
        
    } while (tolower(choice) == 'y');

    printf("Pozdrav roka!\n");
    return 0;
}
