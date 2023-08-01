#include <stdio.h>

// Global variable to store the counter value
int counter = 0;

// Function to increment the counter
void increment() {
    counter++;
}

// Function to retrieve the current value of the counter
int retrieve() {
    return counter;
}

int main() {
    // Increment the counter five times
    increment();
    increment();
    increment();
    increment();
    increment();

    // Retrieve and print the current value of the counter
    int currentValue = retrieve();
    printf("Current counter value: %d\n", currentValue);

    return 0;
}
