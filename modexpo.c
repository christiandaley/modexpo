// modexpo.c
// created by Christian Daley

#include "modexpo.h"


uint64_t mod_expo(uint64_t base, uint64_t exp, uint64_t m) {
  uint64_t result = 1;
  base %= m;
  while (exp != 0) {
    if ((exp & 1) == 1) {
      result = (result * base) % m;
    }
    
    exp >>= 1;
    base = (base * base) % m;
    
  }


  return result;
}
