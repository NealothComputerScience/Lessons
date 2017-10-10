#include <iostream>

#define TRUE 1
#define FALSE 0

void printBits(int value)
{
    for(char i = sizeof(int) * 8; i >= 0; i -= 1)
    {
        std::cout << (int)i << " ";
        bool res = value & (0x01 << i);
        //std::cout << res;
    }
    std::cout << "b" << std::endl;
}

int main() {
    //char bool short int long (unsigned signed)
    // маска объявления:  ТИП название = ЗНАЧЕНИЕ
    
    // Целые числа беззнаковые
    unsigned int a = 3000000000; // 4 байта (32 бита) 	0 … 4 294 967 295
    bool b = true;// true и false 1 байт(8 бит) 0 - false, 1..255 - true
    unsigned short c = 45000; // 2 байта (16 бит) и 0 ..65535 
    unsigned long d = 232; // 8 байт (64 бит) 	От 0 до 18 446 744 073 709 551 615  
    unsigned char j = 4;// 1 байт (8 бит) от 0..255
    // Целые числа со знаком
    int h = -3; //  4 байта (32 бита) От -2 147 483 648 до 2 147 483 647
    short g = -5; // 2 байта 16 бит От -32 768 до 32 767
    long s = -333; // 8 байт (64 бит) От -9 223 372 036 854 775 808 до 9 223 372 036 854 775 807
    char k = -4; // 1 байт (8 бит) от -128..127
    // Числа с плавающей запятой
    float etofloat = 1.2f; // 4 байта 3.4e-38 … 3.4e+38
    double etodouble = 1.3;// 8 байт от 5.0·10^324 ... 1.7·10^308
    
    /* Пошла практика */
    
    double buf1 = 22.0;
    double buf2 = 7.0;
    double pi = buf1 / buf2;
    double r = 32.0;
    double result = 2 * pi * r;
    std::cout << "pi = " <<  pi << std::endl;
    std::cout << "result = " <<  result << std::endl;
    
    // арифметические операции
    double buf3 = 22.1;
    double buf4 = 32.1;
    double buf5 = buf3 + buf4;
    double buf6 = buf3 * buf4;
    double buf7 = buf3 - buf4;
    double buf8 = buf3 / buf4;

    // логические операции
    //a & b  - побитовое и
    //a | b - побитовое или
    //a ^ b - побитовое исключающее или
    //a && b - логическое и
    //a || b - логическое или
    // !a
    // a << b - сдиг влево на b разрядов
    // a >> b - сдвиг вправо на b разрядов
    int ibuf3 = 22; // ‭00010110‬
    int ibuf4 = 10; // ‭00100000‬
    int ibuf5 = ibuf3 & ibuf4;
    /*
    00010110
    &&&&&&&&
    00100000
    ========
    00000000
    
    00110110 54
    
    
    00010110 << 2 = 01011000
    
    
    */
    
    int ibuf6 = ibuf3 | ibuf4;
    int ibuf7 = ibuf3 ^ ibuf4;
    bool ibuf8 = ibuf3 || ibuf4;
    bool ibuf9 = ibuf3 && ibuf4;
    int ibuf10 = ibuf3 << ibuf4;
    int ibuf11 = ibuf3 >> ibuf4;
    int ibuf12 = ibuf3 % ibuf4;
    bool ibuf13 = ibuf3 == ibuf4;
    bool ibuf14 = ibuf3 > ibuf4;
    bool ibuf15 = ibuf3 < ibuf4;
   
    printBits(ibuf5);
    std::cout << " & = " << ibuf5 << std::endl;
        
    std::cout << " | = " << ibuf6 << std::endl;

    std::cout << " ^ = " << ibuf7 << std::endl;

    std::cout << " || = " << ibuf8 << std::endl;

    std::cout << " && = " << ibuf9 << std::endl;
        
    std::cout << " << = " << ibuf10 << std::endl;

    std::cout << " >> = " << ibuf11 << std::endl;

    std::cout << " % = " << ibuf12 << std::endl;
    
    std::cout << " ==  = " << ibuf13 << std::endl;

    std::cout << " > = " << ibuf14 << std::endl;

    std::cout << " < = " << ibuf15 << std::endl;

    
    // 0x01 - 00000001b
    // 0x02 - 00000010b
    // 0x04 - 00000100b
    // 0x08 0x10 0x20 0x40 0x80
    // 1 << 17 = 0001 0000 0000 0000 0000b
    // 
    int hueta = 5032580;
    bool svetodiod = hueta >> 17 & 0x01;
    bool svetodiod2 = hueta & (0x01 << 17);
    
    
    // standard console output 
    // standard end line
    std::cout << " sizeof int = " << sizeof(int) << " байт" << std::endl;
    std::cout << " sizeof short = " << sizeof(short) << " байт" << std::endl;
    std::cout << " sizeof bool = " << sizeof(bool) << " байт" << std::endl;
    std::cout << " sizeof long = " << sizeof(long) << " байт" << std::endl;
    std::cout << " sizeof float = " << sizeof(float) << " байт" << std::endl;
    std::cout << " sizeof double = " << sizeof(double) << " байт" << std::endl;

}
