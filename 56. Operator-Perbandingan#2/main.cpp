#include <iostream>

using namespace std;

int main()
{
  bool hasil;

  hasil = 'z' == 'Z';
  cout << "Apakah 'z' == 'Z' ? " << hasil << endl;

  hasil = 'z' != 'Z';
  cout << "Apakah 'z' != 'Z' ? " << hasil << endl;

  hasil = "Nama" == "nama";
  cout << "Apakah \"Nama\" == \"nama\" ? " << hasil << endl;

  hasil = 'A' < 'B';
  cout << "Apakah 'A' < 'B'? " << hasil << endl;

  return 0;
}