#include <iostream>
using namespace std;
int main(){
    string kd_matkul;
    string nama_matkul;

    cout<<"Masukkan Kode Mata Kuliah: ";
    getline(cin, kd_matkul);  //Untuk menginput lebih dari satu kata (menggunakan spasi)                   
    cout<<"Masukkan Nama Mata Kuliah: ";
    getline(cin, nama_matkul);

    cout<<"\nKode mata kuliah: "<<kd_matkul<<endl;
    cout<<"Alamat Memorinya: "<<&kd_matkul<<endl;
    cout<<"\nNama Mata Kuliah: "<<nama_matkul<<endl;
    cout<<"Alamat Memorinya: "<<&nama_matkul<<endl;
    
    return 0;
}