#include "num_vector_utils.h"
#include <iostream>
using namespace std;

string render_num_vector(const vector<int>& nums) {
    string s = "";
    
    for (const int& v : nums){
        s += to_string(v);
        s += " ";
    }
    
    s.pop_back();
   
   return s;
}

int num_vector_product(const vector<int>& nums) {
    int i = 0;

    for (const int& v : nums){
        i *= v;
    }

   return i;
}
