#include <iostream>

using namespace std;

double hitungLuasSegitiga(int alas, int tinggi)
{
  double luas = (alas * tinggi) / 2.0;
  return luas;
}

int main()
{
  double var1 = hitungLuasSegitiga(5, 7);
  cout << "Luas segitiga adalah: " << var1 << endl;

  return 0;
}