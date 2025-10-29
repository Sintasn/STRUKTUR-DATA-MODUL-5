#include "Doublylist.h"
#include "Doublylist.cpp"
#include <iostream>
using namespace std;

int main() {
    List L;
    CreateList(L);
    
    infotype kendaraan;
    string nopolCari, nopolHapus;
    address P;
    
    cout << "Masukkan nomor polisi: ";
    cin >> kendaraan.nopol;
    cout << "Masukkan warna kendaraan: ";
    cin >> kendaraan.warna;
    cout << "Masukkan tahun kendaraan: ";
    cin >> kendaraan.thnBuat;
    
    P = alokasi(kendaraan);
    if (findElm(L, kendaraan.nopol) == NULL) {
        insertLast(L, P);
    } else {
        cout << "Nomor polisi sudah terdaftar" << endl;
        dealokasi(P);
    }
    
    cout << "\nMasukkan nomor polisi: ";
    cin >> kendaraan.nopol;
    cout << "Masukkan warna kendaraan: ";
    cin >> kendaraan.warna;
    cout << "Masukkan tahun kendaraan: ";
    cin >> kendaraan.thnBuat;
    
    P = alokasi(kendaraan);
    if (findElm(L, kendaraan.nopol) == NULL) {
        insertLast(L, P);
    } else {
        cout << "Nomor polisi sudah terdaftar" << endl;
        dealokasi(P);
    }
    
    cout << "\nMasukkan nomor polisi: ";
    cin >> kendaraan.nopol;
    cout << "Masukkan warna kendaraan: ";
    cin >> kendaraan.warna;
    cout << "Masukkan tahun kendaraan: ";
    cin >> kendaraan.thnBuat;
    
    P = alokasi(kendaraan);
    if (findElm(L, kendaraan.nopol) == NULL) {
        insertLast(L, P);
    } else {
        cout << "Nomor polisi sudah terdaftar" << endl;
        dealokasi(P);
    }
    
    cout << "\nMasukkan nomor polisi: ";
    cin >> kendaraan.nopol;
    cout << "Masukkan warna kendaraan: ";
    cin >> kendaraan.warna;
    cout << "Masukkan tahun kendaraan: ";
    cin >> kendaraan.thnBuat;
    
    P = alokasi(kendaraan);
    if (findElm(L, kendaraan.nopol) == NULL) {
        insertLast(L, P);
    } else {
        cout << "Nomor polisi sudah terdaftar" << endl;
        dealokasi(P);
    }
    
    cout << "\n";
    printInfo(L);
    
    cout << "\nMasukkan Nomor Polisi yang dicari: ";
    cin >> nopolCari;
    
    P = findElm(L, nopolCari);
    if (P != NULL) {
        cout << "Nomor Polisi : " << P->info.nopol << endl;
        cout << "Warna        : " << P->info.warna << endl;
        cout << "Tahun        : " << P->info.thnBuat << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }
    
    cout << "\nMasukkan Nomor Polisi yang akan dihapus: ";
    cin >> nopolHapus;
    
    deleteByNopol(L, nopolHapus);
    
    cout << "\n";
    printInfo(L);
    
    return 0;
}