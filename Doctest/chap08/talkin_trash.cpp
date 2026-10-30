#include <iostream>
using namespace std;

int main() {
    //Memory Unsafe:
    int nums[4] = {10, 20, 30, 40};
    int mynums[4] = {1, 2, 3, 4};
    
    cout << "Normal: " << nums[0] << " " << nums[1] << " " << nums[2] << " " << nums[3] << endl;
    cout << "Garbage: " << nums[4] << " " << nums[5] << " " << nums[6] << " " << nums[7] << endl;

    //Memory Unsafe but like without us knowing...
    int* pnums = &nums[4];
    pnums[0] = 999;
    cout << "After, pnums[4] is now: " << nums[4] << endl;

    //Garbage In/Out
    int total_intended = 0;
    int total_garbage = 0;

    for (int i = 0; i < 4; ++i) {
        total_intended += nums[i];
    }

    total_garbage = total_intended + nums[4];

    cout << "Intended Sum of Nums: " << total_intended << endl;
    cout << "Garbage Sum: " << total_garbage << endl;

    return 0;
}