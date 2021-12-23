#include <iostream>
using namespace std;
int main(){
     // Deklarasi sekaligus inisialisasi
     // Array 'nilai' dengan 10 buah elemen bertipe int
     int nilai[10]={75,60,80,90,70,86,40,95,100,30};

     // Karena sudah melakukan inisialisasi maka kita
     // Tidak wajib mengisi nilai kedalam Elemen Array

     // Menampilkan nilai atau isi dari array 'nilai'
     for(int i=0; i<10;i++){
          cout<<"Tampil nilai indek ke ["<<i<<"] = "<<nilai[i];
          cout<<endl;
     }
     return 0;
}