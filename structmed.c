#include <stdio.h>

// Define a structure for medicine
struct Medicine {
    char name[50];
    int quantity;
    float price;
    float amount;
};

int main() {
    int n;
    printf("Enter number of medicines purchased: ");
    scanf("%d", &n);

    struct Medicine medicines[n];
    float totalBill = 0;

    // Input details for each medicine
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for medicine %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", medicines[i].name);  // read string with spaces
        printf("Quantity: ");
        scanf("%d", &medicines[i].quantity);
        printf("Price per unit: ");
        scanf("%f", &medicines[i].price);

        // Calculate amount for this medicine
        medicines[i].amount = medicines[i].quantity * medicines[i].price;
        totalBill += medicines[i].amount;
    }

    // Display the bill
    printf("\n--- Retail Medical Store Bill ---\n");
    printf("Medicine\tQuantity\tPrice\tAmount\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t\t%d\t\t%.2f\t%.2f\n", medicines[i].name, medicines[i].quantity, medicines[i].price, medicines[i].amount);
    }

    printf("\nTotal Bill Amount: %.2f\n", totalBill);

    return 0;
}
