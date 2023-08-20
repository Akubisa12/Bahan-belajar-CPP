#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int b = 5;
  bool hasil;

  cout << "Isi Variabel a: " << a << endl;
  cout << "Isi Variabel b: " << b << endl;
  cout << endl;

  hasil = a == b;
  cout << "Apakah a == b ? " << hasil << endl;

  hasil = a != b;
  cout << "Apakah a != b ? " << hasil << endl;

  hasil = a > b;
  cout << "Apakah a > b ? " << hasil << endl;

  hasil = a < b;
  cout << "Apakah a < b ? " << hasil << endl;

  hasil = a >= b;
  cout << "Apakah a >= b ? " << hasil << endl;

  hasil = a <= b;
  cout << "Apakah a <= b ? " << hasil << endl;

  return 0;
}