#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double var1 = 3.1415926;
  double var2 = 1111.1234;
  double var3 = -1000000.11;
  double var4 = 0.00123456789;
  double var5 = -99.99999;

  cout << fixed;           // membulatkan 2 angka didepan
  cout << setprecision(2); // membulatkan 2 angka didepan

  cout << var1 << endl;
  cout << var2 << endl;
  cout << var3 << endl;
  cout << var4 << endl;
  cout << var5 << endl;

  return 0;
}