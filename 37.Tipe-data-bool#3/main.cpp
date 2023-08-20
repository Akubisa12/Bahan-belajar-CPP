#include <iostream>

using namespace std;

int main()
{
  int var1 = 12;
  int var2 = 10;

  if (var1 < var2)
  {
    cout << "var1 lebih kecil daripada var2" << endl;
  }
  else if (var1 > var2)
  {
    cout << "var1 lebih besar daripada var2" << endl;
  }
  else
  {
    cout << "var1 sama dengan var2" << endl;
  }

  return 0;
}