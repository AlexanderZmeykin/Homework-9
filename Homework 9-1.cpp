#include <iostream>

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

int main()
{
    int arr1[] = { 1, 2, 3, 4, 5 };
    int arr2[] = { 4, 5, 8, 6};
    int arr3[] = { 3, 7, 9, 5, 3, 4 };

    size_t size1 = sizeof(arr1) / sizeof(arr1[0]);
    size_t size2 = sizeof(arr2) / sizeof(arr2[0]);
    size_t size3 = sizeof(arr3) / sizeof(arr3[0]);

    print(arr1, size1);
    print(arr2, size2);
    print(arr3, size3);

    return 0;
}