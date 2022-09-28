#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char harf;

    harf = 'z';
    while (harf >= 'a')
    {
        write(1, &harf, 1);
        harf--;
    }
}

int main(void)
{
    ft_print_reverse_alphabet();
}