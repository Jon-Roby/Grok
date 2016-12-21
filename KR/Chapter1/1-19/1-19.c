// Write a function reverse(s) that reverses the character string s. Use it to write a
// program that reverses its input a line at a time.

#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void reverse(char reversed[], char original[], int original_line_length);

int main() {
  int len;
  char line[MAXLINE];
  char newline[MAXLINE];

  while ((len = get_line(line, MAXLINE)) > 0) {
    reverse(newline, line, len);
    printf("%s\n", newline);
  }

  return 0;
}

void reverse(char reversed[], char original[], int original_line_length) {
  int i;
  for (i = 0; i < original_line_length; i++) {
    reversed[i] = original[original_line_length-1-i];
  }
}

int get_line(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}
