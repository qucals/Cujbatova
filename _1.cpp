#include <iostream> // Подключаем библиотеку потоков ввода/вывода

int main()
{
    /* Цикл от 0 до 5. */
    for (size_t i = 0; i < 5; i++) {
        
        /* Цикл от 0 до i. */
        for (size_t j = 0; j <= i; j++) {
            
            /* Выводим 0. */
            std::cout << 0;
        }
        
        /* Смещаем каретку вывода на новую строку. */
        std::cout << std::endl;
    }
}