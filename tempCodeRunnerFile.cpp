
#include <iostream>
using namespace std;

// deklarasi variable
float jarijari;
float phi = 3.14159;
//bagian fungsi
void awal(){
    cout << "masukan jari-jari lingkaran: ";
    cin >> jarijari;

}
float luas (float jari_jari, float phi){
    return phi * jarijari * jarijari;

}
void akhir (){
    cout << "hasil luas lingkaran dengan jari jari " >> jarijari << "adalah" << luas (jari-jari, phi);

}
int main(){
    awal();
    akhir();
    
}