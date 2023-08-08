#include <iostream>

// Deklarasi fungsi
int tambah(int a, int b);

int main() {
    int hasil = tambah(3, 5);
    std::cout << "Hasil penjumlahan: " << hasil << std::endl;

    return 0;
}

// Implementasi fungsi
int tambah(int a, int b) {
    return a + b;
}
