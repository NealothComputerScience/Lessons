#include <stdio.h>
#include <stdlib.h>

int bss; // bss segment
int dataS = 10; // data segment

int main() 
{
   int x=10;
   int y=25;
   int z=x+y;
   
   static int f = 5;
   static int ad;

   // type * name;
   // malloc(sizeof(int));
   int abc;
//   int * pointer = 
   
   printf("Sum of x+y = %i", z);
  
   asd(14574575);
   
   //LIFO - СТЭК
   //FIFO - ОЧЕРЕДЬ 
}

void asd (int a)
{
    int pezda = 10, b = 15, c = 20;
    
    static int rrr = 5;
    
    asd1(2);
}

void asd1 (int a)
{
    int a1 = 10, b = 15, c1 = 20;
    
    asd2(2)


void asd2 (int a)
{
    int a2 = 10, b2 = 15, c2 = 20;
    asd3(3)
}

void asd3 (int a)
{
    int a3 = 10, b3 = 15, c3 = 20;
}

//IN
//main()=> x, y, z => asd()
//asd() a,b,c => asd1()
//asd1() => a1,b1,c1 => asd2()
//asd2() => a2,b2,c2 => asd3()
//asd3() => a3,b3,c3 


//OUT
//asd3() => asd2() => asd1() => asd() => main();



