#include <stdio.h>

// Function to check if a number is even
int is_even(int num) { return num % 2 == 0; }

int count_even(int *sequence, int length) {
  int count = 0;
  for (int i = 0; i < length; i++) {
    if (is_even(sequence[i])) {
      count++;
    }
  }
  return count;
}

int count_odd(int *sequence, int length) {
  int count = 0;
  for (int i = 0; i < length; i++) {
    if (!is_even(sequence[i])) {
      count++;
    }
  }
  return count;
}

int main() {
  int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  int b[8] = {9, 8, 7, 6, 5, 4, 3, 2};

  printf("Количество четных чисел в первой последовательности: %d\n",
         count_even(a, 8));
  printf("Количество нечетных чисел во второй последовательности: %d\n",
         count_odd(b, 8));

  return 0;
}