#include <stdio.h>

/**
 * main - Enty point program ...
 *  
 * 
 * Return: always 0 (sucess) 
*/

int main(void)
{
    char i ;
    for (size_t i ='a'; i < 'z'; i++)
    {
        putchar(i);
    }
    putchar('\n'); 
    return (0);
}