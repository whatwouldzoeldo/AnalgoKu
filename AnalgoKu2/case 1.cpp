/*
Nama        : Muhammad Zulfikar Ali
NPM         : 140810180064
Kelas       : B
Deskripsi   : Mencari nilai maksimum
*/

#include <iostream>
using namespace std;

int main() {
    int maksimum, jumlah, i = 2;

    cout << "Masukkan jumlah elemen: ";
    cin >> jumlah;

    int array[jumlah];

    for (i = 0; i < jumlah; i ++){
    	cout <<(i+1) <<": ";
    	cin >> array[i];
    }

    maksimum = array[0];

    for(i = 0; i < jumlah; i++){
    	if (array[i] > maksimum){
          maksimum = array[i];
        }
    }
    cout << "Nilai maksimum adalah " << maksimum;
}
