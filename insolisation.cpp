#include <iostream>
using namespace std;

class mahasiswa {
private:
    const int id;
    string nama;
    float nilai;


public:
    mahasiswa(int pId, string pnama,float pNilai) :id(pId), nama(pnama), nilai(pNilai) {
        //member initialization list
          //definisi
    }

    ~mahasiswa() {
        cout << "id = "<< id << endl;
        cout << "nama = "<< nama << endl;
        cout << "Nilai = "<< nilai << endl;
    }
};


int main () {
    mahasiswa mhd(12, "Asroni", 90.5);

    return 0;
}