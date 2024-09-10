// Mariah Gardner
// 1001576678
// TODO: add command line used to compile code

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void print_counters_by_index(int n, int map[], int count[]);
void print_counters_by_value(int n, int index[], int count[]);
void increment_counter(int i, int map[], int index[], int count[], int n);
void decrement_counter(int i, int map[], int index[], int count[], int n);
int binary_search(int index[], int n, int i);
int count_in_range(int i, int j, int count[], int n);

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
            for(int i = 0; i < n; i++)
                printf("%d %d", i, count[map[i]]);
        } else if (operation == 2) {
            for(int i = 0; i < n; i++)
                printf("%d %d", index[i], count[i])
        } else if (operation == 3) {

        }
    }

    return 0;
}