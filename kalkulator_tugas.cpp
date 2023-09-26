#include <iostream>
using namespace std;
int main()
 {
    char operasi;
    float angka1, angka2, hasil;
    cout << "Masukkan operasi matematika (+, -, *, /): ";
    cin >> operasi;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    switch (operasi)
    {
        case '+':
            hasil = angka1 + angka2;
            cout << "Operasi: " << angka1 << " + " << angka2 << endl;
            cout << "Hasil penjumlahan: " << hasil << endl;
            break;
        case '-':
            hasil = angka1 - angka2;
            cout << "Operasi: " << angka1 << " - " << angka2 << endl;
            cout << "Hasil pengurangan: " << hasil << endl;
            break;
        case '*':
            hasil = angka1 * angka2;
            cout << "Operasi: " << angka1 << " * " << angka2 << endl;
            cout << "Hasil perkalian: " << hasil << endl;
            break;
        case '/':
            if (angka2 != 0) 
            {
                hasil = angka1 / angka2;
                cout << "Operasi: " << angka1 << " / " << angka2 << endl;
                cout << "Hasil pembagian: " << hasil << endl;
            } else 
            {
                cout << "Tidak dapat melakukan pembagian oleh nol." << endl;
            }
            break;
        default:
            cout << "Operasi tidak valid." << endl;
            break;
    }

    return 0;
}