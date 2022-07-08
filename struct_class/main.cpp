// author : Redi Yansen.

#include <iostream>
#include <string>
using namespace std;

struct siswa{
    int nim ;
    string nama;
    float nilai ;
};
 
class mahasiswaError{
    int nim;
    string nama;
    float nilai;
    void printData(){
        cout<<"NIM   \t= "<<nim<<endl;
        cout<<"Nama  \t= "<<nama<<endl;
        cout<<"Nilai \t= "<<nilai<<endl;
    }
};

class mahasiswa{
public:
    int nim;
    string nama;
    float nilai;
    void printData(){
        cout<<"NIM   \t= "<<nim<<endl;
        cout<<"Nama  \t= "<<nama<<endl;
        cout<<"Nilai \t= "<<nilai<<endl;
    }
};


 
int main() {
	/* ini akan error karena mengakses anggota class mahasiswaError(tidak ada deklarasi public secara default bersifat private)
	mahasiswaError anton;
    anton.nim=1234;
    anton.nama="Antoni";
    anton.nilai=95;
    anton.printData();
    */
    
    // ini akan sukses karena mengakses anggota class yang bersifat public(ada deklarasi public)
	mahasiswa tono;
    tono.nim=9765;
    tono.nama="Hartono";
    tono.nilai=95;
    tono.printData();
    cout<<endl;
	
	 // ini akan sukses karena mengakses anggota struct (secara default public)
	siswa budi;
	budi.nim = 1888;
    budi.nama = "Budi Januar";
    budi.nilai = 75.5;
	
	cout<<"NIM   \t= "<<budi.nim<<endl;
    cout<<"Nama  \t= "<<budi.nama<<endl;
    cout<<"Nilai \t= "<<budi.nilai<<endl;
	
    return 0;
}