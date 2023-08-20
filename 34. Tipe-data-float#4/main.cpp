#include <iostream>
#include <float.h>

using namespace std;

int main()
{

 cout << "Ukuran memory tipe data float: " << sizeof(float) <<" byte \n";
 cout << "Ukuran memory tipe data double: "<< sizeof(double)<<" byte \n";

 cout << endl;

 cout << "Nilai minimal tipe data float: "  << FLT_MIN << endl;
 cout << "Nilai minimal tipe data double: " << DBL_MIN  << endl;

 cout << endl;

 cout << "Nilai maksimal tipe data float: "  << FLT_MAX << endl;
 cout << "Nilai maksimal tipe data double: " << DBL_MAX  << endl;

 cout << endl; 
 cout << "Ketelitian float: "  << FLT_DIG << endl;
 cout << "Ketelitian double: "  << DBL_DIG  << endl;

 return 0;

}