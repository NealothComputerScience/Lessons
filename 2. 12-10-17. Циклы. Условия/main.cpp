#include <iostream>

void printBits(int value)
{
    for(char i = sizeof(int) * 8; i >= 0; i -= 1)
    {
        bool res = value & (0x01 << i);
        std::cout << res;
    }
    std::cout << "b" << std::endl;
}

int summa(short value1, short value2)
{
    int result = 0;
    result = value1 + value2;
    return result;
}

int minus(short value1, short value2)
{
    int result = 0;
    result = value1 - value2;
    
    return result;
}

float tochka(float value1, float value2)
{
    float result = 0;
    result = value1 / value2;
    return result;
}

void start(void)
{
    // конструкции условия
    // if и switch
    // if (условие) { выражение } else { выражение 2 }
    int number = 59;
    
    if (number == 56)
    {
        printBits(15);
    }
    else if (number == 50 || number == 49 || number == 48)
    {
        std::cout << "sanya" << std::endl;
    }
    else if (number == 57)
    {
        std::cout << " summa: " << summa(6, 8) << std::endl;
    }
     else if (number == 58)
    {
        std::cout << " minus: " << minus(6, 8) << std::endl;
    }
    else if (number == 59)
    {
        std::cout << " tochka: " << tochka(6, 8) << std::endl;
    }
    else
    {
        std::cout << "govno" << std::endl;
    }
    
    switch (number)
    {
        case 48:
        case 49:
        case 50: {
            std::cout << "sanya" << std::endl;
            break;
        }
        case 56: {
            printBits(20);
            break;
        }
        case 57: {
            std::cout << " minus: " << minus(6, 8) << std::endl;
            break;
        }
        case 58: {
            std::cout << " minus: " << minus(6, 8) << std::endl;
            break;
        }
        default: {
            std::cout << "govno" << std::endl;
            break;
        }
    }
}

int main(int argc, char * argv[])
{   
    // for и while
    for (int i = 0; i < 10; i = i + 1)
    {
        if (i == 5) 
        {
            start();
        }
    }
    
    int i = 0;
    while (i < 10)
    {
        start();
        i = i + 1;
    }
    
}