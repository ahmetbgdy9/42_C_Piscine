#include <unistd.h>

void ft_is_negative(int n)
{
    if (n < 0)
    {
        write(1,"N",1);
    }
    if (n >= 0)
    {
        write(1,"P",1);
    }
}

int main(void)
{
    int sayi;
    sayi = -4;
    ft_is_negative(sayi);
}
