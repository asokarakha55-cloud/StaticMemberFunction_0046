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
};

int main()
{
    buku bukunya;
    bukunya.setjudul("matematika").getjudul();
    return 0;
}