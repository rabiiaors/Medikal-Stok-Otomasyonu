#include<sstream>
#include<string.h>
#include<string>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "stokk.h"
#include<windows.h>

using namespace std;


void stokk::kontrol_panel()
{
    
	system("cls");
    cout << "\n\n\t\t\t\t ILAC STOK TAKIP SISTEMINE HOSGELDINIZ";
    cout << "\n\n\t\t\t\t\tYAPILABILECEK ISLEMLER";
    cout << "\n\n\t\t\t\t\t 1. Ilac Ekle";
    cout << "\n\t\t\t\t\t 2. Ilac Listeleme";
    cout << "\n\t\t\t\t\t 3. Ilac Guncelle";
    cout << "\n\t\t\t\t\t 4. Ilac Sil";
    cout << "\n\t\t\t\t\t 5. Kontrol"; 
	cout << "\n\t\t\t\t\t 6. Cikis";
    
    system("color B0");
}
 


void stokk::kati_ekle()
{
    system("cls");
    fstream file;
    int kopya;
    string ilacadi, ilacyili, id;
    cout << "\n\n\t\t\t\t\t\tILAC EKLE";
    cout << "\n\n\t\t\t\t\tIlac Id : ";
    cin >> id;
    cout << "\n\t\t\t\t\tIlac Adi : ";
    cin >> ilacadi;
    cout << "\n\t\t\t\t\tSon Kullanma Tarihi : ";
    cin >> ilacyili;
    cout << "\n\t\t\t\t\tAdet Sayisi : ";
    cin >> kopya;
 
   
    file.open("D:// kati.txt",
              ios::out | ios::app);
  file << " " << id << " "
         << ilacadi << " " << ilacyili
         << " " << kopya << "\n";
    file.close();
}

void stokk::sivi_ekle()
{
    system("cls");
    fstream file;
    int kopya;
    string ilacadi, ilacyili, id;
    cout << "\n\n\t\t\t\t\t\tILAC EKLE";
    cout << "\n\n\t\t\t\t\tIlac Id : ";
    cin >> id;
    cout << "\n\t\t\t\t\tIlac Adi : ";
    cin >> ilacadi;
    cout << "\n\t\t\t\t\tSon Kullanma Tarihi : ";
    cin >> ilacyili;
    cout << "\n\t\t\t\t\tAdet Sayisi : ";
    cin >> kopya;
 
   
    file.open("D:// sivi.txt",
              ios::out | ios::app);
  file << " " << id << " "
         << ilacadi << " " << ilacyili
         << " " << kopya << "\n";
    file.close();
}

void stokk::kapsul_ekle()
{
    system("cls");
    fstream file;
    int kopya;
    string ilacadi, ilacyili, id;
    cout << "\n\n\t\t\t\t\t\tILAC EKLE";
    cout << "\n\n\t\t\t\t\tIlac Id : ";
    cin >> id;
    cout << "\n\t\t\t\t\tIlac Adi : ";
    cin >> ilacadi;
    cout << "\n\t\t\t\t\tSon Kullanma Tarihi : ";
    cin >> ilacyili;
    cout << "\n\t\t\t\t\tAdet Sayisi : ";
    cin >> kopya;
 
   
    file.open("D:// kapsul.txt",
              ios::out | ios::app);
  file << " " << id << " "
         << ilacadi << " " << ilacyili
         << " " << kopya << "\n";
    file.close();
}
 
void stokk::kati_listele()
{
    system("cls");
    fstream file;
    int kopya;
    string ilacadi, id, ilacyili;
    cout << "\n\n\t\t\t\t\tKATI ILAC LISTESI";
 
  
    file.open("D:// kati.txt", ios::in);
    if (!file)
     cout << "\n\nDosya acilamadi!";
    else {
 
                cout << "\n\n\nIlac ID\t\tIlac Adi"
             << "\t\tSon Kullanma Tarihi\t\tAdet "
                "Sayisi\n\n";
        file >> id >> ilacadi;
        file >> ilacyili >> kopya;
        while (!file.eof()) {
 
            cout << "  " << id
                 << "\t\t" << ilacadi
                 << "\t\t\t\t" << ilacyili
                 << "\t\t\t\t" << kopya
                 << "\n\n";
            file >> id >> ilacadi;
            file >> ilacyili >> kopya;
        }
 
        system("pause");
 
        file.close();
    }
}

void stokk::kapsul_listele()
{
    system("cls");
    fstream file;
    int kopya;
    string ilacadi, id, ilacyili;
    cout << "\n\n\t\t\t\t\tKAPSUL ILAC LISTESI";
 
  
    file.open("D:// kapsul.txt", ios::in);
    if (!file)
     cout << "\n\nDosya acilamadi!";
    else {
 
                cout << "\n\n\nIlac ID\t\tIlac Adi"
             << "\t\tSon Kullanma Tarihi\t\tAdet "
                "Sayisi\n\n";
        file >> id >> ilacadi;
        file >> ilacyili >> kopya;
        while (!file.eof()) {
 
            cout << "  " << id
                 << "\t\t" << ilacadi
                 << "\t\t\t\t" << ilacyili
                 << "\t\t\t\t" << kopya
                 << "\n\n";
            file >> id >> ilacadi;
            file >> ilacyili >> kopya;
        }
 
        system("pause");
 
        file.close();
    }
}


void stokk::sivi_listele()
{
    system("cls");
    fstream file;
    int kopya;
    string ilacadi, id, ilacyili;
    cout << "\n\n\t\t\t\t\tSIVI ILAC LISTESI";
 
  
    file.open("D:// sivi.txt", ios::in);
    if (!file)
     cout << "\n\nDosya acilamadi!";
    else {
 
                cout << "\n\n\nIlac ID\t\tIlac Adi"
             << "\t\tSon Kullanma Tarihi\t\tAdet "
                "Sayisi\n\n";
        file >> id >> ilacadi;
        file >> ilacyili >> kopya;
        while (!file.eof()) {
 
            cout << "  " << id
                 << "\t\t" << ilacadi
                 << "\t\t\t\t" << ilacyili
                 << "\t\t\t\t" << kopya
                 << "\n\n";
            file >> id >> ilacadi;
            file >> ilacyili >> kopya;
        }
 
        system("pause");
 
        file.close();
    }
}
 
void stokk::kati_guncelle()
{
    system("cls");
    fstream file, file1;
  int kopya, kopya1, count = 0;
    string ilacadi, ilacadi1, ilacyili;
    string ilacyili1, idd, id;
        cout << "\n\n\t\t\t\t\t\tILAC GUNCELLEME";
    file1.open("D:// kati1.txt",
               ios::app | ios::out);
    file.open("D:// kati.txt", ios::in);
 
    if (!file)
       cout << "\n\nDosya acilamadi!";
    else {
 
   cout << "\n\n\t\t\t\t\t\tIlac Id : ";
        cin >> id;
        file >> idd >> ilacadi;
        file >> ilacyili >> kopya;
        while (!file.eof()) {
           if (id == idd) {
                system("cls");
                cout << "\t\t\t\t\t\t"
                     << "Ilac Guncelleme";
                cout << "\n\n\t\t\t\t\tYeni Ilac Adi : ";
                cin >> ilacadi1;
                cout << "\n\t\t\t\t\tSon Kullanma Tarihi : ";
                cin >> ilacyili1;
                cout << "\n\t\t\t\t\tAdet Sayisi : ";
                cin >> kopya1;
                file1 << " " << id << " "
                      << ilacadi1 << " "
                      << ilacyili1 << " " << kopya1
                      << "\n\n";
                count++;
            }
            else
                file1 << " " << idd
                      << " " << ilacadi
                      << " " << ilacyili
                      << " " << kopya
                      << "\n\n";
            file >> idd >> ilacadi;
            file >> ilacyili >> kopya;
        }
        if (count == 0)
            cout << "\n\n\t\t\t\t\tIlac Id'si"
                 << " bulunamadi...";
    }
    cout << endl;
    system("pause");
 
  
    file.close();
    file1.close();
    remove("D:// kati.txt");
    rename("D:// kati1.txt",
           "D:// kati.txt");
}

void stokk::sivi_guncelle()
{
    system("cls");
    fstream file, file1;
  int kopya, kopya1, count = 0;
    string ilacadi, ilacadi1, ilacyili;
    string ilacyili1, idd, id;
        cout << "\n\n\t\t\t\t\t\tILAC GUNCELLEME";
    file1.open("D:// sivi1.txt",
               ios::app | ios::out);
    file.open("D:// sivi.txt", ios::in);
 
    if (!file)
       cout << "\n\nDosya acilamadi!";
    else {
 
   cout << "\n\n\t\t\t\t\t\tIlac Id : ";
        cin >> id;
        file >> idd >> ilacadi;
        file >> ilacyili >> kopya;
        while (!file.eof()) {
           if (id == idd) {
                system("cls");
                cout << "\t\t\t\t\t\t"
                     << "Ilac Guncelleme";
                cout << "\n\n\t\t\t\t\tYeni Ilac Adi : ";
                cin >> ilacadi1;
                cout << "\n\t\t\t\t\tSon Kullanma Tarihi : ";
                cin >> ilacyili1;
                cout << "\n\t\t\t\t\tAdet Sayisi : ";
                cin >> kopya1;
                file1 << " " << id << " "
                      << ilacadi1 << " "
                      << ilacyili1 << " " << kopya1
                      << "\n\n";
                count++;
            }
            else
                file1 << " " << idd
                      << " " << ilacadi
                      << " " << ilacyili
                      << " " << kopya
                      << "\n\n";
            file >> idd >> ilacadi;
            file >> ilacyili >> kopya;
        }
        if (count == 0)
            cout << "\n\n\t\t\t\t\tIlac Id'si"
                 << " bulunamadi...";
    }
    cout << endl;
    system("pause");
 
  
    file.close();
    file1.close();
    remove("D:// sivi.txt");
    rename("D:// sivi1.txt",
           "D:// sivi.txt");
}

void stokk::kapsul_guncelle()
{
    system("cls");
    fstream file, file1;
  int kopya, kopya1, count = 0;
    string ilacadi, ilacadi1, ilacyili;
    string ilacyili1, idd, id;
        cout << "\n\n\t\t\t\t\t\tILAC GUNCELLEME";
    file1.open("D:// kapsul1.txt",
               ios::app | ios::out);
    file.open("D:// kapsul.txt", ios::in);
 
    if (!file)
       cout << "\n\nDosya acilamadi!";
    else {
 
   cout << "\n\n\t\t\t\t\t\tIlac Id : ";
        cin >> id;
        file >> idd >> ilacadi;
        file >> ilacyili >> kopya;
        while (!file.eof()) {
           if (id == idd) {
                system("cls");
                cout << "\t\t\t\t\t\t"
                     << "Ilac Guncelleme";
                cout << "\n\n\t\t\t\t\tYeni Ilac Adi : ";
                cin >> ilacadi1;
                cout << "\n\t\t\t\t\tSon Kullanma Tarihi : ";
                cin >> ilacyili1;
                cout << "\n\t\t\t\t\tAdet Sayisi : ";
                cin >> kopya1;
                file1 << " " << id << " "
                      << ilacadi1 << " "
                      << ilacyili1 << " " << kopya1
                      << "\n\n";
                count++;
            }
            else
                file1 << " " << idd
                      << " " << ilacadi
                      << " " << ilacyili
                      << " " << kopya
                      << "\n\n";
            file >> idd >> ilacadi;
            file >> ilacyili >> kopya;
        }
        if (count == 0)
            cout << "\n\n\t\t\t\t\tIlac Id'si"
                 << " bulunamadi...";
    }
    cout << endl;
    system("pause");
 
  
    file.close();
    file1.close();
    remove("D:// kapsul.txt");
    rename("D:// kapsul1.txt",
           "D:// kapsul.txt");
}

 
void stokk::kati_sil()
{
    system("cls");
    fstream file, file1;
    int kopya, count = 0;
      string id, idd, ilacadi, ilacyili;
    cout << "\n\n\t\t\t\t\t\tIlac Silme";
 
  
    file1.open("D:// kati1.txt",
               ios::app | ios::out);
    file.open("D:// kati.txt",
              ios::in);
 
    if (!file)
                cout << "\n\nDosya acilamadi...";
    else {
 
              cout << "\n\n\t\t\t\t\t\tIlac Id : ";
        cin >> id;
        file >> idd >> ilacadi;	
        file >> ilacyili >> kopya;
        while (!file.eof()) {
 
        if (id == idd) {
 
                system("cls");
                cout << "\n\n\t\t\t\t\t\t"
                     << "ILAC SILME";
                cout << "\n\n\t\t\t\t\tIlac silme "
                        "basarili...\n\n";
                count++;
            }
            else
                file1 << " " << idd
                      << " " << ilacadi
                      << " " << ilacyili
                      << " " << kopya
                      << "\n\n";
            file >> idd >> ilacadi;
            file >> ilacyili >> kopya;
        }
        if (count == 0)
           cout << "\n\n\t\t\t\t\tIlac Id'si "
                 << "bulunamadi...";
    }
    system("pause");
 
    file.close();
    file1.close();
    remove("D:// kati.txt");
    rename("D:// kati1.txt",
           "D:// kati.txt");
}
 
void stokk::sivi_sil()
{
    system("cls");
    fstream file, file1;
    int kopya, count = 0;
      string id, idd, ilacadi, ilacyili;
    cout << "\n\n\t\t\t\t\t\tILAC SILME";
 
  
    file1.open("D:// sivi1.txt",
               ios::app | ios::out);
    file.open("D:// sivi.txt",
              ios::in);
 
    if (!file)
                cout << "\n\nDosya acilamadi...";
    else {
 
              cout << "\n\n\t\t\t\t\t\tIlac Id : ";
        cin >> id;
        file >> idd >> ilacadi;	
        file >> ilacyili >> kopya;
        while (!file.eof()) {
 
        if (id == idd) {
 
                system("cls");
                cout << "\n\n\t\t\t\t\t\t"
                     << "Ilac Silme";
                cout << "\n\n\t\t\t\t\tIlac silme "
                        "basarili...\n\n";
                count++;
            }
            else
                file1 << " " << idd
                      << " " << ilacadi
                      << " " << ilacyili
                      << " " << kopya
                      << "\n\n";
            file >> idd >> ilacadi;
            file >> ilacyili >> kopya;
        }
        if (count == 0)
           cout << "\n\n\t\t\t\t\tIlac Id'si "
                 << "bulunamadi...";
    }
    system("pause");
 
    file.close();
    file1.close();
    remove("D:// sivi.txt");
    rename("D:// sivi1.txt",
           "D:// sivi.txt");
}

void stokk::kapsul_sil()
{
    system("cls");
    fstream file, file1;
    int kopya, count = 0;
      string id, idd, ilacadi, ilacyili;
    cout << "\n\n\t\t\t\t\t\tILAC SILME";
 
  
    file1.open("D:// kapsul1.txt",
               ios::app | ios::out);
    file.open("D:// kapsul.txt",
              ios::in);
 
    if (!file)
                cout << "\n\nDosya acilamadi...";
    else {
 
              cout << "\n\n\t\t\t\t\t\tIlac Id : ";
        cin >> id;
        file >> idd >> ilacadi;	
        file >> ilacyili >> kopya;
        while (!file.eof()) {
 
        if (id == idd) {
 
                system("cls");
                cout << "\n\n\t\t\t\t\t\t"
                     << "Ilac Silme";
                cout << "\n\n\t\t\t\t\tIlac silme "
                        "basarili...\n\n";
                count++;
            }
            else
                file1 << " " << idd
                      << " " << ilacadi
                      << " " << ilacyili
                      << " " << kopya
                      << "\n\n";
            file >> idd >> ilacadi;
            file >> ilacyili >> kopya;
        }
        if (count == 0)
           cout << "\n\nIlac Id'si "
                 << "bulunamadi...";
    }
    system("pause");
 
    file.close();
    file1.close();
    remove("D:// kapsul.txt");
    rename("D:// kapsul1.txt",
           "D:// kapsul.txt");
}
void stokk :: kati_kontrol(){

    system("cls");
    fstream file;
    int kopya, count = 0;
    string id,ilacadi, ilacyili, idd;
 
    cout << "\n\n\t\t\t\t\t\tKONTROL EDILEN "
         << "ILAC " ;
 
    file.open("D:// kati.txt", ios::in);
    if (!file)
        cout << "\n\nDosya acilmadi!";
    else {
 
        cout << "\n\n\t\t\t\t\t\tIlac ID : ";
        cin >> idd;
        file >> id >> ilacadi;
        file >> ilacyili >> kopya;
 
        while (!file.eof()) {
 
            if (idd == id) {
 
                system("cls");
                cout << "\n\n\t\t\t\t\t\t"
                     << "KONTROL EDILEN ILAC BILGILERI";
                cout << "\n\n\t\t\t\t\t\tIlac ID : "
                     << id;
                cout << "\n\t\t\t\t\t\tIlac Adi : "
                     << ilacadi;
                cout << "\n\t\t\t\t\t\tIlac Yili : "
                     << ilacyili;
                cout << "\n\t\t\t\t\t\tKopya Sayisi : "
                     << kopya;
                cout << endl
                     << endl;
                count++;
                break;
            }
            file >> id >> ilacadi;
            file >> ilacyili >> kopya;
        }
        system("pause");
        file.close();
        if (count == 0)
            cout << "\n\nIlac ID"
                 << " Bulunmadi...";
    }	
}

void stokk :: sivi_kontrol(){

    system("cls");
    fstream file;
    int kopya, count = 0;
    string id,ilacadi, ilacyili, idd;
 
    cout << "\n\n\t\t\t\t\t\tKONTROL EDILEN "
         << "ILAC";
 
    file.open("D:// sivi.txt", ios::in);
    if (!file)
        cout << "\n\nDosya acilmadi!";
    else {
 
        cout << "\n\n\t\t\t\t\t\tIlac ID : ";
        cin >> idd;
        file >> id >> ilacadi;
        file >> ilacyili >> kopya;
 
        while (!file.eof()) {
 
            if (idd == id) {
 
                system("cls");
                cout << "\n\n\t\t\t\t\t\t"
                     << "KONTROL EDILEN ILAC BILGILERI";
                cout << "\n\n\t\t\t\t\t\tIlac ID : "
                     << id;
                cout << "\n\t\t\t\t\t\tIlac Adi : "
                     << ilacadi;
                cout << "\n\t\t\t\t\t\tIlac Yili : "
                     << ilacyili;
                cout << "\n\t\t\t\t\t\tKopya Sayisi : "
                     << kopya;
                cout << endl
                     << endl;
                count++;
                break;
            }
            file >> id >> ilacadi;
            file >> ilacyili >> kopya;
        }
        system("pause");
        file.close();
        if (count == 0)
            cout << "\n\nIlac ID"
                 << " Bulunmadi...";
    }	
}

void stokk :: kapsul_kontrol(){

    system("cls");
    fstream file;
    int kopya, count = 0;
    string id,ilacadi, ilacyili, idd;
 
    cout << "\n\n\t\t\t\t\t\tKONTROL EDILEN "
         << "ILAC";
 
    file.open("D:// kapsul.txt", ios::in);
    if (!file)
        cout << "\n\nDosya acilmadi!";
    else {
 
        cout << "\n\n\t\t\t\t\t\tIlac ID : ";
        cin >> idd;
        file >> id >> ilacadi;
        file >> ilacyili >> kopya;
 
        while (!file.eof()) {
 
            if (idd == id) {
 
                system("cls");
                cout << "\n\n\t\t\t\t\t\t"
                     << "KONTROL EDILEN ILAC BILGILERI";
                cout << "\n\n\t\t\t\t\t\tIlac ID : "
                     << id;
                cout << "\n\t\t\t\t\t\tIlac Adi : "
                     << ilacadi;
                cout << "\n\t\t\t\t\t\tIlac Yili : "
                     << ilacyili;
                cout << "\n\t\t\t\t\t\tKopya Sayisi : "
                     << kopya;
                cout << endl
                     << endl;
                count++;
                break;
            }
            file >> id >> ilacadi;
            file >> ilacyili >> kopya;
        }
        system("pause");
        file.close();
        if (count == 0)
            cout << "\n\nIlac ID"
                 << " Bulunmadi...";
    }	
}

