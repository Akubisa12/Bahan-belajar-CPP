#include <iostream>

using namespace std;

struct Siswa
{
  string nama;
  string sekolah;
  unsigned int uangSaku;
};

int main()
{
  // Tipe data struct adalah tipe data bentukan yang terdiri dari kumpulan tipe data lain.

  struct Siswa siswa01;

  siswa01.nama = "Andi Permana Nugroho";
  siswa01.sekolah = "SMA 1 Lumut Ijo";
  siswa01.uangSaku = 10000;

  // Tanda titik dipakai untuk mengakses sub struktur dari siswa01
  cout << siswa01.nama << " bersekolah di " << siswa01.sekolah << endl;
  cout << "dengan uang saku " << siswa01.uangSaku << " per hari" << endl;

  return 0;
}