// author : Redi Yansen.

#include <iostream>

using namespace std;
#include "HitungAnggotaKeluarga.h"

class KeluargaAhmad: public HitungAnggotaKeluarga
{
public:
    int getTotalKeluarga()
    {
        return (anakLaki + anakWanita + istri + 1);
    }
};

class KeluargaBudi: public HitungAnggotaKeluarga
{
public:
    int getTotalKeluarga()
    {
        
        return (anakLaki + anakWanita + istri + 1);
    }
};

int main(void)
{
    KeluargaAhmad Ahmad;
    KeluargaBudi  Budi;

    Ahmad.setAnakLaki(5);
    Ahmad.setAnakWanita(7);
    Ahmad.setIstri(1);
    
    cout << "Total Keluarga Ahmad area: " << Ahmad.getTotalKeluarga() << endl;

    Budi.setAnakLaki(8);
    Budi.setAnakWanita(4);
    
    cout << "Total Keluarga Budi area: " << Budi.getTotalKeluarga() << endl;

    return 0;
}

