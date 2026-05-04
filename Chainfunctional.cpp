#include <iostream>
using namespace std;

class buku
{
    string judul;

public:
    buku setjudul(string judul)
    {
        this->judul = judul;
        return *this; // chain functional
    }
    string getJudul()
    {
        return judul;
    }
};

int main()
{
    buku bukunya;
    bukunya.setjudul("matematika").getJudul();
    return 0;
}