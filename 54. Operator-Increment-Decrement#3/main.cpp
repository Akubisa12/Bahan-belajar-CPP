#include <iostream>

using namespace std;

int main()
{
  int a = 5;
  cout << "Post Increment" << endl;
  cout << "Isi variabel a: " << a << endl;
  cout << "Isi variabel a: " << a++ << endl;
  cout << "Isi variabel a: " << a << endl;

  cout << endl;

  int b = 5;
  cout << "Pre Increment" << endl;
  cout << "Isi variabel b: " << b << endl;
  cout << "Isi variabel b: " << ++b << endl;
  cout << "Isi variabel b: " << b << endl;

  return 0;
}

// perbedaan :
// a++ : variabel a ditampilkan terlebih dahulu baru di naikan nilai nya(sering terpakai)
// ++a : variabel a dinaikan terlebih dahulu baru di naikan nilainya(jarang terpakai)