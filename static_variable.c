#include <stdio.h>

void print_count() {
    static int count = 0; // Static variable to retain its value between function calls
    printf("Count: %d\n", count);
    count++; // Increment the count for the next function call
}

int main() {
    // Call print_count multiple times
    printf("Calling print_count multiple times:\n");
    print_count(); // Output: Count: 0
    print_count(); // Output: Count: 1
    print_count(); // Output: Count: 2

    // Call print_count again after some other operations
    printf("Calling print_count again:\n");
    print_count(); // Output: Count: 3

    return 0;
}
// #include <stdio.h>

// void print_count() {
//     int count = 0; // Local variable - value is not preserved between function calls
//     printf("Count: %d\n", count);
//     count++; // Increment the count (but this change won't persist)
// }

// int main() {
//     // Call print_count multiple times
//     printf("Calling print_count multiple times:\n");
//     print_count(); // Output: Count: 0
//     print_count(); // Output: Count: 0 (not incremented because it's a new variable)
//     print_count(); // Output: Count: 0 (not incremented because it's a new variable)

//     // Call print_count again after some other operations
//     printf("Calling print_count again:\n");
//     print_count(); // Output: Count: 0 (not incremented because it's a new variable)

//     return 0;
// }
