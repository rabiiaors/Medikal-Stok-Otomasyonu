#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "stokk.h"
#include<windows.h>
using namespace std;

void stokkfonksiyonu()
{
    int secim;
    int secimekle;
    int secimlistele;
    int secimguncelle;
    int secimsil;
    int secimkontrol;
    char x;
    stokk b;
 
    while (1) {
 
        b.kontrol_panel();
        cout << "\n\n\t\t\t\tYapmak istediginiz islem : ";
        cin >> secim;
        switch (secim) {
 
        case 1:
        	 cout<<"\n\t\t\t\t\t1.Kati ekle";
			 cout<<"\n\t\t\t\t\t2.Sivi ekle";
			 cout<<"\n\t\t\t\t\t3.Kapsul ekle";
			 cout<<"\n\n\t\t\t\tEkleme yapmak istediginiz ilac listesi:"; 
			 cin>>secimekle;
			 switch(secimekle){
			 
            case 1:
			do {
 
                b.kati_ekle();
                cout << "\n\n\t\t\t\t\tBaska ilac"
                     << " eklemek ister msiniz? "
                        "(e/h) : ";
                cin >> x;
            } while (x == 'e');
            break;
           
            case 2:
            do {
 
                b.sivi_ekle();
                cout << "\n\n\t\t\t\t\tBaska ilac"
                     << " eklemek ister msiniz? "
                        "(e/h) : ";
                cin >> x;
            } while (x == 'e');
            break;
            
            case 3:
            do {
 
                b.kapsul_ekle();
                cout << "\n\n\t\t\t\t\tBaska ilac"
                     << " eklemek ister msiniz? "
                        "(e/h) : ";
                cin >> x;
            } while (x == 'e');
            break;
        }
        break;
        case 2:
            cout<<"\n\t\t\t\t\t1.Kati listele";
			 cout<<"\n\t\t\t\t\t2.Sivi listele";
			 cout<<"\n\t\t\t\t\t3.Kapsul listele";
			 cout<<"\n\n\t\t\t\tListeleme yapmak istediginiz ilac listesi:"; 
			 cin>>secimlistele;
			 switch(secimlistele){
			case 1:
			     b.kati_listele();
		    break;
		    case 2:
                 b.sivi_listele();
            break;
            case 3:
			     b.kapsul_listele();
		    break;
        }
        break;
        case 3:
            cout<<"\n\t\t\t\t\t1.Kati guncelle";
			cout<<"\n\t\t\t\t\t2.Sivi guncelle";
			cout<<"\n\t\t\t\t\t3.Kapsul guncelle";
			cout<<"\n\n\t\t\t\tGuncelleme yapmak istediginiz ilac listesi:"; 
			cin>>secimguncelle;
			 switch(secimguncelle){
			case 1:
			b.kati_guncelle();
			break;
            case 2:
			b.sivi_guncelle();
            break;
            case 3:
			b.kapsul_guncelle();
			break;
}
        break;
        case 4:
        	cout<<"\n\t\t\t\t\t1.Kati sil";
			cout<<"\n\t\t\t\t\t2.Sivi sil";
			cout<<"\n\t\t\t\t\t3.Kapsul sil";
			cout<<"\n\n\t\t\t\tSilme yapmak istediginiz ilac listesi:"; 
			cin>>secimsil;
			 switch(secimsil){
		    case 1:
              b.kati_sil();
            break;
            case 2:
            b.sivi_sil();
            break;
            case 3:
              b.kapsul_sil();
            break;
}
            break;
 
        case 5:
            cout<<"\n\t\t\t\t\t1.Kati listesinden kontrol yap.";
			cout<<"\n\t\t\t\t\t2.Sivi listesinden kontrol yap.";
			cout<<"\n\t\t\t\t\t3.Kapsul listesinden kontrol yap.";
			cout<<"\n\n\t\t\t\tKontrol etmek istediginiz ilac listesi:"; 
			cin>>secimkontrol;
			 switch(secimkontrol){
		    case 1:
              b.kati_kontrol();
            break;
            case 2:
            b.sivi_kontrol();
            break;
            case 3:
              b.kapsul_kontrol();
            break;
}
            break;
       case 6:
            exit(0);
            break;
 
        default:
            cout << "\n\nGECERSIZ SECENEK\n";
        }
    }
}
 

int main()
{
    
    stokkfonksiyonu();

    
 
    return 0;
}
