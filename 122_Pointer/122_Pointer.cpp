#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    void showNim() { 
        cout << "No Induk =" << nim << endl; 
    }
};

int main(){ 
    mahasiswa mhs{ 1 }; // object mhs 
    mhs.showNim(); // Member accsess operator

    mahasiswa& refMhs = mhs; // Pointer Refrence refMhs
    refMhs.nim = 2; // member access operator
    mhs.showNim();

    mahasiswa* pMhs = &mhs; // Pointer Reference pMhs
    pMhs->nim = 3; // Arrow Operator
    mhs.showNim();
    return 0;

}

