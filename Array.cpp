#include <iostream>
using namespace std;

//deklarasi array tanpa ukuran, wajib diisi data
int nilai[]={1,2,3};
//deklarasi array dengan ukuran, diisi data awal
int skor [4]={12,24,48,64};
//deklarasi array dengan ukuran, tanpa nilai awal
string nama[3];


int main() {
    //menampilkan isi array pada index tertentu
    cout << "tampilkan skor ke 3 = " << skor[2] << endl;
    

    //mengisi array dengan loop for
    for(int n = 0; n < 3; n++){
        cout << "nama mahasiswa ke-" << n+1 << endl;
        cout << "nama mahasiswa = ";
        cin >> nama[n];
    }
    
    cout << "menampilkan array dengan loop for" << endl;
    for(int n = 0; n < 3; n++){
        cout << "data ke-" << n+1 << endl;
        cout << "data mahasiswa = " << nama[n] << endl;
    }
};
