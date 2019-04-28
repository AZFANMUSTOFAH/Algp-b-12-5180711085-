#include<iostream>
#include<stdlib.h>

using namespace::std;

struct mtc{
int harga;
char merek[20];
float jumlah;
};

mtc motocross[5];
int a,i,c,ketemu,ganti,hapus;
mtc temp;
main()
{
    cout<<"\n======================================";
    cout<<"\n MENGHITUNG DATA MASUKAN MOTOCROSS ";
    cout<<"\n MASUKAN JUMLAH MOTOR :"; cin>>a;
    cout<<"\n======================================";

for(i=0;i<a;i++)
{
    cout<<"\n======================================";
    cout<<"\ndata ke-"<<i<<"=";
    cout<<"\n MASUKAN HARGA :";cin>>motocross[i].harga;
    cout<<"\n MASUKAN MEREK :";cin>>motocross[i].merek;
    cout<<"\n MASUKAN JUMLAH:";cin>>motocross[i].jumlah;
}
for(i=0;i<a;i++)
{
    cout<<"\n======================================";
    cout<<"\ndata ke:["<<i+1<<"]";
    cout<<"\n HARGA MOTOCROSS:"<<motocross[i].harga;
    cout<<"\n MEREK MOTOCROSS:"<<motocross[i].merek;
    cout<<"\n JUMLAH MOTOCROSS:"<<motocross[i].jumlah;
}
    cout<<"\n======================================";
    cout<<"\n MASUKAN DATA MEREK MOTOCROSS YANG DI CARI =";
    cin>>motocross[i].harga;
    ketemu=0;
     cout<<"\n======================================";
     cout<<"\n DATA MOTOCROSS YANG DI TEMUKAN :";
for(i=0;i<a;i++)
{
   if(motocross[i].harga==motocross[i].harga)
   {
       ketemu=1;
       cout<<i;
   }
}
if (ketemu==0)
{
    cout<<"\n======================================";
    cout<<"\n DATA MOTOCROSS TIDAK DI TEMUKAN";
}
    cout<<"\n======================================";
    cout<<"\n GANTI DATA MOTOCROSS";
    cout<<"\n MASUKAN JUMLAH DATA MOTOCROSS =";
    cin>>motocross[c].jumlah;
for(int g=0;g<c;g++)
{
    if(motocross[g].jumlah==motocross[c].jumlah)
    {
        cout<<"\n======================================";
        cout<<"\n MASUKAN DATA MOTOCROS TERBARU =";
        cin>>motocross[g].jumlah;
    }
}
cout<<"\n======================================";
cout<<"\n DATA MOTOCROS YANG DI DAPAT :";
for(int h=0;h<a;h++)
{
    cout<<motocross[h].jumlah;
}
}
