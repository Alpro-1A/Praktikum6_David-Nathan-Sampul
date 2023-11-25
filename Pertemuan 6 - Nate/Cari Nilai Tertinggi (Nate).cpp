#include <iostream>
using namespace std;

int main() {
    cout << "=======================================" << endl;
    cout << "## Cari Nilai Paling Terbesar  ##" << endl;
    cout << "=======================================" << endl;
    cout << endl;

    cout << "Nilai-Nilai: " << endl; // Nampilin semua nilai dari array element
    int sumArr[5] = {30, 60, 180, 120, 150};
    for (int i = 0; i < 5; ++i) {
        cout << "Nilai " << i + 1 << ": " << sumArr[i] << endl;
    }

    int nilTinggi = sumArr[0];
    int index = 0;

    for (int i = 1; i < 5; ++i) {     // Nyari nilai tertinggi ama indexnya
        if (sumArr[i] > nilTinggi) {
            nilTinggi = sumArr[i];
            index = i;
        }
    }

    cout << endl;

    cout << "Nilai paling tertinggi: " << nilTinggi << endl;     // Menampilkan hasil nilai tertinggi dan index
    cout << "Index yang nilainya tertinggi: " << index << endl;

    return 0;
}
