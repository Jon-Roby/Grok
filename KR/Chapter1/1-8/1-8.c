// Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

int main() {
  int c, newlines, blanks, tabs;
  
  newlines = 0;
  blanks = 0;
  tabs = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++newlines;
    if (c == '\t')
      ++tabs;
    if (c == ' ')
      ++blanks;
  }

  printf("newlines: %d\n", newlines);
  printf("tabs: %d\n", tabs);
  printf("blanks: %d\n", blanks);
}
