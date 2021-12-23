#include <iostream>

using namespace std;

int main(){

     // Deklarasi dan inisialisasi array dua dimensi
     // Jumlah elemen baris = 3
     // Jumlah elemen kolom = 2
     int matrik [3][2] = {{1,2},{3,4},{5,6}};

     // Mendeklarasi variabel untuk Indeks perulangan
     int i,j;
     // Menampilkan matrik
     cout<<"\nMatrik \n";
     for(i=0;i<3;i++){
          for(j=0;j<2;j++){
               cout<<matrik[i][j]<<" ";
          }
          cout<<endl;
     }
     return 0;
}
