// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    if (value <= 2) {
        return true;
    }
    for (int i = 2; i < value; i++) {
        if (value % i == 0)
            return false;
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    int count = 0;
    int num = 2;
    while (true) {
        if (checkPrime(num)) {
            count++;
        }
        if (count == n) {
            return num;
        }
        num++;
    }
    return num;
}

uint64_t nextPrime(uint64_t value) {
    while (true) {
        value++;
        if (checkPrime(value)) {
            return value;
        }
    }
    return value;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (uint64_t num = 2; num < hbound; num++) {
        if (checkPrime(num) == true) {
            sum = sum + num;
        }
    }
    return sum;
}
