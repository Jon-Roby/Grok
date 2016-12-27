/* Exercise 2-2
 * Write a loop equivalent to the for loop below without using && or ||.
 *
 * for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i) {
 *   s[i] = c;
 * }
 *
 */

#include <stdio.h>

int main() {
  int i;
  int lim = 5;
  char c;

  for (i = 0; i < lim - 1; ++i) {
    c = getchar();
    if (c == '\n') break;
    if (c == EOF) break;
    s[i] = c;
  }
} 
