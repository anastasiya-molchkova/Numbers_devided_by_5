// Вывести все чётные числа кратные пяти в интервале от 2 до 100 (включительно) 

#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "rus");  // вывод сообщений пользователю на кириллице

    const unsigned short min = 2;
    const unsigned short max = 100;
    std::cout << "Программа выводит чётные числа, кратные 5 от " << min << " до " << max << ":\n";
    
    for (unsigned short i = min; i <= max; i++)
        if (i%10 == 0) // чётное и кратное 5 = кратное 10
            std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}