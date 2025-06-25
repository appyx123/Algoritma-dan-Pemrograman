#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Mahasiswa {
    string stb;
    string nama;
};

int main() {
    int jumlah;
    cout << "Jumlah mahasiswa: ";
    cin >> jumlah;

    vector<Mahasiswa> mhs(jumlah);

    for(int i = 0; i < jumlah; i++) {
        cout << "Data mahasiswa ke-" << (i+1) << endl;
        cout << "stb: ";
        cin >> mhs[i].stb;
        cout << "Nama: ";
        cin.ignore();
        getline(cin, mhs[i].nama);
        cout << endl;
    }

    sort(mhs.begin(), mhs.end(), [](const Mahasiswa &a, const Mahasiswa &b) {
        return a.stb < b.stb;
    });

    cout << "Data mahasiswa :\n";
    cout << "================\n";
    for(const auto &m : mhs) {
        cout << m.stb << " - " << m.nama << endl;
    }

    return 0;
}
