#include <iostream>
#include <conio.h>
#include "sub.h"
using namespace std;


void pilihan1(){
        cout<<"||===========================================||"<<endl;
        cout<<"||    >> MAIN DISINI DIHITUNG PERJAM <<      ||"<<endl;
        cout<<"||===========================================||\n"<<endl;
        cout<<" > Berapa lama main PS : ";
        cin>>lamaJam;
        cout<<endl;
}

void pilihan2(){
        cout<<"||===========================================||"<<endl;
        cout<<"||       >> MASUKKAN DATA DIRI ANDA <<       ||"<<endl;
        cout<<"||===========================================||"<<endl;
        getline(cin,spasi);
        cout<<" > Masukan nama anda \t\t: ";
        getline(cin, nama);
        cout<<" > Masukkan alamat anda \t: ";
        getline(cin, alamat);
        cout<<"||===========================================||"<<endl;
        cout<<"|| >> PEMINJAMAN HANYA DIHITUNG PERHARI!! << ||"<<endl;
        cout<<"||===========================================||"<<endl;
        cout<<" > Masukkan berapa hari ingin meminjam : ";
        cin>>lamaHari;
}
void pilihmenu1(){
    cout<<"| Pilih Makanan :            |"<<endl;
    cout<<"|   1. Indomie               | Rp5.000"<<endl;
    cout<<"|   2. Nasi Goreng           | Rp7.000"<<endl;
    cout<<"|   3. Tambah Telor          | Rp2.000"<<endl;
    cout<<" >> Pilih Makanan Sesuai No  : ";
    cin>>makanan;
    cout<<"==========================================="<<endl;
    if(makanan==1){
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
            cout<<" Ketik \"y/n\" untuk memilih(yes/no) : ";
            cin>>yesno;
            totalHarga1 = 5000;
            if(yesno=="y"){
                totalHarga1 = 5000+2000;
            }
            totalseluruh = totalBayar+totalHarga1;
            cout<<endl;
        }
        else if(rasa==2){
            cout<<"=================================================================="<<endl;
            cout<<"| Anda Memilih Mie Rebus(Original). Apakah ingin menambah Telor? |"<<endl;
            cout<<"=================================================================="<<endl;
            cout<<" Ketik \"y/n\" untuk memilih(yes/no) : ";
            cin>>yesno;
            totalHarga1 = 5000;
            if(yesno=="y"){
                totalHarga1 = 5000+2000;
            }
            totalseluruh = totalBayar+totalHarga1;
            cout<<endl;

        }
        else if(rasa==3){
            cout<<"======================================================="<<endl;
            cout<<"| Anda Memilih Mie Soto. Apakah ingin menambah Telor? |"<<endl;
            cout<<"======================================================="<<endl;
            cout<<" Ketik \"y/n\" untuk memilih(yes/no) : ";
            cin>>yesno;
            totalHarga1 = 5000;
            if(yesno=="y"){
                totalHarga1 = 5000+2000;
            }
            totalseluruh = totalBayar+totalHarga1;
            cout<<endl;

        }
        else if(rasa==4){
            cout<<"=============================================================="<<endl;
            cout<<"| Anda Memilih Mie Ayam Geprek. Apakah ingin menambah Telor? |"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<" Ketik \"y/n\" untuk memilih(yes/no) : ";
            cin>>yesno;
            totalHarga1 = 5000;
            if(yesno=="y"){
                totalHarga1 = 5000+2000;
            }
            totalseluruh = totalBayar+totalHarga1;
            cout<<endl;

        }
        cout<<"============================================"<<endl;
        cout<<"||\t\tTOTAL : "<<totalHarga1<<"\t\t ||"<<endl;
        cout<<"============================================"<<endl;
        cout<<" Ketik \"n\" untuk mengakhiri : ";
        cin>>enter;
    }
    else if(makanan==2){
        cout<<"========================================================="<<endl;
        cout<<"| Anda Memilih Nasi Goreng. Apakah ingin menambah Telor? |"<<endl;
        cout<<"========================================================="<<endl;
        cout<<" Ketik y/n untuk memilih(yes/no) : ";
        cin>>yesno;
        totalHarga1 = 7000;
        if(yesno=="y"){
            totalHarga1 = 5000+2000;
        }
    totalseluruh = totalBayar+totalHarga1;
    cout<<endl;
    cout<<"============================================"<<endl;
    cout<<"||\t\tTOTAL : "<<totalHarga1<<"\t\t ||"<<endl;
    cout<<"============================================"<<endl;
    cout<<" Ketik \"n\" untuk mengakhiri : ";
    cin>>enter;
    }
}
void pilihmenu2(){
        cout<<"| Pilih Minuman :             |"<<endl;
        cout<<"|    1. Pop Ice               | Rp3.000"<<endl;
        cout<<"|    2. TeaJus                | Rp2.000"<<endl;
        cout<<"|    3. Nutrisari             | Rp3.000"<<endl;
        cout<<"|    4. Susu                  | Rp4.000"<<endl;
        cout<<"| >> Pilih Yang Anda Inginkan : ";
        cin>>minuman;
        if(minuman==1){
            totalHarga2 = 3000;
            totalseluruh = totalBayar+totalHarga2;
            getline(cin,spasi);
            cout<<"| >> Pilih Rasa Pop Ice       : ";
            getline(cin,varian);
        }
        else if(minuman==2){
            totalHarga2 = 2000;
            totalseluruh = totalBayar+totalHarga2;
            getline(cin,spasi);
            cout<<"| >> Pilih Rasa Pop Ice       : ";
            getline(cin,varian);
        }
        else if(minuman==3){
            totalHarga2 = 3000;
            totalseluruh = totalBayar+totalHarga2;
            getline(cin,spasi);
            cout<<"| >> Pilih Rasa Pop Ice       : ";
            getline(cin,varian);
        }
        else if(minuman==4){
            totalHarga2 = 4000;
            totalseluruh = totalBayar+totalHarga2;
            getline(cin,spasi);
            cout<<"| >> Pilih Rasa Pop Ice       : ";
            getline(cin,varian);
        }
    cout<<endl;
    cout<<"============================================"<<endl;
    cout<<"||\t\tTOTAL : "<<totalHarga2<<"\t\t ||"<<endl;
    cout<<"============================================"<<endl;
    cout<<" Ketik \"n\" untuk mengakhiri : ";
    cin>>enter;
}

void pilihmenu3(){
    cout<<"| Pilih Makanan :            |"<<endl;
    cout<<"|   1. Indomie               | Rp5.000"<<endl;
    cout<<"|   2. Nasi Goreng           | Rp7.000"<<endl;
    cout<<"|   3. Tambah Telor          | Rp2.000"<<endl;
        cout<<" >> Pilih Makanan Sesuai No  : ";
        cin>>makanan;
        cout<<"==========================================="<<endl;
        if(makanan==1){
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
                cout<<" Ketik \"y/n\" untuk memilih(yes/no) : ";
                cin>>yesno;
                totalHarga1 = 5000;
                if(yesno=="y"){
                    totalHarga1 = 5000+2000;
                }

            }
            else if(rasa==2){
                cout<<"=================================================================="<<endl;
                cout<<"| Anda Memilih Mie Rebus(Original). Apakah ingin menambah Telor? |"<<endl;
                cout<<"=================================================================="<<endl;
                cout<<" Ketik \"y/n\" untuk memilih(yes/no) : ";
                cin>>yesno;
                totalHarga1 = 5000;
                if(yesno=="y"){
                    totalHarga1 = 5000+2000;
                }
            }
            else if(rasa==3){
                cout<<"======================================================="<<endl;
                cout<<"| Anda Memilih Mie Soto. Apakah ingin menambah Telor? |"<<endl;
                cout<<"======================================================="<<endl;
                cout<<" Ketik \"y/n\" untuk memilih(yes/no) : ";
                cin>>yesno;
                totalHarga1 = 5000;
                if(yesno=="y"){
                    totalHarga1 = 5000+2000;
                }
                totalseluruh = totalBayar+totalHarga1;
            }
            else if(rasa==4){
                cout<<"=============================================================="<<endl;
                cout<<"| Anda Memilih Mie Ayam Geprek. Apakah ingin menambah Telor? |"<<endl;
                cout<<"=============================================================="<<endl;
                cout<<" Ketik \"y/n\" untuk memilih(yes/no) : ";
                cin>>yesno;
                totalHarga1 = 5000;
                if(yesno=="y"){
                    totalHarga1 = 5000+2000;
                }
                totalseluruh = totalBayar+totalHarga1;
            }
        }
        else if(makanan==2){
            cout<<"=========================================================="<<endl;
            cout<<"| Anda Memilih Nasi Goreng. Apakah ingin menambah Telor? |"<<endl;
            cout<<"=========================================================="<<endl;
            cout<<" Ketik \"y/n\" untuk memilih(yes/no) : ";
            cin>>yesno;
            totalHarga1 = 7000;
            if(yesno=="y"){
                totalHarga1 = 5000+2000;
            }
        }
        system("cls");
        cout<<"| Pilih Minuman :             |"<<endl;
        cout<<"|    1. Pop Ice               | Rp3.000"<<endl;
        cout<<"|    2. TeaJus                | Rp2.000"<<endl;
        cout<<"|    3. Nutrisari             | Rp3.000"<<endl;
        cout<<"|    4. Susu                  | Rp4.000"<<endl;
        cout<<"| >> Pilih Yang Anda Inginkan : ";
        cin>>minuman;
        if(minuman==1){
            totalHarga2 = 3000;
            getline(cin,spasi);
            cout<<"| >> Pilih Rasa Pop Ice       : ";
            getline(cin,varian);
        }
        else if(minuman==2){
            totalHarga2 = 2000;
            getline(cin,spasi);
            cout<<"| >> Pilih Rasa TeaJus        : ";
            getline(cin,varian);
        }
        else if(minuman==3){
            totalHarga2 = 3000;
            getline(cin,spasi);
            cout<<"| >> Pilih Rasa Nutrisari     : ";
            getline(cin,varian);
        }
        else if(minuman==4){
            totalHarga2 = 4000;
            getline(cin,spasi);
            cout<<"| >> Pilih Rasa Susu          : ";
            getline(cin,varian);
        }
    totalHarga3 = totalHarga1+totalHarga2;
    totalseluruh = totalBayar+totalHarga3;
    cout<<endl;
    cout<<"============================================"<<endl;
    cout<<"||\t\tTOTAL : "<<totalHarga3<<"\t\t ||"<<endl;
    cout<<"============================================"<<endl;
    cout<<" Ketik \"n\" untuk mengakhiri : ";
    cin>>enter;
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
    int index,pilihSewa,pilihPS,harga,ps;
    string enter,pilih;
    cout<<"<<<<<< RENTAL PS TI 1C >>>>>>  "<<endl;
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
    if(pilihSewa==1){

        for(index=0; index<5; index++){
            cout<< " HARGA PlayStation "<<index+1<<" : "<<sewa[index]<<"/Jam"<<endl;
        }
        cout<<" silahkan pilih varian PS berdasarkan nomor : ";
        cin>>pilihPS;
        totalBayar = sewaPs(pilihPS,lamaJam);
    }
     else if(pilihSewa==2){
        for(int index=0; index<5; index++){
            cout<< " HARGA PlayStation "<<index+1<<" : "<<pinjam[index]<<"/Hari"<<endl;
        }
        cout<<" silahkan pilih varian PS berdasarkan nomor : ";
        cin>>pilihPS;
        totalBayar = pinjamPs(pilihPS, lamaHari);
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
        if(pilih=="1"){
            pilihmenu1();
        }
        else if(pilih=="2"){
            pilihmenu2();
        }
        else if(pilih=="3"){
            pilihmenu3();
        }
    }
    system("cls");
    cout<<"==========================================================="<<endl;
    cout<<"|| ----------- Terima Kasih Telah Berkunjung ----------- ||"<<endl;
    cout<<"==========================================================="<<endl;



    if(pilihSewa==1){

        if(pilih=="t"){
            cout<<"| >> Anda Memilih---------------------------| Playstation "<<pilihPS<<endl;
            cout<<"| >> Anda Menyewa---------------------------| "<<lamaJam<<" Jam"<<endl;
            cout<<"============================================="<<endl;
            cout<<"||=========================================||"<<endl;
            cout<<"||\t\tTOTAL : "<<totalBayar<<"\t\t   ||"<<endl;
            cout<<"||=========================================||"<<endl;
        }
        else if(pilih=="1"){
            cout<<"| >> Anda Memilih---------------------------| Playstation "<<pilihPS<<endl;
            cout<<"| >> Anda Menyewa---------------------------| "<<lamaJam<<" Jam"<<endl;
            cout<<"|================= Tambahan ================|"<<endl;
            cout<<"| >> Anda Memilih---------------------------| Makanan"<<endl;
            if(makanan==1){
                cout<<"| >> Anda Memilih Makanan ------------------| Indomie ";
                if(rasa==1){
                    cout<<"Mie Goreng ";
                    if(yesno=="y"){
                        cout<<"Dan Tambah Telor"<<endl;
                    }
                }
                else if(rasa==2){
                    cout<<"Mie Rebus(Original) ";
                    if(yesno=="y"){
                        cout<<"Dan Tambah Telor"<<endl;
                    }
                }
                else if(rasa==3){
                    cout<<"Mie Soto ";
                    if(yesno=="y"){
                        cout<<"Dan Tambah Telor"<<endl;
                    }
                }
                else if(rasa==3){
                    cout<<"Mie Ayam Geprek ";
                    if(yesno=="y"){
                        cout<<"Dan Tambah Telor"<<endl;
                    }
                }
            }
            else if(makanan==2){
                cout<<"| >> Anda Memilih Makanan ------------------| Nasi Goreng ";
                if(yesno=="y"){
                        cout<<"Dan Tambah Telor"<<endl;
                }
            }
            cout<<"\n============================================="<<endl;
            cout<<endl;
            cout<<"||===========================================||"<<endl;
            cout<<"||\t\tTOTAL : "<<totalseluruh<<"\t\t   ||"<<endl;
            cout<<"||===========================================||"<<endl;
        }
        else if(pilih=="2"){
            cout<<"| >> Anda Memilih---------------------------| Playstation "<<pilihPS<<endl;
            cout<<"| >> Anda Menyewa---------------------------| "<<lamaJam<<" Jam"<<endl;
            cout<<"|================= Tambahan ================|"<<endl;
            cout<<"| >> Anda Memilih---------------------------| Minuman ";
            if(minuman==1){
                cout<<"PopIce "<<varian<<endl;
            }
            if(minuman==2){
                cout<<"TeaJus "<<varian<<endl;
            }
            if(minuman==3){
                cout<<"Nutrisari "<<varian<<endl;
            }
            if(minuman==4){
                cout<<"Susu "<<varian<<endl;
            }
            cout<<"\n============================================="<<endl;
            cout<<endl;
            cout<<"||===========================================||"<<endl;
            cout<<"||\t\tTOTAL : "<<totalseluruh<<"\t\t   ||"<<endl;
            cout<<"||===========================================||"<<endl;
        }
        else if(pilih=="3"){
            cout<<"| >> Anda Memilih---------------------------| Playstation "<<pilihPS<<endl;
            cout<<"| >> Anda Menyewa---------------------------| "<<lamaJam<<" Jam"<<endl;
             cout<<"|================= Tambahan ================|"<<endl;
            cout<<"| >> Anda Memilih---------------------------| Makanan"<<endl;
            if(makanan==1){
                cout<<"| >> Anda Memilih Makanan ------------------| Indomie ";
                if(rasa==1){
                    cout<<"Mie Goreng ";
                    if(yesno=="y"){
                        cout<<"Dan Tambah Telor";
                    }
                }
                else if(rasa==2){
                    cout<<"Mie Rebus(Original) ";
                    if(yesno=="y"){
                        cout<<"Dan Tambah Telor";
                    }
                }
                else if(rasa==3){
                    cout<<"Mie Soto ";
                    if(yesno=="y"){
                        cout<<"Dan Tambah Telor";
                    }
                }
                else if(rasa==3){
                    cout<<"Mie Ayam Geprek ";
                    if(yesno=="y"){
                        cout<<"Dan Tambah Telor";
                    }
                }
            }
            else if(makanan==2){
                cout<<"| >> Anda Memilih Makanan ------------------| Nasi Goreng ";
                if(yesno=="y"){
                    cout<<"Dan Tambah Telor";
                }
            }
            cout<<"\n| >> Anda Memilih---------------------------| Minuman ";
            if(minuman==1){
                cout<<"PopIce "<<varian<<endl;
            }
            if(minuman==2){
                cout<<"TeaJus "<<varian<<endl;
            }
            if(minuman==3){
                cout<<"Nutrisari "<<varian<<endl;
            }
            if(minuman==4){
                cout<<"Susu "<<varian<<endl;
            }
            cout<<"\n============================================="<<endl;
            cout<<endl;
            cout<<"||===========================================||"<<endl;
            cout<<"||\t\tTOTAL : "<<totalseluruh<<"\t\t         ||"<<endl;
            cout<<"||===========================================||"<<endl;
        }
    }
    else if(pilihSewa==2){
        cout<<"| >> Nama-----------------------------------| "<<nama<<endl;
        cout<<"| >> Alamat---------------------------------| "<<alamat<<endl;
        cout<<"| >> Anda Memilih---------------------------| Playstation "<<pilihPS<<endl;
        cout<<"| >> Anda Menyewa---------------------------| "<<lamaHari<<" Hari"<<endl;
        cout<<"||=========================================||"<<endl;
        cout<<"||\t\tTOTAL : "<<totalBayar<<"\t\t         ||"<<endl;
        cout<<"||=========================================||"<<endl;
    }
    return 0;
}
