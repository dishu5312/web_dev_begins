#include <iostream>
#include <cstdint>

using namespace std;

uint64_t largest_prime_factor(uint64_t number)
{
  uint64_t answer = 1;
  uint64_t point = 3;
  uint64_t divisor = number;

  while ( 0 == (divisor % 2)) {
    answer = 2;
    divisor = divisor/2;
  }

  while (divisor != 1) {
      while ( 0 == (divisor % point)) {
        answer = point;
        divisor = divisor/point;
      }
      point += 2;
  }

  return answer;
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[])
{
  std::cout << "Answer: " << largest_prime_factor(600851475143) << std::endl;
}
#endif // #if ! defined UNITTEST_MODE