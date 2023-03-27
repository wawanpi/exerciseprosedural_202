#include <iostream>
#include <string>
using namespace std;

struct Candidate {
    string name;
    int nilai_matematika;
    int nilai_inggris;
    float rata_nilai;
    bool accepted;
};

int main() {
    Candidate candidates[20];

    
    for (int i = 0; i < 20; i++) {
        cout << "Masukkan nama kandidat ke-" << i+1 << ": ";
        cin >> candidates[i].name;
        cout << "Masukkan nilai matematika kandidat ke-" << i+1 << ": ";
        cin >> candidates[i].nilai_matematika;
        cout << "Masukkan nilai bahasa Inggris kandidat ke-" << i+1 << ": ";
        cin >> candidates[i].nilai_inggris;
        cout << endl;

        
        candidates[i].rata_nilai = (candidates[i].nilai_matematika + candidates[i].nilai_inggris) / 2;

        if (candidates[i].nilai_matematika >= 70 || candidates[i].nilai_matematika > 80) {
            candidates[i].accepted = true;
        }
        else {
            candidates[i].accepted = false;
        }
    }

    cout << "Daftar kandidat dan status penerimaan: " << endl;
    cout << "nama\tstatus" << endl;
    for (int i = 0; i < 20; i++) {
        cout << candidates[i].name << "\t";
        if (candidates[i].accepted) {
         cout << "Diterima";
        }
        else {
            cout << "Ditolak";
        }
       cout << endl;
    }


    int accepted_count = 0;
    int rejected_count = 0;
    for (int i = 0; i < 20; i++) {
        if (candidates[i].accepted) {
            accepted_count++;
        }
        else {
            rejected_count++;
        }
    }
    cout << "Total kandidat diterima: " << accepted_count << endl;
    cout << "Total kandidat ditolak: " << rejected_count << endl;

    return 0;
}
