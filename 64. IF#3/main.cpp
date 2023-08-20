#include <iostream>

using namespace std;

int main()
{
  int a, b;

  cout << "Input nilai variabel a: ";
  cin >> a;

  cout << "Input nilai variabel b: ";
  cin >> b;

  if (a > b)
  {
    cout << "Nilai variabel a lebih besar dari variabel b" << endl;
  }

  if (a < b)
  {
    cout << "Nilai variabel a lebih kecil dari variabel b" << endl;
  }

  if (a == b)
  {
    cout << "Nilai variabel a sama dengan variabel b" << endl;
  }

  return 0;
}
