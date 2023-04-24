/*  NOMOR 2 - PROGRAM CASHIER MENGGUNAKAN LOOPING DAN KONDISI
    NAMA    :   KYLA ZAHRA WINNETOU
    NIM     :   221401106
    KOM     :   C
*/

#include <iostream>
using namespace std;

int main() {

    int item_count; // menyimpan jumlah item yang diambil
    double item_price, subtotal = 0, tax, total; // menyimpan harga setiap item, subtotal, pajak, dan total pembelian

    system ("cls");
    cout << "Jumlah item yang diambil : ";
    cin >> item_count;
    cout << endl;

    for (int i = 1; i <= item_count; i++) {
        cout << "Input harga item ke-" << i << " : Rp. ";
        cin >> item_price;
        subtotal += item_price; // mnambahkan harga item ke-i kedalam subtotal
    }
    cout << endl;
    tax = subtotal * 0.1; // menghitung pajak
    total = subtotal + tax; // menghitung total pembelian

    cout << "Subtotal : Rp. " << subtotal << endl;
    cout << "Pajak    : Rp. " << tax << endl;
    cout << "Total    : Rp. " << total << endl;

    if (total >= 80000) {
        double discount = total * 0.1;
        double discounted_total = total - discount;
        cout << endl;
        cout << "Diskon 10% diberikan!" << endl;
        cout << "Total setelah diskon : Rp. " << discounted_total << endl;
    }

    cout << endl;
    return 0;
}



