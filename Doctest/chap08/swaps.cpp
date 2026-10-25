#include <iostream>
using namespace std;

void reference(int& m, int& j) {
    int temp = m;
    m = j;
    j = temp;
}

void pointer(char* x, char* t) {
    int temp = *x;
    *x = *t;
    *t = temp;
}

void normal(int m, int j) {
    int temp = m;
    m = j;
    j = temp;
}


int main() {
    int m = 4, j = 10;
    char x = 'x', t = 't';
    
    normal(m, j);
    reference(m, j);
    pointer(&x, &t);
    return 0;
}