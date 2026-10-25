#include <iostream>
using namespace std;
#include <cstring>

size_t str_len(char* str1){
    return strlen(str1);   
}

int main() {
    char julia[] = "Julia is amazing";
    cout << "Length: " << str_len(julia) << endl;

    return 0;
}