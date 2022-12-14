#include <unistd.h>

void ft_putchar(char x)
{
    write(1, &x, 1);
}

void ft_putnbr(int nb)
{
if(nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb=147483648;
        ft_putnbr(nb);
    }

    else if(nb < 0)
    {
        ft_putnbr('-');
        nb = -nb;
        ft_putnbr(nb);
    }

    else if(nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }

    else 
        ft_putchar(nb + '0');
    
}

int main(void) 
{
    ft_putnbr(42);
}