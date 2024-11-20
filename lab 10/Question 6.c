#include <stdio.h>
#include <string.h>

//  structure to store information about a travel package
struct TravelPackage {
    char package_name[100];   
    char destination[100];    
    int duration;             
    float cost;              
    int seats_available;      
};

// Function to display all available packages
void displayPackages(struct TravelPackage packages[], int size) {
    printf("\nAvailable Travel Packages:\n");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%d. %s\n", i + 1, packages[i].package_name);
        printf("   Destination: %s\n", packages[i].destination);
        printf("   Duration: %d days\n", packages[i].duration);
        printf("   Cost: $%.2f\n", packages[i].cost);
        printf("   Seats Available: %d\n", packages[i].seats_available);
        printf("-------------------------------------------------------------\n");
    }
}
// Function to book a package
void bookPackage(struct TravelPackage packages[], int size) {
    int choice;
    printf("Enter the number of the package you want to book (1-%d): ", size);
    scanf("%d", &choice);

    if (choice < 1 || choice > size) {
        printf("Invalid choice! Please select a valid package number.\n");
        return;
    }
    choice -= 1; // Adjust for zero-based indexing

    if (packages[choice].seats_available > 0) {
        packages[choice].seats_available--;
        printf("You have successfully booked the %s package!\n", packages[choice].package_name);
        printf("Seats remaining: %d\n", packages[choice].seats_available);
    } else {
        printf("Sorry, no seats are available for the %s package.\n", packages[choice].package_name);
    }
}
int main() {
    // Array of travel packages
    struct TravelPackage packages[] = {
        {"Beach Paradise", "Hawaii", 7, 1200.50, 10},
        {"Mountain Adventure", "Swiss Alps", 5, 1800.75, 5},
        {"Cultural Tour", "Japan", 10, 2500.00, 8},
        {"Desert Safari", "Dubai", 4, 1500.00, 12}
    };

    int size = sizeof(packages) / sizeof(packages[0]);  

    int choice;
    
    do {
        printf("\nWelcome to the Travel Agency!\n");
        printf("1. Display Available Packages\n");
        printf("2. Book a Travel Package\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                displayPackages(packages, size);  // Show available packages
                break;
            case 2:
                bookPackage(packages, size);      // Book a package
                break;
            case 3:
                printf("Thank you for visiting our Travel Agency. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    } while (choice != 3);  // Loop until the user chooses to exit
    return 0;
}
