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
}