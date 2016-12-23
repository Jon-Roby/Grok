/* Ex 2-1
 * Write a program to determine the ranges of char, short, int, and long variables, both
 * signed and unsigned, by printing appropriate values from standard headers and by direct
 * computation. Harder if you compute them: determine the ranges of various floating-point
 * types.
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("%i\n", CHAR_MIN);
  printf("%i\n", CHAR_MAX);
  printf("%i\n", SHRT_MIN);
  printf("%i\n", SHRT_MAX);
  printf("%i\n", INT_MIN);
  printf("%i\n", INT_MAX);
  printf("%ld\n", LONG_MIN);
  printf("%ld\n", LONG_MAX);
}