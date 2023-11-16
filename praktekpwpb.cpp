#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
char kode, buku, bonus, beli, lagi;
float total_bayar, jumlah_beli, total_beli, potongan, ppn, harga;
atas:
clrscr();
cout<<"Masukkan Kode Buku [1..4] : ";cin>>kode;
cout<<"Jumlah Buku : ";cin>>jumlah_beli;
clrscr();
cout<<"\n ";
cout<<"\t * TOKO BUKU BIMA ** \n";
cout<<"\tJalan kemayoran No. 16 Jakarta Pusat - DKI Jakarta \n";
cout<<"===========================================";
cout<<" \n ";
cout<<"Nama Buku : "<<buku;
switch(kode)
{
case ('1') :
{
cout<<"Sukses Belajar C++"<<buku;
harga= 50000*jumlah_beli;
}
break;
case ('2') :
{
cout<<"SEMANGAT BELAJAR PWPB"<<buku;
harga= 35000*jumlah_beli;
}
break;
case ('3') :
{
cout<<"RPL SEJATI"<<buku;
harga= 45000*jumlah_beli;
}
break;
case ('4') :
{
cout<<"Malin Kundang"<<buku;
harga= 50000*jumlah_beli;
}
break;
}
cout<<endl;
cout<<"Harga Buku : Rp. "<<harga<<endl;
if (jumlah_beli >5)
{
potongan = 0.1*harga;
}
else
{
potongan= 0;
}
cout<<"Anda Mendapatkan Potongan Harga : Rp. "<<potongan<<endl;
cout<<"Bonus Pembelian yang Anda Peroleh : "<<bonus;
if (jumlah_beli >5)
{
cout<<".:Notebook:."<<bonus;
}
else
{
cout<<"Maaf Anda Tidak Mendapatkan Bonus Pembelian"<<bonus;
}
cout<<endl;
total_bayar= harga-potongan;
cout<<"Total Bayar Buku yang Dibeli : Rp. "<<total_bayar<<endl;
ppn= 0.1*total_bayar;
cout<<"PPN Sebesar : Rp. "<<ppn<<endl;
cout<<" \n ";
cout<<"\t —--:TERIMA KASIH :——- ";
cout<<"\n ";
cout<<"============================================"<<endl;
cout<<"\n";
cout<<"Apa Mau input data lagi??? [Y/T] : ";cin>>lagi;
if (lagi== 'Y' || lagi=='y')
{
goto atas;
}
getch();
}
