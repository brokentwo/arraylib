# arraylib

Кроссплатформенная динамическая библиотека операций над массивами `int`
(лабораторная работа № 2).

## Функции

| Функция | Результат |
|---|---|
| `arr_sum` | сумма элементов |
| `arr_max` / `arr_min` | максимальный / минимальный элемент |
| `arr_average` | среднее арифметическое (`double`) |
| `arr_count_positive` / `arr_count_negative` / `arr_count_zero` | количество элементов > 0 / < 0 / = 0 |
| `arr_product` | произведение элементов |
| `arr_median` | медиана (`double`), исходный массив не меняется |

## Сборка и тесты

```bash
cmake -S . -B build
cmake --build build -j
cd build && ctest --output-on-failure
```
