#include <iostream>
using namespace std;

void reference(int& m, int& j) {
    int temp = m;
    m = j;
    j = temp;

    cout << "m: " << m << ", j: " << j << endl; 
}

void pointer(char* x, char* t) {
    int temp = *x;
    *x = *t;
    *t = temp;

    cout << "x: " << *x << ", t: " << *t << endl; 
}

void normal(int m, int j) {
    int temp = m;
    m = j;
    j = temp;

    cout << "m: " << m << ", j: " << j << endl; 
}


int main() {
    int m = 4, j = 10;
    char x = 'x', t = 't';
    
    cout << "before reference swap: " << endl;
    normal(m, j);
    
    cout << "after reference swap: " << endl;
    reference(m, j);

    cout << "after pointer swap: " << endl;
    pointer(&x, &t);
    
    return 0;
}