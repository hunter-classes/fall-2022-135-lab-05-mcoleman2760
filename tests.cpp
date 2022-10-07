#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Is Number Divisible") {
CHECK(isDivisibleBy(100,25) == 1);
CHECK(isDivisibleBy(35,17) == 0);
}
TEST_CASE("Is Integer A Prime Number") {
CHECK(isPrime(17) == 1);
CHECK(isPrime(49) == 0);
}
TEST_CASE("Next Prime Number") {
CHECK(nextPrime(14) == 17);
CHECK(nextPrime(17) == 19);
}
TEST_CASE("Count Primes In Range") {
CHECK(countPrimes(10,20) == 4);
CHECK(countPrimes(1,12) == 5);
}
TEST_CASE("Is Number A Twin Prime") {
CHECK(isTwinPrime(17) == 1);
CHECK(isTwinPrime(8) == 0);
}
TEST_CASE("Next Twin Prime") {
CHECK(nextTwinPrime(17) == 19);
CHECK(nextTwinPrime(8) == 11);
}
TEST_CASE("Largest Twin Prime in Range") {
CHECK(largestTwinPrime(5,18) == 17);
CHECK(largestTwinPrime(1,31) == 31);
CHECK(largestTwinPrime(14,16) == -1);

}
