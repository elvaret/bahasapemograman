#include <iostream>
using namespace std;
 /*Tabel nilai
        Nilai		Huruf		ket
        86-100		A			Lulus
        71-85		B			lulus
        61-70		C			lulus
        51-60		D			Tidak lulus
        0-50		E			Tidak lulus
    */

string nim, nama, Mat_Kul,ket;
int Nilai_Angka;
char Nilai_Huruf;

void perbandingan(){
     if ( Nilai_Angka >= 0 && Nilai_Angka <= 50){
	Nilai_Huruf ='E';
	}else if (Nilai_Angka >= 51 && Nilai_Angka <= 60){
		Nilai_Huruf ='D';
	}else if ( Nilai_Angka >= 61 && Nilai_Angka <= 70){
		Nilai_Huruf ='C';
	}else if (Nilai_Angka >= 71 && Nilai_Angka <= 85){
		Nilai_Huruf ='B';
	}else if (Nilai_Angka >= 86 && Nilai_Angka <= 100){
		Nilai_Huruf ='A';
	}else {
		cout <<"grade tidak diberikan" << endl;
	}
	
	if ( Nilai_Angka >= 0 && Nilai_Angka <= 61){
		ket = "Tidak lulus"; 
	}else if (Nilai_Angka > 61 && Nilai_Angka <= 100){
		ket = "Lulus"; 
    }else {
		cout <<"grade tidak diberikan" << endl;
	}
}

void display(){
    cout<<"Nim   mahasiswa : "<<nim<<endl;
	cout<<"Nama  mahasiswa : "<<nama<<endl;
	cout<<"Mata  kuliah    : "<<Mat_Kul<<endl;
	cout<<"Nilai           : "<<Nilai_Angka<<endl;
	cout<<"Grade mahasiswa : "<<Nilai_Huruf<<endl;
	cout<<"Keterangan      : "<<ket<<endl;
}

int main(){
    cout<<"Masukkan NIM Mahasiswa  : ";getline(cin,nim);
	cout<<"Masukkan Nama Mahasiswa : ";getline(cin,nama);
	cout<<"Masukkan Matkul         : ";getline(cin,Mat_Kul);
	cout<<"Masukkan Nilai Mahasiswa: ";
	cin>>Nilai_Angka;

    perbandingan();
    system("clear");
    display();
   
    return 0;
}