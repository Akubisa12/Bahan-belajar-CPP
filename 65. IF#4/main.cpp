#include <iostream>

using namespace std;

int main()
{
  int a;

  cout << "Input sembarang angka bulat: ";
  cin >> a;

  if (a % 2 == 0) {
    cout << a << " adalah angka genap" << endl;
  }
  if (a % 2 == 1) {
    cout << a << " adalah angka ganjil" << endl;
  }

  return 0;
}