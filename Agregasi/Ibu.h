#ifndef IBU_H
#define IBU_H

class ibu {
public:
    string nama;
    vector<Anak*> daftar_anak;

    ibu(string pnama) : nama(pnama) {
        cout << "Ibu\n" " << nama << "\"tidak ada\n";
    }
    void tambahAnak(Anak*);
    void cetakAnak();
};
void ibu::tambahAnak(Anak* pAnak) {
    daftar_anak.push_back(pAnak);
}
void ibu::cetakAnak() {
    cout << "daftar anak dari ibu \"" << this->nama << "\":\n";
    for (auto& a : daftar_anak) {
        cout << a->nama << "\n";
    }
    cout << endl;
}
#endif