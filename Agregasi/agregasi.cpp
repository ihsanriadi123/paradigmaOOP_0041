#include <iostream>
#include <vector>

using namespace std;

#include "Anak.h"
#include "Ibu.h"

int main() {
    ibu* varIbu = new ibu("dini");
    ibu* varibu2 = new ibu("novi");
    anak* varanak = new anak("tono");
    anak* varanak2 = new anak("rini");
    anak* varanak3 = new anak("dewi");

    varIbu->tambahAnak(varanak1);
    varIbu->tambahAnak(varanak2);
    varIbu->tambahAnak(varanak3);
    varibu2->tambahAnak(varanak1);

    varIbu->cetakAnak();
    varibu2->cetakAnak();

    delete varIbu;
    delete varibu2;
    delete varanak1;
    delete varanak2;
    delete varanak3;

    return 0;
}