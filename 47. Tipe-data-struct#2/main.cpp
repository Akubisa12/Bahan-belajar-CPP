#include <iostream>

using namespace std;

struct Siswa
{
  string nama;
  string sekolah;
  int uangSaku;
};

int main()
{
  struct Siswa siswa01, siswa02, siswa03;

  siswa01.nama = "Andi Permana";
  siswa01.sekolah = "SMA 1 Lumut Ijo";
  siswa01.uangSaku = 10000;

  siswa02.nama = "Lisa Permata Sari";
  siswa02.sekolah = "SMA 1 Biru Langit";
  siswa02.uangSaku = 30000;

  siswa03.nama = "Jessica Stephany";
  siswa03.sekolah = "SMA 1 Merah Jambu";
  siswa03.uangSaku = 75000;

  cout << siswa01.nama << " bersekolah di " << siswa01.sekolah;
  cout << " dengan uang saku " << siswa01.uangSaku << " per hari" << endl;

  cout << siswa02.nama << " bersekolah di " << siswa02.sekolah;
  cout << " dengan uang saku " << siswa02.uangSaku << " per hari" << endl;

  cout << siswa03.nama << " bersekolah di " << siswa03.sekolah;
  cout << " dengan uang saku " << siswa03.uangSaku << " per hari" << endl;

  return 0;
}