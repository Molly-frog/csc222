#include <iostream>
using namespace std;

int main() {
    //Memory Unsafe: Index Out Of Bounds
    int nums[4] = {10, 20, 30, 40};
    
    cout << "Normal: " << nums[0] << " " << nums[1] << " " << nums[2] << " " << nums[3] << endl;
    cout << "Garbage: " << nums[4] << " " << nums[5] << " " << nums[6] << " " << nums[7] << endl;

    //Garbage In/Out
    int total_intended = 0;
    int total_garbage = 0;

    for (int i = 0; i < 4; ++i) {
        total_intended += nums[i];
        total_garbage += nums[i + 4]; 
    }
    
    cout << "Intended Sum of Nums: " << total_intended << endl;
    cout << "Garbage Sum: " << total_garbage << endl;
    //Its going to be different on every run
    
    //Memory Unsafe but like without us knowing...
    int* pnums = &nums[4];
    cout << "Before, pnums[4] is: " << nums[4] << endl;
    
    pnums[0] = 999;
    cout << "After, pnums[4] is now: " << nums[4] << endl; // its not allocated but we can still change it

    return 0;
}