#include <iostream>
#include <fstream>
using namespace std;
void create(){
    string soal;
    ofstream txt;
    txt.open("soalganjil.txt",ios::app);
    cout<<"Masukkan Soal: ";
    getline(cin,soal);
    txt<<soal;
    txt<<endl;
    txt.close();
}
void read(){
   string soal;
   ifstream txt("soalganjil.txt");
   if(txt.is_open()){
       while(! txt.eof()){
           getline(txt, soal);
           cout<<soal<<endl;
           cout<<endl;
       }
   }
}
int main(){
    int pil;
    main:
    cout<<"\n===Pilihan Menu==="<<endl;
    cout<<"1. Create"<<endl;
    cout<<"2. Read"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<"Masukkan Pilihan: ";
    cin>>pil;
    cin.ignore(1, '\n');
    switch(pil){
        case 1: 
        create();
        goto main;
        break;

        case 2: 
        read();
        break;

        case 3: 
        return 0;
    }
}