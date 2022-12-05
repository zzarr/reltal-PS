#include <iostream>
#include <conio.h>

using namespace std;

long sewa[5]={5000,4000,5500,7000,10000};
long pinjam[5]={45000,35000,50000,70000,95000};
int lamaJam;
int lamaHari;
float totalBayar;

void pilihan1(){
        cout<<"||===========================================||"<<endl;
        cout<<"||    >> MAIN DISINI DIHITUNG PERJAM <<      ||"<<endl;
        cout<<"||===========================================||\n"<<endl;
        cout<<" > Berapa lama main PS : ";
        cin>>lamaJam;
        cout<<endl;
}

void pilihan2(){
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
void pilihmenu1(){
    float makanan,totalHarga1,totalseluruh;
    string yesno;
    cout<<"| Pilih Makanan :            |"<<endl;
    cout<<"|   1. Indomie               | Rp5.000"<<endl;
    cout<<"|   2. Nasi Goreng           | Rp7.000"<<endl;
    cout<<"|   3. Tambah Telor          | Rp2.000"<<endl;
    cout<<" >> Pilih Makanan Sesuai No  : ";
    cin>>makanan;
    cout<<"==========================================="<<endl;
    if(makanan==1){
        int rasa;
        string yesno;
        cout<<"| Pilih Varian Rasa INDOMIE:    |"<<endl;
        cout<<"|   1. Mie Goreng               |"<<endl;
        cout<<"|   2. Mie Rebus(Original)      |"<<endl;
        cout<<"|   3. Mie Soto                 |"<<endl;
        cout<<"|   4. Mie Ayam Geprek          |"<<endl;
        cout<<" >> Pilih Rasa sesuai no        : ";
        cin>>rasa;
        if(rasa==1){
            cout<<"========================================================="<<endl;
            cout<<"| Anda Memilih Mie Goreng. Apakah ingin menambah Telor? |"<<endl;
            cout<<"========================================================="<<endl;
            cout<<" Ketik y/n untuk memilih(yes/no) : ";
            cin>>yesno;
            if(yesno=="y"){
                totalHarga1 = 5000+2000;
            }
            totalHarga1 = 5000+2000;
            totalseluruh = totalBayar+totalHarga1;
            cout<<endl;
            cout<<"========================================================="<<endl;
            cout<<" TOTAL KESELURUHAN: "<<totalseluruh<<endl;
            cout<<"========================================================="<<endl;
        }
        else if(rasa==2){
            cout<<"=================================================================="<<endl;
            cout<<"| Anda Memilih Mie Rebus(Original). Apakah ingin menambah Telor? |"<<endl;
            cout<<"=================================================================="<<endl;
            cout<<" Ketik y/n untuk memilih(yes/no) : ";
            cin>>yesno;
            if(yesno=="y"){
                totalHarga1 = 5000+2000;
            }
            totalHarga1 = 5000+2000;
            totalseluruh = totalBayar+totalHarga1;
            cout<<endl;
            cout<<"========================================================="<<endl;
            cout<<" TOTAL KESELURUHAN: "<<totalseluruh<<endl;
            cout<<"========================================================="<<endl;
        }
        else if(rasa==3){
            cout<<"======================================================="<<endl;
            cout<<"| Anda Memilih Mie Soto. Apakah ingin menambah Telor? |"<<endl;
            cout<<"======================================================="<<endl;
            cout<<" Ketik y/n untuk memilih(yes/no) : ";
            cin>>yesno;
            if(yesno=="y"){
                totalHarga1 = 5000+2000;
            }
            totalHarga1 = 5000+2000;
            totalseluruh = totalBayar+totalHarga1;
            cout<<endl;
            cout<<"========================================================="<<endl;
            cout<<" TOTAL KESELURUHAN: "<<totalseluruh<<endl;
            cout<<"========================================================="<<endl;
        }
        else if(rasa==4){
            cout<<"=============================================================="<<endl;
            cout<<"| Anda Memilih Mie Ayam Geprek. Apakah ingin menambah Telor? |"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<" Ketik y/n untuk memilih(yes/no) : ";
            cin>>yesno;
            if(yesno=="y"){
                totalHarga1 = 5000+2000;
            }
            totalHarga1 = 5000+2000;
            totalseluruh = totalBayar+totalHarga1;
            cout<<endl;
            cout<<"========================================================="<<endl;
            cout<<" TOTAL KESELURUHAN: "<<totalseluruh<<endl;
            cout<<"========================================================="<<endl;
        }
    }
    else if(makanan==2){
        cout<<"========================================================="<<endl;
        cout<<"| Anda Memilih Mie Goreng. Apakah ingin menambah Telor? |"<<endl;
        cout<<"========================================================="<<endl;
        cout<<" Ketik y/n untuk memilih(yes/no) : ";
        cin>>yesno;
        if(yesno=="y"){
            totalHarga1 = 5000+2000;
        }
        totalseluruh = totalBayar+totalHarga1;
        cout<<endl;
        cout<<"========================================================="<<endl;
        cout<<" TOTAL KESELURUHAN: "<<totalseluruh<<endl;
        cout<<"========================================================="<<endl;
    }
}
void pilihmenu2(){
    float totalHarga2,minuman,totalSeluruh;
        cout<<"| Pilih Minuman :             |"<<endl;
        cout<<"|    1. Pop Ice               | Rp3.000"<<endl;
        cout<<"|    2. TeaJus                | Rp2.000"<<endl;
        cout<<"|    3. Nutrisari             | Rp3.000"<<endl;
        cout<<"|    4. Susu                  | Rp4.000"<<endl;
        cout<<"| >> Pilih Yang Anda Inginkan : ";
        cin>>minuman;
        if(minuman==1){
            string rasa;
            totalHarga2 = 3000;
            cout<<"| >> Pilih Rasa Pop Ice       : ";
            cin>>rasa;
        }
        else if(minuman==2){
            string rasa;
            totalHarga2 = 2000;
            cout<<"| >> Pilih Rasa TeaJus        : ";
            cin>>rasa;
        }
        else if(minuman==3){
            string rasa;
            totalHarga2 = 3000;
            cout<<"| >> Pilih Rasa Nutrisari     : ";
            cin>>rasa;
        }
        else if(minuman==4){
            string rasa;
            totalHarga2 = 4000;
            cout<<"| >> Pilih Rasa Susu          : ";
            cin>>rasa;
        }
    totalSeluruh = totalBayar+totalHarga2;
    cout<<endl;
    cout<<"========================================================="<<endl;
    cout<<" TOTAL KESELURUHAN: "<<totalSeluruh<<endl;
    cout<<"========================================================="<<endl;
}

void pilihmenu3(){
    int makanan,minuman;
    float totalHarga1,totalHarga2,totalSeluruh;
    string yesno;
    cout<<"| Pilih Makanan :            |"<<endl;
    cout<<"|   1. Indomie               | Rp5.000"<<endl;
    cout<<"|   2. Nasi Goreng           | Rp7.000"<<endl;
    cout<<"|   3. Tambah Telor          | Rp2.000"<<endl;
        cout<<" >> Pilih Makanan Sesuai No  : ";
        cin>>makanan;
        cout<<"==========================================="<<endl;
        if(makanan==1){
            int rasa;
            cout<<"| Pilih Varian Rasa INDOMIE:    |"<<endl;
            cout<<"|   1. Mie Goreng               |"<<endl;
            cout<<"|   2. Mie Rebus(Original)      |"<<endl;
            cout<<"|   3. Mie Soto                 |"<<endl;
            cout<<"|   4. Mie Ayam Geprek          |"<<endl;
            cout<<" >> Pilih Rasa sesuai no        : ";
            cin>>rasa;
            if(rasa==1){
                cout<<"========================================================="<<endl;
                cout<<"| Anda Memilih Mie Goreng. Apakah ingin menambah Telor? |"<<endl;
                cout<<"========================================================="<<endl;
                cout<<" Ketik y/n untuk memilih(yes/no) : ";
                cin>>yesno;
                if(yesno=="y"){
                    totalHarga1 = 5000+2000;
                }
            }
            else if(rasa==2){
                cout<<"=================================================================="<<endl;
                cout<<"| Anda Memilih Mie Rebus(Original). Apakah ingin menambah Telor? |"<<endl;
                cout<<"=================================================================="<<endl;
                cout<<" Ketik y/n untuk memilih(yes/no) : ";
                cin>>yesno;
                if(yesno=="y"){
                    totalHarga1 = 5000+2000;
                }
            }
            else if(rasa==3){
                cout<<"======================================================="<<endl;
                cout<<"| Anda Memilih Mie Soto. Apakah ingin menambah Telor? |"<<endl;
                cout<<"======================================================="<<endl;
                cout<<" Ketik y/n untuk memilih(yes/no) : ";
                cin>>yesno;
                if(yesno=="y"){
                    totalHarga1 = 5000+2000;
                }
            }
            else if(rasa==4){
                cout<<"=============================================================="<<endl;
                cout<<"| Anda Memilih Mie Ayam Geprek. Apakah ingin menambah Telor? |"<<endl;
                cout<<"=============================================================="<<endl;
                cout<<" Ketik y/n untuk memilih(yes/no) : ";
                cin>>yesno;
                if(yesno=="y"){
                    totalHarga1 = 5000+2000;
                }
            }
        }
        else if(makanan==2){
            cout<<"=========================================================="<<endl;
            cout<<"| Anda Memilih Nasi Goreng. Apakah ingin menambah Telor? |"<<endl;
            cout<<"=========================================================="<<endl;
            cout<<" Ketik y/n untuk memilih(yes/no) : ";
        cin>>yesno;
            if(yesno=="y"){
                totalHarga1 = 5000+2000;
            }
        }
        system("cls");
        string rasa;
        cout<<"| Pilih Minuman :             |"<<endl;
        cout<<"|    1. Pop Ice               | Rp3.000"<<endl;
        cout<<"|    2. TeaJus                | Rp2.000"<<endl;
        cout<<"|    3. Nutrisari             | Rp3.000"<<endl;
        cout<<"|    4. Susu                  | Rp4.000"<<endl;
        cout<<"| >> Pilih Yang Anda Inginkan : ";
        cin>>minuman;
        if(minuman==1){
            string rasa;
            totalHarga2 = 3000;
            cout<<"| >> Pilih Rasa Pop Ice       : ";
            cin>>rasa;
        }
        else if(minuman==2){
            string rasa;
            totalHarga2 = 2000;
            cout<<"| >> Pilih Rasa TeaJus        : ";
            cin>>rasa;
        }
        else if(minuman==3){
            string rasa;
            totalHarga2 = 3000;
            cout<<"| >> Pilih Rasa Nutrisari     : ";
            cin>>rasa;
        }
        else if(minuman==4){
            string rasa;
            totalHarga2 = 4000;
            cout<<"| >> Pilih Rasa Susu          : ";
            cin>>rasa;
        }
    totalSeluruh = totalBayar+totalHarga1+totalHarga2;
    cout<<endl;
    cout<<"========================================================="<<endl;
    cout<<"TOTAL KESELURUHAN: "<<totalSeluruh<<endl;
    cout<<"========================================================="<<endl;
}
long sewaPs(int x, int t){
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
    return total;
}

long pinjamPs(int x, int t){
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
    int index,pilihSewa,pilihPS,harga,ps,nyewa,pilih;
    string enter;
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
    //Disini Pilih Ps
    cout<<"||================================||"<<endl;
    cout<<"|| <<<<<< PS YANG TERSEDIA >>>>>> ||"<<endl;;
    cout<<"||================================||"<<endl;
    for(ps=1; ps<=5; ps++){
        cout<<"|| "<<ps<<". PlayStation "<<ps<<"  <<\n";
    }
    cout<<"====================================="<<endl;
    cout<<" silahkan pilih varian PS berdasarkan nomor : ";
    cin>>pilihPS;
    if(pilihSewa==1){
        totalBayar = sewaPs(pilihPS,lamaJam);
         for(index=0; index<5; index++){
         cout<< " HARGA PlayStation "<<index+1<<" : "<<sewa[index]<<"/Jam"<<endl;
        }
    }
     else if(pilihSewa==2){
        totalBayar = pinjamPs(pilihPS, lamaHari);
        for(int index=0; index<5; index++){
         cout<< " HARGA PlayStation "<<index+1<<" : "<<pinjam[index]<<"/Hari"<<endl;
        }
    }
    cout<<"||=======================================||"<<endl;
    cout<<"||\t\tTOTAL : "<<totalBayar<<"\t\t ||"<<endl;
    cout<<"||=======================================||"<<endl;
    cout<<endl;
    cout<<"ketik \"ok\" Lalu klik enter : ";
    cin>>enter;

    system("cls");
    if(pilihSewa==1){
        cout<<"================================"<<endl;
        cout<<"|| ---- Layanan Tambahan ---- ||"<<endl;
        cout<<"||                            ||"<<endl;
        cout<<"|| 1. Makanan                 ||"<<endl;
        cout<<"|| 2. Minuman                 ||"<<endl;
        cout<<"|| 3. Makanan&Minuman         ||"<<endl;
        cout<<"================================"<<endl;
        cout<<" Klik \"t\" untuk skip!!"<<endl;
        cout<<" Pilih Yang Anda Mau(sesuai nomor) : ";
        cin>>pilih;
        cout<<endl;
        if(pilih==1){
            pilihmenu1();
        }
        else if(pilih==2){
            pilihmenu2();
        }
        else if(pilih==3){
            pilihmenu3();
        }
    }
    return 0;
}
