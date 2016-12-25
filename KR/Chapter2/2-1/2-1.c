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
  printf("CHAR_MIN\t %i\n",   CHAR_MIN);
  printf("CHAR_MAX\t %i\n",   CHAR_MAX);
  printf("SHRT_MIN\t %i\n",   SHRT_MIN);
  printf("SHRT_MAX\t %i\n",   SHRT_MAX);
  printf("INT_MIN \t %i\n",   INT_MIN);
  printf("INT_MAX \t %i\n",   INT_MAX);
  printf("LONG_MIN\t %ld\n",  LONG_MIN);
  printf("LONG_MAX\t %ld\n",  LONG_MAX);

  printf("UCHAR_MAX\t %i\n",  UCHAR_MAX);
  printf("USHRT_MAX\t %i\n",  USHRT_MAX);
  printf("UINT_MAX\t  %i\n",  UINT_MAX);
  printf("ULONG_MAX\t %ld\n", ULONG_MAX);

}
