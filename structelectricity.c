#include <stdio.h>

// Define a structure for electricity bill
struct Bill {
    char customerName[50];
    int customerID;
    float unitsConsumed;
    float amount;
};

// Function to calculate bill amount based on units consumed
float calculateAmount(float units) {
    float rate, total;
    
    // Example slab rates (you can adjust as needed)
    if (units <= 100)
        rate = 1.5;        // per unit
    else if (units <= 200)
        rate = 2.0;
    else if (units <= 300)
        rate = 3.0;
    else
        rate = 5.0;

    total = units * rate;
    return total;
}

int main() {
    struct Bill customer;

    // Input customer details
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customer.customerName);  // read string with spaces
    printf("Enter Customer ID: ");
    scanf("%d", &customer.customerID);
    printf("Enter Units Consumed: ");
    scanf("%f", &customer.unitsConsumed);

    // Calculate bill amount
    customer.amount = calculateAmount(customer.unitsConsumed);

    // Display bill
    printf("\n--- Electricity Bill ---\n");
    printf("Customer Name   : %s\n", customer.customerName);
    printf("Customer ID     : %d\n", customer.customerID);
    printf("Units Consumed  : %.2f\n", customer.unitsConsumed);
    printf("Amount to Pay   : %.2f\n", customer.amount);

    return 0;
}
