#include <iostream>
using namespace std;

void Bintang(int j, int i) {
    if (j <= i) {
        cout << "*";
        Bintang(j + 1, i);
    }
}

void Segitiga(int i, int ukr) {
    if (i <= ukr) {
        Bintang(1, i);
        cout << endl;
        Segitiga(i + 1, ukr);
    }
}

int main() {
    int ukr;
    cout << "Masukkan ukuran: ";
    cin >> ukr;

    Segitiga(1, ukr);

    return 0;
}
