#include <stdio.h>

// Function to check if a number is even
int is_even(int num) {
    return num % 2 == 0;
}

int count_even(int *sequence, int length) {
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (is_even(sequence[i])) {
            count++;
        }
    }
    return count;
}