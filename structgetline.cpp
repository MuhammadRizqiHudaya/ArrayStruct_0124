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
    mahasiswa mhs;

    cout << "masukkan NIM ="; 
    cin >> mhs.nim;
    cin.ignore();
    cout << "masukkan nama =";
    getline (cin,  mhs.nama);
    cin >> mhs.nama;
    cout << "masukkan alamat desa =";
    cin >> mhs.alamat.desa;
    cout << "masukkan alamat kota =";
    cin >> mhs.alamat.kota;

    cout << endl;
    cout << "data mahasiswa" << endl;

    cout << "NIM =" << mhs.nim << endl;
    cout << "nama =" << mhs.nama << endl;
    cout << "alamat desa =" << mhs.alamat.desa << endl;
    cout << "alamat kota =" << mhs.alamat.kota << endl;
}