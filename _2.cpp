#include <iostream> // Подключаем библиотеку потоков ввода/вывода
#include <limits> // Подключаем библиотеку для std::numeric_limits

int main()
{
    /* Создаем переменные, в к-ых будем хранить вводимые числа. */
    long double a, b, c;

    /* Считываем числа из потока ввода. */
    while (std::cout << "Enter a, b, c: " && !(std::cin >> a >> b >> c)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input; please re-enter." << std::endl;
    }

    /* Выводим на дисплей среднее арифмитическое. */
    std::cout << (a + b + c) / 3 << std::endl;

    /* Выводим на дисплей разность удвоенной суммы первого и третьего чисел и 
     * утроенного второго числа.
     */
    std::cout << (a + c) * 2 - (b * 3) << std::endl;
}