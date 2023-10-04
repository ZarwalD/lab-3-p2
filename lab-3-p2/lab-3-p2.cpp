#include <iostream>
#include <clocale>

/**
 *
 * @brief Среднее значение минимального и максимального из трех чисел
 * 
 * @return 0
 * 
**/

int main()
{
    setlocale(LC_ALL, "ru");
    std::cout << "a: ";
    float firstNumber;
    std::cin >> firstNumber;
    std::cout << "b: ";
    float secondNumber;
    std::cin >> secondNumber;
    std::cout << "c: ";
    float thirdNumber;
    std::cin >> thirdNumber;
    float min;
    float max;
    
    if (firstNumber > secondNumber && firstNumber > thirdNumber)
    {
        max = firstNumber;
    }
    else if (secondNumber > firstNumber && secondNumber > thirdNumber)
    {
        max = secondNumber;
    }
    else
    {
        max = thirdNumber;
    }

    if (firstNumber < secondNumber && firstNumber < thirdNumber)
    {
        min = firstNumber;
    }
    else if (secondNumber < firstNumber && secondNumber < thirdNumber)
    {
        min = secondNumber;
    }
    else
    {
        min = thirdNumber;
    }

    std::cout << "Min: " << min << std::endl;
    std::cout << "Max: " << max << std::endl;

    std::cout << "Average: " << (min + max) / 2 << std::endl;
}