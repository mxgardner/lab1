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
    scanf("%d", &n);

    // Allocate arrays
    int* count = (int*)malloc(n * sizeof(int));    // Holds counter values
    int* map = (int*)malloc(n * sizeof(int));      // Maps index to position in count
    int* index = (int*)malloc(n * sizeof(int));    // Holds the order by value of counters

    // Initialize arrays
    for (int i = 0; i < n; i++) {
        count[i] = 0;
        map[i] = i;
        index[i] = i;
    }

    int op, i, j;

    // Read operations from stdin
    while (1) {
        scanf("%d", &op);
        if (op == 0) {
            // Terminate execution
            break;
        } else if (op == 1) {
            // Print counters by index
            print_counters_by_index(n, map, count);
        } else if (op == 2) {
            // Print counters by value
            print_counters_by_value(n, index, count);
        } else if (op == 3) {
            // Increment counter by index i
            scanf("%d", &i);
            increment_counter(i, map, index, count, n);
        } else if (op == 4) {
            // Decrement counter by index i
            scanf("%d", &i);
            decrement_counter(i, map, index, count, n);
        } else if (op == 5) {
            // Count counters within the range [i, j]
            scanf("%d %d", &i, &j);
            int result = count_in_range(i, j, count, n);
            printf("%d\n", result);
        }
    }

    // Free dynamically allocated memory
    free(count);
    free(map);
    free(index);

    return 0;
}

// Operation 1: Print counters by index
void print_counters_by_index(int n, int map[], int count[]) {
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", i, count[map[i]]);
    }
}

// Operation 2: Print counters by value
void print_counters_by_value(int n, int index[], int count[]) {
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", index[i], count[i]);
    }
}