#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void ShowNim()
    {
        cout << "No induk = " << nim << endl;
    }
};

int main()
{

    mahasiswa mhs{1}; // object mhs
    mhs.ShowNim();    // member Access Operator

    mahasiswa &refMhs = mhs;
    refMhs.nim = 2; // member Acces Operator
    mhs.ShowNim();

    mahasiswa *pMhs = &mhs;
    return 0;
}