#include <iostream>

using namespace std;

void count_sort(int* arr, int size) {
    const int range = 25;  

    int count[range] = { 0 };  

    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    int index = 0;
    for (int i = 0; i < range; i++) {
        for (int j = 0; j < count[i]; j++) {
            arr[index] = i;
            index++;
        }
    }
}


void print_array(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() 
{   
    setlocale(LC_ALL, "ru");
    int arr[] = { 19, 14, 22, 22, 17, 22, 13, 21, 20, 24, 18, 10, 17, 16, 17, 20, 22, 11, 20, 16, 14, 13, 10, 22, 18, 14, 16, 24, 19, 17 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Исходный массив: ";
    print_array(arr, size);

    count_sort(arr, size);

    cout << "Отсортированный массив: ";
    print_array(arr, size);

    return 0;
}