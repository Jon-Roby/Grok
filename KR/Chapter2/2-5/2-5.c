/* Write the function any(s1, s2), which returns the firs tlocation in the string s1 where
 * where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.
 * (The standard library function strpbrk does the same job but returns a pointer to the 
 * location.)
 */

#include <stdio.h>

int any(char s1[], char s2[]);
int contains(char s[], char c);

int main() {
  char abcdefghij[] = "abcdefghij";
  char f[] = "f";
  int res = any(abcdefghij, f);
  printf("%i\n", res);
  return res;
}

int any(char s1[], char s2[]) {
  int i, res, c;
  for (i = 0; s1[i] != '\0'; i++) {
    if (contains(s2, s1[i]) == 1) {
      return i;
    }
  }
  return -1;
}

int contains(char s[], char c) {
  int i;
  int res;
  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] == c) {
      return 1;
      break;
    }
  }
  return -1;
}
