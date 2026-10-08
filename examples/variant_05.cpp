#include "arraylib.h"

#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    // Баланс счёта в конце каждого дня (отрицательное значение — задолженность)
    int balance[] = {
        25000, 18400, 9200, -1500,
        7800, -3200, 14500, 12300,
        -800, 6700
    };

    const std::size_t n = sizeof(balance) / sizeof(balance[0]);

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Вариант 5. Состояние банковского счёта\n";
    std::cout << "Баланс по дням:";
    for (std::size_t i = 0; i < n; ++i) {
        std::cout << ' ' << balance[i];
    }
    std::cout << "\nКоличество дней: " << n << "\n\n";

    std::cout << "Сумма значений баланса: "              << arr_sum(balance, n)            << '\n';
    std::cout << "Максимальный баланс: "                 << arr_max(balance, n)            << '\n';
    std::cout << "Минимальный баланс: "                  << arr_min(balance, n)            << '\n';
    std::cout << "Дней с отрицательным балансом: "       << arr_count_negative(balance, n) << '\n';
    std::cout << "Дней с нулевым балансом: "             << arr_count_zero(balance, n)     << '\n';

    return 0;
}
