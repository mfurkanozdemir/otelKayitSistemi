#include <iostream>
#include <string>
using namespace std;

const int MAX_MUSTERI_SAYISI = 2; // Maksimum müşteri sayisi

struct Musteri
{
    string ad;
    string soyad;
    string rezTarihi;

};
void musteriEkle(Musteri musteriListesi[], int& mevcutMusteriSayisi, const Musteri& yeniMusteri)
{
    if (mevcutMusteriSayisi < MAX_MUSTERI_SAYISI) {
        musteriListesi[mevcutMusteriSayisi++] = yeniMusteri;
        cout << "Musteri eklendi." << endl;
    }
    else
    {
        cout << "Musteri limitine ulasildi, yeni müsteri eklenemedi." << endl;
    }
}
void musteriListele(const Musteri musteriListesi[], int mevcutMusteriSayisi) {
    cout << "Musteri Listesi" << endl;
    for (int i = 0; i < mevcutMusteriSayisi; i++) {
        cout << "Ad:" << musteriListesi[i].ad << endl
             << "Soyad:" << musteriListesi[i].soyad << endl
             << "Rezervasyon Tarihi:" << musteriListesi[i].rezTarihi;
    }
    cout << endl;
}

int main()
{
    Musteri musteriListesi[MAX_MUSTERI_SAYISI];
    int mevcutMusteriSayisi = 0;

    // Yeni müşteri ekleyelim
    Musteri yeniMusteri1 = { "Furkan", "Ozdemir", "1999-06-1999" };
    musteriEkle(musteriListesi, mevcutMusteriSayisi, yeniMusteri1);

    musteriListele(musteriListesi, mevcutMusteriSayisi);

}

