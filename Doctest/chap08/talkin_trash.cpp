#include <iostream>
using namespace std;

int main() {
    int nums[4] = {0, 0, 0, 0}, mynums[4] = {4, 3, 5, 1};

    int *pnums = &nums[4];

    pnums[0] = -1;
    pnums[3] = -1;

    cout << nums[0] << " " << nums[1] << " " << nums[2] << " " << nums[3] << endl;
    cout << "bad " << nums[4] << " " << nums[7] << endl;
    cout << mynums[0] << " " << mynums[1] << " " << mynums[2] << " " << mynums[3] << endl; 

    cout << pnums[600] << " " << pnums[700] << endl;
}