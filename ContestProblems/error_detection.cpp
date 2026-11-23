#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>

#include <iostream>
using namespace std;


bool solveErrorDetection(int value, int checkbit){
  int one_count = 0;
  
  for (int i = 0; i < 16; ++i){
    if ((value & (i << i)) == 1){
      one_count++;  
    }  
  }
  
  int expectedbit = one_count % 2;
  
  return expectedbit == checkbit;
}


TEST_CASE("solveErrorDetection(int value, int checkbit)"){
  CHECK(solveErrorDetection(45, 1) == false);
  CHECK(solveErrorDetection(15, 0) == true);
}