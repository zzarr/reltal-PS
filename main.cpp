#include <iostream>
#include <conio.h>

using namespace std;

long sewa[5]={5000,4000,5500,7000,10000};
long pinjam[5]={45000,35000,50000,70000,95000};
int lamaJam;
int lamaHari;


void pilihan1(){
        //int lamaJam;
        cout<<"||===========================================||"<<endl;
        cout<<"||    >> MAIN DISINI DIHITUNG PERJAM <<      ||"<<endl;
        cout<<"||===========================================||\n"<<endl;
        cout<<" > Masukan lama main PS : ";
        cin>>lamaJam;
        cout<<endl;
}

void pilihan2(){
        //int lamaHari;
        string nama,alamat;
        cout<<"||===========================================||"<<endl;
        cout<<"||       >> MASUKKAN DATA DIRI ANDA <<       ||"<<endl;
        cout<<"||===========================================||"<<endl;
        cout<<" > Masukan nama anda \t\t: ";
        cin>> nama;
        cout<<" > Masukkan alamat anda \t: ";
        cin>> alamat;
        cout<<endl;
        cout<<"||===========================================||"<<endl;
        cout<<"|| >> PEMINJAMAN HANYA DIHITUNG PERHARI!! << ||"<<endl;
        cout<<"||===========================================||"<<endl;
        cout<<" > Masukkan berapa hari ingin meminjam : ";
        cin>>lamaHari;
}
long sewaPs(int x, int t){
    //int index,no;
    //long sewa[5]={5000,4000,5500,7000,10000}
    float total;
    if(x==1){
        total = t * sewa[x-1];
    }
    else if(x==2){
        total = t * sewa[x-1];
    }
    else if(x==3){
        total = t * sewa[x-1];
    }
    else if(x==4){
        total = t * sewa[x-1];
    }
    else if(x==5){
        total = t * sewa[x-1];
    }
    /*for(index=0; index<5; index++){
         cout<< " HARGA PlayStation "<<index+1<<" : "<<sewa[index]<<"/Jam"<<endl;
    }

    cout<< "\nTOTAL : "<<total;*/
    return total;
}

long pinjamPs(int x, int t){
    //int index,no;
    //long pinjam[5]={45000,35000,50000,70000,95000};
    float total;
    if(x==1){
        total = t * pinjam[x-1];
    }
    else if(x==2){
        total = t * pinjam[x-1];
    }
    else if(x==3){
        total = t * pinjam[x-1];
    }
    else if(x==4){
        total = t * pinjam[x-1];
    }
    else if(x==5){
        total = t * pinjam[x-1];
    }

    return total;
}



int main()
{
    int pilihSewa,pilihPS,harga,ps,nyewa;
    float totalBayar;
    cout<<"  <<<<<< RENTAL PS TI 1C >>>>>>  "<<endl;
    cout<<"============================="<<endl;
    cout<<"|| ---- Layanan Utama ---- ||"<<endl;
    cout<<"||                         ||"<<endl;
    cout<<"|| 1. Main disini          ||"<<endl;
    cout<<"|| 2. Pinjam               ||"<<endl;
    cout<<"============================="<<endl;
    cout<<" Masukkan Pilihan Anda berdasarkan nomor : ";
    cin >> pilihSewa;
    system("cls");

    if(pilihSewa==1){
        pilihan1();
    }
    else if(pilihSewa==2){
        pilihan2();
    }
    cout<<endl;
    cout<<"||================================||"<<endl;
    cout<<"|| <<<<<< PS YANG TERSEDIA >>>>>> ||"<<endl;;
    cout<<"||================================||"<<endl;

    for(ps=1; ps<=5; ps++){
        cout<<"| "<<ps<<". PlayStation "<<ps<<"  <<\n";
    }
    cout<<"====================================="<<endl;
    cout<<" silahkan pilih varian PS berdasarkan nomor : ";
    cin>>pilihPS;
    if(pilihSewa==1){
        totalBayar = sewaPs(pilihPS,lamaJam);
    }
     else if(pilihSewa==2){
        totalBayar = pinjamPs(pilihPS, lamaHari);
    }
     for(int index=0; index<5; index++){
         cout<< " HARGA PlayStation "<<index+1<<" : "<<pinjam[index]<<"/Hari"<<endl;
    }
    cout<<"======================================= |"<<endl;
    cout<<"\t\tTOTAL : "<<totalBayar<<"\t\t|"<<endl;
    cout<<"======================================= |"<<endl;

    return 0;
}
