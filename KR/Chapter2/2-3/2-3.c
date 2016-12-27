/* Exercise 2-3
 * Write the function htoi(s), which converts a string of hexadecimal digits (including an
 * optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through
 * 9, a through f, and A through F.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int htoi(char hex[]);
int convert(int n, int amount);

int main() {
  int res;
  char hex[] = "449C";
  htoi(hex);
}

int convert(int n, int amount) {
  return (pow(16, n)) * amount;
}

int htoi(char hex[]) {
  enum hex_values { A = 10, B, C, D, E, F };
  int i;
  int ret = 0;

  for (i = strlen(hex)-1; i >= 0; --i) {
    char current_letter = hex[i];
    if (current_letter == 'A') {
      ret += convert(strlen(hex)-1-i, A);
    } else if (current_letter == 'B') {
      ret += convert(strlen(hex)-1-i, B);
    } else if (current_letter == 'C') {
      ret += convert(strlen(hex)-1-i, C);
    } else if (current_letter == 'D') {
      ret += convert(strlen(hex)-1-i, D);
    } else if (current_letter == 'E') {
      ret += convert(strlen(hex)-1-i, E);
    } else if (current_letter == 'F') {
      ret += convert(strlen(hex)-1-i, F);
    } else {
      ret += convert(strlen(hex)-1-i, current_letter - '0');
    }
  }

  printf("result: %i\n", ret);
  return ret;
}
