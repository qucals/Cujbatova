#include <iostream> // Подключаем библиотеку потоков ввода/вывода
#include <limits> // Подключаем библиотеку для std::numeric_limits

bool isdigit(const std::string& str)
{
    for (const auto& c : str) { if (!isdigit(c)) { return false; }}
    return true;
}

int main()
{
    size_t k = 0;
    
    /* Считываем число, вместе с этим проверяем корректность ввода */
    while (std::cout << "Enter a number (1 < k < 180): " && !(std::cin >> k)) {
back:
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input; please re-enter." << std::endl;
    }

    /* Проверяем корректное попадание числа в интервал */
    if (k < 1 || k > 180) { goto back; }

    std::string number;
    std::cin >> number;

    /* Проверяем, является ли вводимое число числом */
    while(!isdigit(number)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input; please re-enter." << std::endl;
        std::cin >> number;
    }

    /* Выводим k-ую цифру числа */
    std::cout << number.at(k-1) << std::endl;
}