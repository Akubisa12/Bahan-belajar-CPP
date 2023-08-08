#include <iostream>

int main() {
    int nomorBulan;

    std::cout << "Masukkan nomor bulan (1-12): ";
    std::cin >> nomorBulan;

    switch (nomorBulan) {
        case 1:
            std::cout << "Januari" << std::endl;
            break;
        case 2:
            std::cout << "Februari" << std::endl;
            break;
        case 3:
            std::cout << "Maret" << std::endl;
            break;
        case 4:
            std::cout << "April" << std::endl;
            break;
        case 5:
            std::cout << "Mei" << std::endl;
            break;
        case 6:
            std::cout << "Juni" << std::endl;
            break;
        case 7:
            std::cout << "Juli" << std::endl;
            break;
        case 8:
            std::cout << "Agustus" << std::endl;
            break;
        case 9:
            std::cout << "September" << std::endl;
            break;
        case 10:
            std::cout << "Oktober" << std::endl;
            break;
        case 11:
            std::cout << "November" << std::endl;
            break;
        case 12:
            std::cout << "Desember" << std::endl;
            break;
        default:
            std::cout << "Nomor bulan tidak valid." << std::endl;
            break;
    }

    return 0;
}