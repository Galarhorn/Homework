#include <iostream>
using namespace std;

template<typename T>
void swap(T numbers[], int i, int j) {
    T temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

template<typename T, int size>
void print(T(&arr)[size])
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << ' ';
    cout << '\n';
}

int main()
{
    
}

