#include <iostream>
#include <string>

int main()
{
  std::string name;
  int age;

  std::cout << "Masukkan nama Anda: ";
  std::cin >> name;

  std::cout << "Masukkan usia Anda: ";
  std::cin >> age;

  std::cout << "Halo, " << name << "! Usia Anda adalah " << age << " tahun." << std::endl;

  return 0;
}