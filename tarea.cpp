#include <iostream>

// Función de búsqueda binaria
int binarySearch(const int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // El elemento fue encontrado
        } else if (arr[mid] < target) {
            left = mid + 1; // Buscar en la mitad derecha
        } else {
            right = mid - 1; // Buscar en la mitad izquierda
        }
    }

    return -1; // El elemento no fue encontrado
}

int main() {
    int arr1[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int arr2[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30};
    int arr3[] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140};

    int target = 15; // Número a buscar

    int result1 = binarySearch(arr1, sizeof(arr1) / sizeof(arr1[0]), target);
    int result2 = binarySearch(arr2, sizeof(arr2) / sizeof(arr2[0]), target);
    int result3 = binarySearch(arr3, sizeof(arr3) / sizeof(arr3[0]), target);

    if (result1 != -1) {
        std::cout << target << " encontrado en arr1 en la posición " << result1 << std::endl;
    } else {
        std::cout << target << " no encontrado en arr1" << std::endl;
    }

    if (result2 != -1) {
        std::cout << target << " encontrado en arr2 en la posición " << result2 << std::endl;
    } else {
        std::cout << target << " no encontrado en arr2" << std::endl;
    }

    if (result3 != -1) {
        std::cout << target << " encontrado en arr3 en la posición " << result3 << std::endl;
    } else {
        std::cout << target << " no encontrado en arr3" << std::endl;
    }

    return 0;
}
