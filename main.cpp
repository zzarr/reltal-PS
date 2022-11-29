#include <iostream>
#include <conio.h>

using namespace std;


long sewa(int x, int t){
    long sewa[5]=[5000,4000,5500,7000,10000];
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
    els if(x==5){
        total = t * sewa[x-1];
    }
    return total;
}

long pinjam(int x, int t){
    long pinjam[5]=[45000,35000,50000,70000,95000];
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
    els if(x==5){
        total = t * pinjam[x-1];
    }
    return total;
}



int main()
{
    int pilihPS,lamaJam,harga, pilihSewa,lamaHari;
    string nama,alamat;
    long total;
    cout<<"---- RENTAL PS ----\n";
    cout<<"---- Menu utama ---\n";
    cout<<"| 1. main disini\n";
    cout<<"| 2. pinjam\n";
    cout<<"masukan pilihan anda : ";
    cin >> pilihSewa;
    system("cls");
    if(pilihSewa==2){
        cout<<"<<<<MASUKKAN DATA DIRI ANDA>>>>\n";
        cout<<"masukan nama anda \t:";
        cin >> nama;
        cout<<"masukan alamat anda :";
        cin>>alamat;
        system("cls");
        cout<<"PEMINJAMAN HANYA DIHITUNG PERHARI!!!\n";
        count<<"masukan berapa hari ingin meminjam : ";
        cin>>lamaHari;
    }
    system("cls");
    cout <<"<<<<<< varian PS yang tersedia >>>>>>\n";
    cout<<"| 1. PS 1 |\n";
    cout<<"| 2. PS 2 |\n";
    cout<<"| 3. PS 3 |\n";
    cout<<"| 4. PS 4 |\n";
    cout<<"| 5. PS 5 |\n";
    cout<<"=====================================\n";
    cout<<"silahkan pilih varian PS berdasarkan nomor nya :";
    cin>>pilihPS;
    system("cls");
    if(pilihSewa==1){
        cout<<"///////////////////////////////////////\n";
        cout<<"masukan lama main PS :";
        cin>>lamaJam;
        cout<<"///////////////////////////////////////\n";
    }
    system("cls");
    if(pilihPS==1){
        total = sewa(pilihPS,lamaJam);
        count<<"Sewa PS "
    }



    else if(pilihSewa==2){
        total = pinjam(pilihPS,lamaHari);
    }


    return 0;
}
