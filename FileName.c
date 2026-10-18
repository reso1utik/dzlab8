#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "rus");

    int N, K;
    double sum = 0.0;

    // Ввод данных от пользователя
    printf("Введите целое число N: ");
    if (scanf("%d", &N) != 1) {
        printf("Ошибка ввода N.\n");
        return 1;
    }

    printf("Введите целое число K: ");
    if (scanf("%d", &K) != 1) {
        printf("Ошибка ввода K.\n");
        return 1;
    }

    // Цикл «Повторение» для вычисления суммы
    for (int i = 1; i <= N; i++) {
        sum += pow((double)i, (double)K);
    }

    // Вывод результата
    printf("Сумма равна: %.2lf\n", sum);

    return 0;
}
