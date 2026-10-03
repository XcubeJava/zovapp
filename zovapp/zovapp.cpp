#include <iostream>
#include <windows.h>

int main() {
    setlocale(LC_ALL, "ru-RU");

    int kolvo = 0;

    std::cout << "пин-коды из разных цифр\n";

    for (int cifra1 = 0; cifra1 <= 9; cifra1++) {
        for (int cifra2 = 0; cifra2 <= 9; cifra2++) {
            for (int cifra3 = 0; cifra3 <= 9; cifra3++) {
                for (int cifra4 = 0; cifra4 <= 9; cifra4++) {

                    if (cifra1 != cifra2 &&
                        cifra1 != cifra3 &&
                        cifra1 != cifra4 &&
                        cifra2 != cifra3 &&
                        cifra2 != cifra4 &&
                        cifra3 != cifra4) {

                        kolvo++;

                        if (kolvo <= 10 || kolvo > 5030) {
                            std::cout << cifra1 << cifra2
                                << cifra3 << cifra4 << " ";
                        }
                    }
                }
            }
        }
    }

    std::cout << "\nВсего пин-кодов " << kolvo << "\n\n";

    kolvo = 0;

    std::cout << "пин-коды с повторяющимися цифрами\n";

    for (int cifra1 = 0; cifra1 <= 9; cifra1++) {
        for (int cifra2 = 0; cifra2 <= 9; cifra2++) {
            for (int cifra3 = 0; cifra3 <= 9; cifra3++) {
                for (int cifra4 = 0; cifra4 <= 9; cifra4++) {

                    kolvo++;

                    if (kolvo <= 10 || kolvo > 9990) {
                        std::cout << cifra1 << cifra2
                            << cifra3 << cifra4 << " ";
                    }
                }
            }
        }
    }

    std::cout << "\nВсего пин-кодов " << kolvo << std::endl;

    return 0;
}