// Mariah Gardner
// 1001576678
// TODO: add command line used to compile code

#include <stdio.h>

int main void (){

    int n;
    
    // Read the first input value, which is 'n'
    scanf("%d", &n);

    // Create arrays dynamically based on 'n'
    int count[n];
    for (int i = 0; i < n; i++) {
        count[i] = 0;  // Initialize counters to 0
    }

    int index[n];
    for (int i = 0; i < n; i++) {
        index[i] = 0;
    }

    int map[n];
    for (int i = 0; i < n; i++) {
        map[i] = 0;
    }

    // Loop to read operations until termination (operation 0)
    int operation;
    while (scanf("%d", &operation) && operation != 0) {
        if (operation == 1) {
            // Add operations for values
        } else if (operation == 2) {
        }
        // Continue conditions
    }

    return 0;
}