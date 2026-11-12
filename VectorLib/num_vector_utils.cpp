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
    int i = 1;

    for (const int& v : nums){
        i *= v;
    }

    cout << i << endl;

   return i;
}

string only_evens(const vector<int>& nums) {
    string s = "";

    //nums = {1, 2, 3, 4, 6, 7, 8, 11, 12, 14, 27, 22};
    //expected = "2 4 6 8 12 14 22";

    for (const int& v : nums){
        if (v % 2 == 0){
            s += to_string(v);
            s += " ";
        }
    }
    
    s.pop_back();

    cout << s << endl;

    return s;
}