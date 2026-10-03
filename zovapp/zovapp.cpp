#include <iostream>
#include <windows.h>

int main() {
    setlocale(LC_ALL, "ru-RU");

    std::cout << "пин-коды из разных цифр\n";

    int kol_vo = 0;

    for (int a = 0; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            for (int c = 0; c <= 9; c++) {
                for (int d = 0; d <= 9; d++) {
                    if (a != b && a != c && a != d &&
                        b != c && b != d && c != d) {

                        if (kol_vo < 10 || kol_vo >= 5030)
                            std::cout << a << b << c << d << " ";

                        kol_vo++;
                    }
                }
            }
        }
    }

    std::cout << "\nВсего " << kol_vo << "\n\n";

    std::cout << "пин-коды с повторяющимися цифрами\n";

    kol_vo = 0;

    for (int a = 0; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            for (int c = 0; c <= 9; c++) {
                for (int d = 0; d <= 9; d++) {

                    if (kol_vo < 10 || kol_vo >= 9990)
                        std::cout << a << b << c << d << " ";

                    kol_vo++;
                }
            }
        }
    }

    std::cout << "\nВсего " << kol_vo << "\n";

    return 0;
}