#include <iostream>

using namespace std;

int main()
{
  //mengubah isi dari array

  float pecahan[] = {3.14, -99.01, 0.002};

  cout << "Isi array pertama : " << pecahan[0] << endl;
  cout << "Isi array kedua   : " << pecahan[1] << endl;
  cout << "Isi array ketiga  : " << pecahan[2] << endl;
  cout << endl;

  pecahan[1] = 9.123;
  pecahan[2] = 12.9925;

  cout << "Isi array pertama : " << pecahan[0] << endl;
  cout << "Isi array kedua   : " << pecahan[1] << endl;
  cout << "Isi array ketiga  : " << pecahan[2] << endl;

  return 0;
}