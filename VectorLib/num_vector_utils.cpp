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

   cout << s << endl;

    return s;
}
