#include <iostream>

int main() {
    int angka = 10;

    if (angka > 0) {
        std::cout << "Angka positif" << std::endl;
    } else if (angka < 0) {
        std::cout << "Angka negatif" << std::endl;
    } else {
        std::cout << "Angka nol" << std::endl;
    }

    return 0;
}
