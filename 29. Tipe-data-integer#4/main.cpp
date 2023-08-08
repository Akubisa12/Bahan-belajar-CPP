#include <iostream>

using namespace std;

int main()
{
  unsigned char angka1;
  unsigned short angka2;
  unsigned int angka3;
  unsigned long angka4;

  angka1 = 299;
  angka2 = 65599;
  angka3 = 4294967299;
  angka4 = 4294967299;

  printf("Isi variabel angka1: %d \n", angka1);

  cout << "Isi variabel angka2: " << angka2 << endl;
  cout << "Isi variabel angka3: " << angka3 << endl;
  cout << "Isi variabel angka4: " << angka4 << endl;

  return 0;
}