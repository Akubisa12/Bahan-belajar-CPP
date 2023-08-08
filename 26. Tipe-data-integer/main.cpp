#include <iostream>

using namespace std;

int main()
{
  short angka1;
  int angka2;
  long angka3;

  angka1 = 32767;
  angka2 = 2147483647;
  angka3 = 2147483647;

  cout << "Isi variabel angka1 (short): " << angka1 << endl;
  cout << "Isi variabel angka2 (int)  : " << angka2 << endl;
  cout << "Isi variabel angka3 (long) : " << angka3 << endl;

  return 0;
}