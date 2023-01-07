//C is compiled line by line. So if there is an error in any line the compiler will stop execution  right away.
#include<stdio.h>

int main()
{
    //this is a single line comment
    /*this is Multiline commnet.
    Comments are actually not part of the code . They are just line to explain the codes to other programmers.*/

    //There 32 keywords and some data tyes
    
    int age = 20;
    // int data type refers as integer numbers.

    float pi = 3.1416;
    // float indicates towords decimel/floating/fractions.

    char hashtag = '#';
    /*char is used for characters.
    while using char data type we always have to use single quotation to store the data*/

   /*Now we will talk about OUTPUT. In C printf("") function does the work of output.
   When ever we have to print something in next line we have to use (\n) inside the  printf function.*/
   printf("Hello World\n");
   printf("My name is Istiyaq.\n");
 
   return 0;
}