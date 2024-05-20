#include <iostream>
#include <string>
using namespace std;

class orang {
public:
    string nama;

    orang(string pnama) : nama(pnama) {
        cout << "orang yang dibuat\n" << endl;
    }
    ~orang() {
        cout << "orang dihapus\n" << endl;
    }

    int jumlah(int a, int b) {
        return a + b;
    }
};

class pelajar : public orang {
public:
	string sekolah;

	pelajar(string pnama, string psekolah) :
		orang(pnama),
		sekolah(psekolah) {
		cout << "pelajar dibuat\n" << endl;
	}
	~pelajar() {
		cout << "pelajar dihapus\n" << endl;
	}
	string perkenalan() {
		return "hallo, nama saya " + nama + "dari sekolah " + sekolah + "\n\n";
	}
};

