#include <iostream>
using namespace std;

void reference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void pointer(char* a, char* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void normal(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}


int main() {
    int m = 4, j = 10;
    char x = 'x', t = 't';
    
    normal(m, j);
    reference(m, j);
    pointer(&x, &t);
    return 0;
}