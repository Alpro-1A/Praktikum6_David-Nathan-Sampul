#include <iostream>
using namespace std;
int main() {
    cout << "=======================================" << endl;
    cout << "## Cari Nilai Paling Terbesar  ##" << endl;
    cout << "=======================================" << endl;
    cout << endl;
    int input[120], arr_count, i, max_num; // Deklarasi 4 Variabel = input[120], arr_count, i, max_num
                                           // input[120] = buat nampungin semua angka. Soalnya di set ama angka 120, jadi itu jumlah maksimum element array nya.
                                           // arr_count = buat tempat input jumlah nilai angka yang mau dimasukkin tapi nga perlu input 120 angka sekaligus.
    cout << "Input jumlah element Array: ";
    cin >> arr_count;
    cout << "Input "<< arr_count << " angka: " ;
    cout << endl;

    for(i = 0; i < arr_count; i++){ // setiap angka yang diinput disimpan ke dalam array
    cin >> input[i];
    }
    cout << endl;
    max_num = input[0];
    for(i = 0; i < arr_count; i++){   // proses mencari nilai terbesar
    if(input[i] > max_num){
        max_num = input[i];
        }
    }
    cout  << "Angka paling terbesar adalah: " << max_num; // hasil angka nilai terbesar dari semua element array
    cout << endl;
        return 0;
}