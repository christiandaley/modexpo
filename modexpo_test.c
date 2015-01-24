// modexpo_test.c
// created by Christian Daley
// This file is for testing purposes only

#include <stdio.h>
#include <stdlib.h>
#include "modexpo.h"

int main(int argc, const char *argv[]) {
  if (argc != 4) {
    printf("Usage: modexpo_test base exponent divisor\n");
    return 0;
  }

  uint64_t base = atoll(argv[1]);
  uint64_t exp = atoll(argv[2]);
  uint64_t m = atoll(argv[3]);

  printf("\n%llu^%llu mod %llu is: %llu\n", base, exp, m, mod_expo(base, exp, m));

  return 0;

}
