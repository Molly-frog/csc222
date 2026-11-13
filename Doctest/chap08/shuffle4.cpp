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

char* shuffle2(const char array[], int size){
    char* new_array = (char*)malloc(size * sizeof(char));
    if (new_array == nullptr) {
        return nullptr;
    }

    for (int i = 0; i < size; i++) {
        int randomIndex = i + rand() % (size - i);
        char temp = new_array[i];
        new_array[i] = new_array[randomIndex];
        new_array[randomIndex] = temp;
    }

    return new_array;
}

int main() {
    
}