#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <iostream>
#include <iomanip>

using namespace std;

bool ErrorDetection(int value, int checkbit){
  // int one_count = 0;
  // int total_bits = sizeof(int) * 8;
  //  int molly = 0;

  // for(int i = 0; i < total_bits; ++i){
  //   if(value & 1){
  //     ++one_count;
  //   } 

  //   value <<= 1;
  // }
  
  // if(one_count % 2 == 0){
  //   molly = 1;
  //   cout << molly << endl;
  // } else{
  //   molly = 0;
  //   cout << molly << endl;
  // }

  // if(molly == checkbit){
  //   return true;
  // } else{
  //   return false;
  // }

  bool valid = false;
  int one_count = 0;

  string bitstring = bitset<16>(value).to_string();

  for (int i = 0; i < bitstring.length(); i++){
    if (bitstring.substr(i, i + 1) == "1"){
      one_count++;
    }
  }

  valid = (one_count )


}


int main(){
  ErrorDetection(135, 1);
}

