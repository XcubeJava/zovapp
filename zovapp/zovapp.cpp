#include <iostream>
#include <windows.h>

int main()
{
    std::setlocale(LC_ALL, "ru-RU");

    double distance, time, speed;

    std::cout << " ZADANIE 1\n";
    std::cout << "Введите расстояние до аэропорта (км): ";
    std::cin >> distance;

    std::cout << "Введите время в пути (часов): ";
    std::cin >> time;

    speed = distance / time;

    std::cout << "Скорость: " << speed << " км/ч\n";

    Sleep(1500);
    system("cls");

    int timeStart, timeEnd;

    std::cout << "ZADANIE 2\n";
    std::cout << "Введите время начала в секундах: ";
    std::cin >> timeStart;

    std::cout << "Введите время окончания в секундах: ";
    std::cin >> timeEnd;

    if (timeEnd < timeStart)
        timeEnd += 24 * 3600;

    int seconds = timeEnd - timeStart;
    int minutes = (seconds + 59) / 60;
    int cost = minutes * 2;

    std::cout << "Продолжительность: " << minutes << " минут\n";
    std::cout << "Стоимость: " << cost << " рублей\n";

    Sleep(1500);
    system("cls");

    double consumption, price92, price95, price98;

    std::cout << "ZADANIE 3\n";
    std::cout << "Введите расход бензина (л/100 км): ";
    std::cin >> consumption;

    std::cout << "Введите цену АИ-92: ";
    std::cin >> price92;

    std::cout << "Введите цену АИ-95: ";
    std::cin >> price95;

    std::cout << "Введите цену АИ-98: ";
    std::cin >> price98;

    std::cout << "\nБензин\tЦена\tСтоимость\n";

    std::cout << "АИ-92\t" << price92 << "\t"
        << consumption * price92 << " руб.\n";

    std::cout << "АИ-95\t" << price95 << "\t"
        << consumption * price95 << " руб.\n";

    std::cout << "АИ-98\t" << price98 << "\t"
        << consumption * price98 << " руб.\n";

    Sleep(1500);

    return 0;
}