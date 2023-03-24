/* 
Nama: Muhammad Iqbal Januari
NIM: 1202221011
Kelas: TI-22-001
*/

// TUGAS PERTEMUAN 3 //
/* Gunakan 3 angka belakang NIM pada setiap variabel yang ditulis. 
Contoh: Citra - 1202211005
var_005 */

#include <iostream>
using namespace std;

struct time {
    int hour_011;
    int minute_011;
    int sec_011;
};

//menerima input jam, menit, dan detik dari user
void getTime(time& t){
    cout << "Input hour: ";
    cin >> t.hour_011;
    cout << "Input minute: ";
    cin >> t.minute_011;
    cout << "Input second: ";
    cin >> t.sec_011;
}

//buat nampilin jam, menit, sama detiknya
void printTime(time t){
    cout << t.hour_011 << ":" << t.minute_011 << ":" << t.sec_011 << endl;
}

//misal 3 jam 2 menit 3 detik berarti jadi 10923 detik
int searchTotalSec(time t){
    return t.hour_011*3600 + t.minute_011*60 + t.sec_011;
}

//ubah lagi 10923 detik jadi 3 jam 2 menit 3 detik
void convertTime(int totalSeconds, time& t){
    t.hour_011 = totalSeconds / 3600;
    totalSeconds %= 3600;
    t.minute_011 = totalSeconds / 60;
    t.sec_011 = totalSeconds % 60;
}

int main(){
    time x_011;
    int sumsec_011;
    cout << "Time input: " << endl;
    getTime(x_011);
    cout << "Print that time: " << endl;
    printTime(x_011);
    sumsec_011 = searchTotalSec(x_011);
    cout << "Total seconds : " << sumsec_011 << endl;
    convertTime(sumsec_011, x_011);
    cout << "Print time after convert: " << endl;
    printTime(x_011);
    
    return 0;
}