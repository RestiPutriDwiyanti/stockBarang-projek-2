#include <iostream>
#include <stdlib.h>

using namespace std;

class penambahanData{
private :
int stock,stockBuku,stockPenghapus,stockPensil,stokBuku,stokPenghapus,stokPensil;

public :
void Pensil () ;
void Buku () ;
void Penghapus () ;
} ;

void penambahanData::Pensil (){
int stock =8, stockPensil,total;
cout<<"Masukan jumlah stock barang = "; cin>>stokPensil;
total = stock + stokPensil;
cout<<"Total stok pensil adalah "<<total<<endl; 
}

void penambahanData::Buku (){
int stock =10, stockBuku,total;
cout<<"Masukan jumlah stock barang = "; cin>>stokBuku;
total = stock + stokBuku;
cout<<"Total stok buku adalah"<<total<<endl; 
}
void penambahanData::Penghapus (){
int stock =28, stokPengahapus, total;
cout<<"Masukan jumlah stock barang ="; cin>>stokPenghapus;
total = stock + stokPenghapus;
cout<<"Total stok penghapus adalah = "<<total<<endl;
}

int main (int argc,char**argv){
int pilih ;
cout<<"No. \t Nama Barang \t Stock "<<endl;
cout<<" 1. \t Pensil \t 8"<<endl;
cout<<" 2. \t Buku \t\t 10"<<endl;
cout<<" 3. \t Penghapus \t 28"<<endl;

cout<<"Pilih barang yang akan ditambah stocknya [1,2,3] = "; cin>>pilih;

if (pilih == 1){
penambahanData pensil;
pensil.Pensil();
cout<<"Terima kasih"<<endl;
} 
if (pilih == 2){
penambahanData buku;
buku.Buku();
cout<<"Terima kasih"<<endl;
}
if (pilih == 3){
penambahanData penghapus;
penghapus.Penghapus();
cout<<"Terima kasih"<<endl;
}

return 0;
system ("PAUSE");

}
