#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        const Array<int> constarr(test);

/*TEST WITH SIMPLE ARRAY*/

std::cout << "Test with simple int array" << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cout << "mirror[" << i << "] " << mirror[i] << " numbers[" << i << "] " << numbers[i] <<std::endl;
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " when val index < 0 \n";
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " when val index > size \n";
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

/*TEST WITH AN ARRAY MADE BY COPY FROM AN ARRAY MADE BY ASSIGNATION*/

std::cout << "Test with int array made by copy from an array made by assignation" << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != test[i])
        {
            std::cout << "mirror[" << i << "] " << mirror[i] << " test[" << i << "] " << test[i] <<std::endl;
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        test[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " when val index < 0 \n";
    }
    try
    {
        test[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " when val index > size \n";
    }

/*TEST WITH A CONST ARRAY*/

std::cout << "Test with a const int array" << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != test[i])
        {
            std::cout << "mirror[" << i << "] " << mirror[i] << " test[" << i << "] " << test[i] <<std::endl;
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        test[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " when val index < 0 \n";
    }
    try
    {
        test[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " when val index > size \n";
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        test[i] = rand();
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != constarr[i])
        {
            std::cout << "mirror[" << i << "] " << mirror[i] << " test[" << i << "] " << test[i] <<std::endl;
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    delete [] mirror;
    return 0;
}
