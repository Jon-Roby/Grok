#include <stdio.h>
#include <pthread.h>
#include "mythreads.h"

// volatile indicates a value may change between different accesses even if it
// does not appear to be modified.
static volatile int counter = 0;

// Adds 1 to counter repeatedly.
void * mythread(void *arg) {
  printf("%s: begin\n", (char *) arg);
  int i;
  for (i = 0; i < 1e7; i++) {

  }
}
