#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;

class manusia_{
public:
    string nama;
    Jantung varjantung;

    manusia_(string pname){
        :nama(pname) {
            cout << nama << "hidup\n";
        }
        
        ~manusia_(){
            cout << nama << "mati\n";
        }
    }
};
#endif