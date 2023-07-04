#include <fstream>
#include <iostream>
#include <stdio.h>
#include<string>
#include <stdlib.h>
#ifndef STOKK_H
#define STOKK_H
#include "stokk.h"
#include<windows.h>
using namespace std;
 

class stokk {
public:
    void kontrol_panel();
    void kati_ekle();
    void kati_listele();
    void kati_guncelle();
    void kati_sil();
    void sivi_ekle();
    void sivi_listele();
    void sivi_guncelle();
    void sivi_sil();
    void kapsul_ekle();
    void kapsul_listele();
    void kapsul_guncelle();
    void kapsul_sil();
    void kati_kontrol();
    void sivi_kontrol();
    void kapsul_kontrol();
};
 

#endif
