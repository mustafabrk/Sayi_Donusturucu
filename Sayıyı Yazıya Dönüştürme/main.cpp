#include <iostream>


using namespace std;

int main() {
    int sayi,bir,on,yuz,bin;
    
    string birler[]={"","bir","iki","uc","dort","bes","alti","yedi","sekiz","dokuz"};
    string onlar[]={"","on","yirmi","otuz","kirk","elli","altmýs","yetmis","seksen","doksan"};
    string yuzler[]={"","yuz","iki yuz","uc yuz","dort yuz","bes yuz","alti yuz","yedi yuz","sekiz yuz","dokuz yuz"};
    string binler[]={"","bin","iki bin","uc bin","dort bin","bes bin","alti bin","yedi bin","sekiz bin","dokuz bin"};
    
       cout << "Yaziya donusturmek istediginiz sayiyi giriniz : ";
       cin >> sayi;
    
    bir = (sayi%100)%10;
    on = (sayi%100)/10;
    yuz = (sayi/100)%10;
    bin = sayi/1000;
    
    if(sayi>0 && sayi<10000) {   	
      cout << sayi << " sayisinin yaziya donusturulmus hali : " << binler[bin] << " " << yuzler[yuz] << " " << onlar[on] << " " << birler[bir] << endl;
    }
    
    else {
       cout << "Lutfen 0'dan 10.000'e kadar olan sayilari giriniz." << endl << "Islem sona eriyor..." << endl;
	}
    
 
	system("pause");
	return 0;
	
	
return 0;
}
