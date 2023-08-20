#include <iostream>

using namespace std;

int main()
{
  int var1;

  cout << "Input sembarang angka bulat: ";
  cin >> var1;

  if (var1 % 2 != 0)
  {
    cout << var1 << " adalah angka ganjil" << endl;
  }
  else
  {
    cout << var1 << " adalah angka genap" << endl;
  }

  return 0;
}