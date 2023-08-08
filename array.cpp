#include <iostream>

int main() {
    // Membuat array bilangan bulat dengan panjang 5
    int angka[5];

    // Mengisi array dengan nilai
    angka[0] = 10;
    angka[1] = 20;
    angka[2] = 30;
    angka[3] = 40;
    angka[4] = 50;

    // Mengakses dan mencetak nilai dari array
    std::cout << "Elemen ke-0: " << angka[0] << std::endl;
    std::cout << "Elemen ke-1: " << angka[1] << std::endl;
    std::cout << "Elemen ke-2: " << angka[2] << std::endl;
    std::cout << "Elemen ke-3: " << angka[3] << std::endl;
    std::cout << "Elemen ke-4: " << angka[4] << std::endl;

    return 0;
}
