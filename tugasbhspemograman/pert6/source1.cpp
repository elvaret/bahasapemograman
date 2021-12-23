//Parameter ->Pass by Value
#include <stdio.h>
void cetakUmur(int umur){
 printf("Halo, Umur kamu adalah %d tahun", umur);
}
int main(){
 cetakUmur(20);
 getchar();
 return 0;
}