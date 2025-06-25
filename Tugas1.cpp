#include <iostream>
using namespace std;

int main() {
    int angka[5];
    int jml = 0;
    int maks, mins;
    double rata;
    float bagi = 5;
    int diAtasRata = 0;

    cout << "Masukkan 5 bilangan integer: ";
    for (int i = 0; i < 5; i++) {
        cin >> angka[i];
        jml += angka[i];
        
    }

    maks = angka[0];
    mins = angka[0];
    
    for (int i = 0; i < 5; i++) {
        if (angka[i] > maks) 
			maks = angka[i];
    }
    
    for (int i = 0; i < 5; i++) {
        if (angka[i] < mins) 
			mins = angka[i];
    }

    rata = jml / bagi;

    for (int i = 0; i < 5; i++) {
        if (angka[i] > rata) 
			diAtasRata++;
    }

    cout << "Bilangan terbesar: " << maks << endl;
    cout << "Bilangan terkecil: " << mins << endl;
    cout << "Rata-rata: " << rata << endl;
    cout << "Bilangan di atas rata-rata: " << diAtasRata << endl;

    return 0;
}
