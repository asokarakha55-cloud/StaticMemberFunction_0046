#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    int nim;
    string nama;

public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNIM, string iNama);
    void cetak();
};

mahasiswa::mahasiswa()
{
}

mahasiswa ::mahasiswa(int iNIM, string iNama)
{
    nim = iNIM;
}
