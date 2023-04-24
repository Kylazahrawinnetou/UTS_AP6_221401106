/*  NOMOR 1 - INTEGER MENJADI STRING
    NAMA    :   KYLA ZAHRA WINNETOU
    NIM     :   221401106
    KOM     :   C
*/

#include <iostream> 
#include <sstream>  // header untuk stringstream
using namespace std;

int main() {

    int num = 465;    // variabel num dengan nilai 465
    stringstream ss;   // membuat objek stringstream

    system ("cls");
    ss << num; 
    string str_num = ss.str();  // mengonversi stringstream menjadi string dan menyimpannya dalam variabel str_num

    cout << "Integer : " << num << endl;   
    cout << "String  : " << str_num << endl; 
    cout << endl;
    
    return 0;  
}

/*  kenapa saya menggunakan stringstream? 
    karena stringstream <sstream> digunakan untuk mengubah tipe data dari satu bentuk ke bentuk lainnya */