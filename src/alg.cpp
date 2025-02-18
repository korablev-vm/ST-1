// Copyright 2025 Vkadlen Korablev
#include <cstdint>
#include <cmath>
#include <vector>
#include "alg.h"

bool checkPrime(uint64_t value) {
  if (value < 2) return false;
  if (value < 4) return true;
  if (value % 2 == 0 || value % 3 == 0) return false;
  uint64_t limit = static_cast<uint64_t>(std::sqrt(value));
  for (uint64_t i = 5; i <= limit; i += 6) {
    if (value % i == 0 || value % (i + 2) == 0) return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) return 0;
  uint64_t count = 0;
  uint64_t candidate = 1;
  while (true) {
    candidate++;
    if (checkPrime(candidate)) {
      count++;
      if (count == n) return candidate;
    }
  }
}

uint64_t nextPrime(uint64_t value) {
  uint64_t candidate = value + 1;
  while (true) {
    if (checkPrime(candidate)) return candidate;
    candidate++;
  }
}

uint64_t sumPrime(uint64_t hbound) {
  if (hbound < 2) return 0;
  std::vector<bool> sieve(hbound, true);
  for (uint64_t i = 2; i * i < hbound; i++) {
    if (sieve[i]) {
      for (uint64_t j = i * i; j < hbound; j += i) {
        sieve[j] = false;
      }
    }
  }
  uint64_t sum = 0;
  for (uint64_t i = 2; i < hbound; i++) {
    if (sieve[i]) sum += i;
  }
  return sum;
}
