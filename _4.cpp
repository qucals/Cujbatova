#include <iostream> // Подключаем библиотеку потоков ввода/вывода
#include <random> // Подключаем библиотеку генераторов

int main()
{
    /* Обнуляем генератор */
    srand(static_cast<unsigned>(time(nullptr)));
    
    size_t k = 0;
    size_t temp = 0;

    while (k <= 10) {
        temp = rand() % 2;
        k += temp;

        std::cout << temp;    
    }

    std::cout << std::endl;
}