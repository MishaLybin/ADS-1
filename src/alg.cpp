// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value <= 1)
    return false;
  for (int i = 2; i * i <= value; i++) {
    if (value % i == 0)
      return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t q = 2;
    for (uint64_t i = 0; i < n; ++q)
    if (checkPrime(q))
            i++;
    return (q - 1);
}

uint64_t nextPrime(uint64_t value) {
  uint64_t q = value + 1;
  while (true) {
    if (checkPrime(q))
      return q;
    else
      ++q;
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t a = 0;
  for (uint64_t n = hbound - 1; n > 1; --n) {
    if (checkPrime(n))
      a += n;
  }
  return a;
}
