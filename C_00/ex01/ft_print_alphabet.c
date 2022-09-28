#include <unistd.h>

void ft_print_numbers(void)
{
    char harf;

    harf ='a';
    while (harf <= 'z')
    {
        write(1, &harf, 1);
        harf++;
    }
}

int main(void)
{
    ft_print_numbers();
}