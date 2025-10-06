#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int A, B, C, sum;

    printf("Введите номер игрока A: ");
    scanf("%d", &A);
    printf("Введите номкр игрока B: ");
    scanf("%d", &B);
    printf("Введите номер игрока C: ");
    scanf("%d", &C);

    sum = A + B + C;
    if (sum % 3 == 0)
    {
        printf("Тройка игроков с номерами %d, %d, %d является счастливой!\n", A, B, C);
    }
    else
    {
        printf("Тройка игроков с номерами %d, %d, %d НЕ является счастливой.\n", A, B, C);
    }

    return 0;
}