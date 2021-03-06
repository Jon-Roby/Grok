// Write a program to print a histogram of the lengths of words in its input. It is easy
// to draw the histogram with the bars horizontal; a vertical orientation is more
// challenging.

#include <stdio.h>

int main() {
  int c, i, v, count;
  int length_of_words[11];

  count = 0;
  for (i = 0; i < 11; ++i)
    length_of_words[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (count < 10) {
	++length_of_words[count];
      } else {
	++length_of_words[10];
      }
      count = 0;
    } else {
      ++count;
    }
  }

  printf("Horizontal Histogram\n");
  for (i = 0; i < 11; ++i) {
    printf("%d ", i);
    for (v = 0; v < length_of_words[i]; v++)
      printf("-");
    printf("\n");
  }
}

/*
int main() {
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;
  for (i = 0; i < 10; i++)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF) {

    if (c >= '0' && c <= '9')
      ++ndigit[c-'0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;
  }
  printf("digits =");
  for (i = 0; i < 10; ++i)
    printf(" %d", ndigit[i]);
  printf(", white space = %d, other = %d\n", nwhite, nother);
}

*/
