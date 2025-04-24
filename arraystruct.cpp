#include <iostream> 
using namespace std;
#include <string>

struct detailalamat{
    string desa;
    string kota;
};

struct mahasiswa{
    string nim;
    string nama;
    detailalamat alamat;
};

int main(){
    mahasiswa mhs[2];

    for(int n = 0; n < 2; n++){
        cout << "masukkan NIM ="; 
        cin >> mhs[n].nim;
        cin.ignore(); // Ignore the newline character left in the buffer
        cout << "masukkan nama =";
        getline(cin, mhs[n].nama); // Read the full name
        cout << "masukkan alamat desa =";
        cin >> mhs[n].alamat.desa;
        cout << "masukkan alamat kota =";
        cin >> mhs[n].alamat.kota;
    }

    cout << endl;
    cout << "data mahasiswa" << endl;

    for(int n = 0; n < 2; n++){
        cout << "NIM =" << mhs[n].nim << endl;
        cout << "nama =" << mhs[n].nama << endl;
        cout << "alamat desa =" << mhs[n].alamat.desa << endl;
        cout << "alamat kota =" << mhs[n].alamat.kota << endl;
    }

    return 0;
}
