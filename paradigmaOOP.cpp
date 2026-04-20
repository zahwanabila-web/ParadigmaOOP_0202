#include <iostream>
using namespace std;

class Barang{
public :
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void tampilkanData(){
        cout << "Nama : " << nama << endl;
        cout << "Jumlah : " << jumlah << endl;
        cout << "Kategori : " << kategori << endl;
        cout << "TanggalProduksi : "<< tanggalProduksi;
    }
};

int main(){
    Barang elektronik;
    elektronik.nama = "Kulkas";
    elektronik.jumlah = 1;
    elektronik.kategori = "elektronik";
    elektronik.tanggalProduksi = "2026";
    
    Barang nonElektronik;
    nonElektronik.nama = "Peralatanmasak";
    nonElektronik.jumlah = 20;
    nonElektronik.kategori = "nonElektronik";
    nonElektronik.tanggalProduksi = 2000;

    elektronik.tampilkanData();
    nonElektronik.tampilkanData();
}