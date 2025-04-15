#include <iostream> 
using namespace std;

struct mahasiswa{
    string nim;
    string nama;
    string alamat;
};

int main(){
    mahasiswa mhs;

    mhs.nim = "2022014000";
    mhs.nama = "abra";
    mhs.alamat = "kasihan";

    cout << "masukkan NIM ="; 
    cin >> mhs.nim;
    cout << "masukkan nama =";
    cin >> mhs.nama;
    cout << "masukkan alamat =";
    cin >> mhs.alamat;

    cout << endl;
    cout << "data mahasiswa" << endl;

    cout << "NIM =" << mhs.nim << endl;
    cout << "nama =" << mhs.nama << endl;
    cout << "alamat =" << mhs.alamat << endl;
}