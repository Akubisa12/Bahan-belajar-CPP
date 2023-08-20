#include <iostream>

using namespace std;

int main()
{
  // jika jumlah element array tidak di isi maka jumlah element array akan digenerate secara otomatis

  char karakter[] = {'D', '$', 'o', 'Z', '8'};

  cout << "Isi array pertama :" << karakter[0] << endl;
  cout << "Isi array kedua   :" << karakter[1] << endl;
  cout << "Isi array ketiga  :" << karakter[2] << endl;
  cout << "Isi array keempat :" << karakter[3] << endl;
  cout << "Isi array kelima  :" << karakter[4] << endl;

  return 0;
}