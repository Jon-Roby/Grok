#include <stdio.h>

int main() {
  int c;
  while (getchar() != EOF) {
    printf("%d\n", getchar() != EOF);
    c = getchar();
  }
}
