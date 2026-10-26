#include <iostream>
using namespace std;
#include <cstring>

size_t str_len(char* str1){
   size_t result = -1;

   for (int i; i < INT_MAX; ++1) {
    if (str1[i] == '\0') {
        result = i;
        break;
    }
   }

   return result;
}

int main() {
    char julia[] = "Julia is amazing";
    cout << "Length: " << str_len(julia) << endl;

    return 0;
}