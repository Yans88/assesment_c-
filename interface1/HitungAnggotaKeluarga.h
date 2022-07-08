// author : Redi Yansen.

#include <iostream>

using namespace std;


class HitungAnggotaKeluarga
{
public:    
    virtual int getTotalKeluarga() = 0;
    void setAnakLaki(int l)
    {
        anakLaki = l;
    }

    void setAnakWanita(int w)
    {
        anakWanita = w;
    }
	
	void setIstri(int i)
    {
        istri = i;
    }

protected:
    int anakLaki;
    int anakWanita;
    int istri = 3;
};




// https://ideone.com/fork/xbSeDm
// https://ideone.com/fork/oPbcen

// https://ideone.com/xbSeDm
// https://ideone.com/oPbcen