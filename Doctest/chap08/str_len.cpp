#include <iostream>
using namespace std;
#include <cstring>

size_t str_len(char* str1){
   size_t result = -1;

   for (int i; i < INT_MAX; ++i) {
    if (str1[i] == '\0') {
        result = i;
        break;
    }
   }

   return result;
}

int main() {
    char random[] = "My programming career is low-key over";
    cout << "Length: " << str_len(random) << endl;

    return 0;
}