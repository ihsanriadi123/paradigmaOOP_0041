#include <iostream>
#include <vector>

using namespace std;

class dokter; 
class pasien {
public:
    string nama;
    vector<dokter*> daftar_dokter;
    pasien(string pnama) : nama(pnama) {
        cout << "pasien \"<< nama<<\"ada\n"; 
    }
    ~pasien() {
        cout << "pasien \"<< nama<<\"tidak ada\n";
    }
    void tambah_dokter(dokter* )
    void cetakdokter();
    }


class dokter {
public:
    string nama;
    vector<pasien*> daftar_pasien;

    dokter(string pnama) : nama(pnama) {
        cout << "dokter \"<< nama<<\"ada\n";
    }
    ~dokter() {
        cout << "pasien \"<< nama<<\"tidak ada\n";
    }

    void tambah_pasien(pasien* );
    void cetakpasien();
};


void pasien::tambah_dokter(dokter* pdokter) {
    daftar_dokter.push_back(pdokter);
}
void pasien::cetakdokter() {
    cout << "daftar dokter yang menangani pasien \"" << this->nama << "\":\n";
    for (auto& a : daftar_dokter) {
        cout << a->nama << "\n";
    }
    cout << endl;
}

