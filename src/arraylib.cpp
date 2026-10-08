#include "arraylib.h"

#include <algorithm>
#include <vector>

// Сумма всех элементов
int arr_sum(const int* arr, std::size_t n) {
    int s = 0;
    for (std::size_t i = 0; i < n; ++i) s += arr[i];
    return s;
}

// Максимальный элемент
int arr_max(const int* arr, std::size_t n) {
    int m = arr[0];
    for (std::size_t i = 1; i < n; ++i) if (arr[i] > m) m = arr[i];
    return m;
}

// Минимальный элемент
int arr_min(const int* arr, std::size_t n) {
    int m = arr[0];
    for (std::size_t i = 1; i < n; ++i) if (arr[i] < m) m = arr[i];
    return m;
}

// Среднее арифметическое
double arr_average(const int* arr, std::size_t n) {
    return static_cast<double>(arr_sum(arr, n)) / n;
}

// Количество элементов > 0
int arr_count_positive(const int* arr, std::size_t n) {
    int c = 0;
    for (std::size_t i = 0; i < n; ++i) if (arr[i] > 0) ++c;
    return c;
}

// Количество элементов < 0
int arr_count_negative(const int* arr, std::size_t n) {
    int c = 0;
    for (std::size_t i = 0; i < n; ++i) if (arr[i] < 0) ++c;
    return c;
}

// Количество нулей
int arr_count_zero(const int* arr, std::size_t n) {
    int c = 0;
    for (std::size_t i = 0; i < n; ++i) if (arr[i] == 0) ++c;
    return c;
}

// Произведение всех элементов
int arr_product(const int* arr, std::size_t n) {
    int p = 1;
    for (std::size_t i = 0; i < n; ++i) p *= arr[i];
    return p;
}

// Медиана (исходный массив не меняется — сортируем копию)
double arr_median(const int* arr, std::size_t n) {
    std::vector<int> copy(arr, arr + n);
    std::sort(copy.begin(), copy.end());
    if (n % 2 == 1) return copy[n / 2];
    return (copy[n / 2 - 1] + copy[n / 2]) / 2.0;
}

