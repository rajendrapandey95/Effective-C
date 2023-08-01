//Declare an array of three pointers to functions and invoke the appropriate
//function based on an index value passed in as an argument.

#include <stdio.h>

void function1() {
    printf("Function 1 called!\n");
}

void function2() {
    printf("Function 2 called!\n");
}

void function3() {
    printf("Function 3 called!\n");
}

int main() {
    void (*functionPointers[3])() = {function1, function2, function3};
    int index;

    printf("Enter an index value (0-2): ");
    scanf("%d", &index);

    if (index >= 0 && index < 3) {
        functionPointers[index](); // Invoke the appropriate function based on the index
    } else {
        printf("Invalid index value!\n");
    }

    return 0;
}
