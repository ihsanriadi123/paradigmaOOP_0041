#ifndef JANTUNG_H
#define JANTUNG_H

using namespace std;

class Jantung {
public:
    Jantung() {
        cout << "Jantung dihidupkan\n";
    }
    ~Jantung() {
        cout << "Jantung dimatikan\n";
    }
};

#endif