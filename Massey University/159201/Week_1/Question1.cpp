#include <iostream>
using namespace std;

int main(void)
{
    int start_size = 119590; // In order to facilitate testing, constantly call out a large value
    int old_size = 0;
    int change = 0;
    int** ptr = nullptr; // 2-dim matrix needs use 2-dim pointer
    
    while (true) // Until the program crashes
    {
        // If ptr is not nullptr, we will delete the content first
        if (ptr != nullptr)
        {
            for (int i = 0; i < old_size; i++) // C++ do not allow to "new" or "delete" a 2-dim array
                delete[] ptr[i];
            delete[] ptr;
        }

        int size = start_size + change; // Every loop we add one
        old_size = size; // Record the size so we can delete it later
        ptr = new int* [size];
        for (int i = 0; i < size; i++)
            ptr[i] = new int[size];    
        cout << size << "*" << size << endl; // If it can make it, we print the size of matric.
        change+=1; 
    } 
}