#include <iostream>

using namespace std;

int main()
{

  // format penulisan array di c++ :
  // tipe_data nama_variabel[jumlah_element]

  int nilai[5];

  nilai[0] = 23;
  nilai[1] = 50;
  nilai[2] = 34;
  nilai[3] = 78;
  nilai[4] = 90;

  cout << "Isi array pertama :" << nilai[0] << endl;
  cout << "Isi array kedua   :" << nilai[1] << endl;
  cout << "Isi array ketiga  :" << nilai[2] << endl;
  cout << "Isi array keempat :" << nilai[3] << endl;
  cout << "Isi array kelima  :" << nilai[4] << endl;

  return 0;
}