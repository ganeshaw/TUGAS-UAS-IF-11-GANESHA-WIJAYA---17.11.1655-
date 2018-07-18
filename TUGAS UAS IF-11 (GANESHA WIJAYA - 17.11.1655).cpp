#include

class bangun_ruang{
public:
int sisi,luas;

    void isi_sisi(){
    cout<<"Masukan Nilai Sisi  : "; cin>>sisi;
    }

    int rumus(){
    luas=sisi*sisi;
    }

    void tampil_luas(){
    cout<<"Jadi Luas Persegi   : "<    }
};

int main(){
bangun_ruang PS;
PS.isi_sisi();
PS.rumus();
PS.tampil_luas();

}