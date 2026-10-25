#include <iostream>
using namespace std;
#include <cstring>

size_t str_len(char* str1){
    return std::strlen(str1);   
}

int main() {
    char julia[] = "Julia is amazing";
    std::cout << "Length: " << str_len(julia) << std::endl;

    return 0;
}