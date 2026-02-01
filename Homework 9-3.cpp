#include <iostream>
#include <Windows.h>

void print(const int* arr, size_t size)
{

    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i];
        if (i != size - 1)
        {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}

void reverse(int* arr, size_t size) 
{
    std::cout << "До функции reverse: ";;
    print(arr, size);

    for (size_t i = 0; i < size / 2; i++)
    {
        if (i == size - 1 - i) 
        {
            continue; 
        }
        arr[i] ^= arr[size - 1 - i];
        arr[size - 1 - i] ^= arr[i];
        arr[i] ^= arr[size - 1 - i];
    }

    std::cout << "После функции reverse: ";
    print(arr, size);
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int arr1[] = { 1, 2, 3, 4, 5 };
    int arr2[] = { 4, 5, 8, 6 };

    size_t size1 = sizeof(arr1) / sizeof(arr1[0]);
    size_t size2 = sizeof(arr2) / sizeof(arr2[0]);

    reverse(arr1, size1);
    std::cout << std::endl;
    reverse(arr2, size2);
    std::cout << std::endl;

    return 0;
}

