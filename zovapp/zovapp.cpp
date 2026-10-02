#include <iostream>

int main() {
    std::setlocale(LC_ALL, "ru-RU");

    int sam[2][2] = {
        {300, 0},
        {1000, 100}
    };

    double rash[2][3] = {
        {1, 4, 7},
        {2, 4, 6}
    };

    int samolet;
    double ab, bc, gruz;

    std::cout << "Введите номер самолета (1,2) ";
    std::cin >> samolet;

    std::cout << "Введите расстояние A-B ";
    std::cin >> ab;

    std::cout << "Введите расстояние B-C ";
    std::cin >> bc;

    std::cout << "Введите вес груза ";
    std::cin >> gruz;

    int s = samolet - 1;
    double r;

    if (samolet == 1) {
        if (gruz <= 750)
            r = rash[s][0];
        else if (gruz <= 1500)
            r = rash[s][1];
        else if (gruz <= 2000)
            r = rash[s][2];
        else {
            std::cout << "Самолет не может поднять такой груз";
            return 0;
        }
    }
    else if (samolet == 2) {
        if (gruz <= 1000)
            r = rash[s][0];
        else if (gruz <= 2000)
            r = rash[s][1];
        else if (gruz <= 3000)
            r = rash[s][2];
        else {
            std::cout << "Самолет не может поднять такой груз";
            return 0;
        }
    }

    double vrem = sam[s][1];
    double bak = sam[s][0];

    double topAB = ab * r;

    if (vrem < topAB)
        topAB -= vrem;
    else
        topAB = 0;

    if (topAB > bak) {
        std::cout << "Невозможно долететь из A в B";
        return 0;
    }

    bak -= topAB;

    double topBC = bc * r;

    if (bak >= topBC) {
        std::cout << "Дозаправка не требуется";
        std::cout << "\nНужно заправить 0 литров";
    }
    else {
        double zapravka = topBC - bak;

        if (zapravka > sam[s][0] - bak) {
            std::cout << "Невозможно долететь из B в C";
            return 0;
        }

        std::cout << "Нужно заправить"
            << zapravka << " литров";
    }

    return 0;
}