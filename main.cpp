/*
    Program Mawar
    Ket : Program untuk mengecek bilangan absolut (negatif atau positif) => positif dan kelipatan lima
    By  : Yudha Rizqia Grafer
    Tgl : 12 Oktober 2022

*/#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int bilangan;
    //string hasil;
    //Algoritma
    cout << "Masukkan Bilangan : " ;
    cin >> bilangan;
    if ( bilangan < 0 ){
        bilangan *=-1; //bilangan = bilangan * -1
    }
    if ( bilangan % 5 == 0 ){
        cout << bilangan << " adalah kelipatan 5";
    }else{
        cout << bilangan << " bukan kelipatan 5";
    }
    cout << endl << "Cek Selesai";
    return 0;
}
