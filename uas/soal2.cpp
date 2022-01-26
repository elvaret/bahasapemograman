#include <iostream>
using namespace std;
void kd_matkul(){
    string kd_matkul;
    cout<<"Masukkan Kode Mata Kuliah: ";
    getline(cin, kd_matkul);  
    cout<<"Kode mata kuliah: "<<kd_matkul<<endl;
    cout<<"Alamat Memorinya: "<<&kd_matkul<<endl;
}
void nama_matkul(){
    string nama_matkul;
    cout<<"Masukkan Nama Mata Kuliah: ";
    getline(cin, nama_matkul);
    cout<<"Nama Mata Kuliah: "<<nama_matkul<<endl;
    cout<<"Alamat Memorinya: "<<&nama_matkul<<endl;
}
int main(){
    //Memanggil void kd_matkul
    kd_matkul();
    cout<<endl<<endl;
    //Memanggil void nama_matkul
    nama_matkul();

    return 0;
}