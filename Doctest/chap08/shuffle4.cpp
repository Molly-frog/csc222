#include <iostream>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()
using namespace std;
void shuffle(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
         int randomIndex = i + rand() % (size - i); 
        int temp = array[i];
       array[i] = array[randomIndex];
        array[randomIndex] = temp;
    }
   cout << "Shuffled array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(0)); 
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 cout << "Original array: ";
    for (int element : array) {
        cout << element << " ";
    }
    cout << endl;
shuffle(array, 10);
}