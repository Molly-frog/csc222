#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>

#include <iostream>
using namespace std;

bool solveErrorDetection(int value, int checkbit){
  bool valid = false;
  int one_count = 0;

  string bitstring = bitset<16>(value).to_string();

  for (std::size_t i = 0; i < bitstring.length(); i++){
    if (bitstring[i] == '1'){
      one_count++;
    }
  }

  valid = (one_count % 2 == checkbit);
    if (valid == 1){
        std::cout << "valid" << std:: endl;
    } else{
      
       std::cout << "corrupted" << std:: endl;
    }

  return valid;
}

TEST_CASE("solveErrorDetection(int value, int checkbit)"){
  CHECK(solveErrorDetection(34173, 1) == true); // Valid because it has an odd # of 1s
  CHECK(solveErrorDetection(45, 1) == false);   // Corrupt because it has an even # of 1s, so it was expecting 0
  CHECK(solveErrorDetection(15, 0) == true);    // Valid because it has an even # of 1s
  CHECK(solveErrorDetection(31, 0) == false);   // Corrupt because it has an odd # of 1s, so it was expecting 1
}