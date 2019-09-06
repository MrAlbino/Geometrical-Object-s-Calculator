
															//@SAUTEKNOLOJÝ

#include<iostream>
#include<locale.h>  //TÜRKÇE KARAKTERLER ÝÇÝN KÜTÜPHANE

using namespace std;

//KÜRE,SÝLÝNDÝR,KÜP VE DÝKDÖRTGENLER PRÝZMASININ HACÝM VE ALANINI BULAN PROGRAM...

class Kure  //küre ile ilgili fonksiyonlarý içinde barýndýran bir sýnýf oluþturuyoruz.
{
	double PI = 3.14;  //pi sayisini tanimlama
public:

void hacimHesaplama(float yariCap)  //hacim hesaplama fonksiyonu
	{
	  cout<< yariCap*yariCap*yariCap * 4 / 3 * PI;
	}
void alanHesaplama(float yariCap) //alan hesaplama fonksiyonu
{
	cout<< 4 * PI*yariCap*yariCap;
}

}kure; //Kure sýnýfýnýn nesnesi kureyi oluþturma

class Kup
{
public:
	void hacimHesaplama(float kenarUzunlugu)
	{
		cout << kenarUzunlugu * kenarUzunlugu*kenarUzunlugu;
	}
	void alanHesaplama(float kenarUzunlugu)
	{
		cout<<6 * kenarUzunlugu*kenarUzunlugu;
	}
}kup;

class DikdortgenPrizma
{
public:
	void	hacimHesaplama(float kisaKenar, float uzunKenar,float yukseklik) //hacim hesaplama fonksiyonu
	{
		cout<<kisaKenar*yukseklik*uzunKenar;
	}

	void alanHesaplama(float kisaKenar, float uzunKenar, float yukseklik)  //alan hesaplama fonksiyonu
	{
		cout<<2 * (kisaKenar*yukseklik + kisaKenar * uzunKenar + yukseklik * uzunKenar);
	}
}dikdortgenP;  //nesne oluþturuyoruz

class Silindir  //silindir sýnýfý oluþturma
{
private: 
double	PI = 3.14;  //pi sayisini tanýmlama

public:
	void hacimHesaplama(float yukseklik, float yariCap)  //hacim hesaplayan fonksiyon
	{
		cout<<PI*yariCap*yariCap*yukseklik;
	}
	void alanHesaplama(float yukseklik, float yariCap) //alan hesaplayan fonksiyon
	{
		cout << 2 * PI*yariCap*yariCap +( yukseklik * 2 * PI*yariCap);
	}
}silindir;

int main()
{
	int secim;
	float kenarUzunlugu1;
	float yariCap1;
	float yukseklik1;
	float uzunKenar1;
	float kisaKenar1;
	char sonSecim;
	char sonSecim2;

	cout << "\t" << "\t" << "\t" << "\t" << "#############@sauteknoloji###############" << endl;

	setlocale(LC_ALL, "Turkish"); //TÜRKÇE KARAKTERLER KULLANABÝLMEK ÝÇÝN 
	do {
		
		do {
			
			cout << "Alan ve Hacim Hesaplama Programýna Hoþgeldiniz..." << endl;

			cout << "--------------------------------------" << endl;

			cout << "Lütfen Hangi Cisim Üzerinde Hesap Yapacaðýnýzý Seçiniz (1-Küp,2-Küre,3-DikdörtgenPrizma,4-Silindir)"<<"-->";

			cin >> secim;

			switch (secim)
			{
			case 1:
				cout << "Küpün bir kenar uzunluðunu giriniz-->";

				cin >> kenarUzunlugu1;

				cout << "Hacim = ";
				
				kup.hacimHesaplama(kenarUzunlugu1);

				cout << endl;

				cout << "Alan = ";
				
				kup.alanHesaplama(kenarUzunlugu1); 

				cout << endl;
				break;
			case 2:
				cout << "Kürenin yarýçapýný giriniz-->";

				cin >> yariCap1;

				cout << "Hacim = ";
				
				kure.hacimHesaplama(yariCap1);
				
				cout << endl;

				cout << "Alan = ";
				
				kure.alanHesaplama(yariCap1);
				
				cout << endl;
				break;
			case 3:
				cout << "Sýrasýyla dikdörtgenler prizmasýnýn kýsa kenar,uzun kenar,yüksekliði giriniz-->"<<endl;

				cin >> kisaKenar1;

				cin >> uzunKenar1;

				cin >> yukseklik1;

				cout << "Hacim = ";  
				
				dikdortgenP.hacimHesaplama(kisaKenar1, uzunKenar1, yukseklik1);
				
				cout << endl;

				cout << "Alan = ";  
				
				dikdortgenP.alanHesaplama(kisaKenar1, uzunKenar1, yukseklik1);
				
				cout << endl;
				break;
				
			case 4:
				cout << "Sýrasýyla silindirin yüksekliðini ve yariçapýný giriniz-->" << endl;

				cin >> yukseklik1;
				cin >> yariCap1;

				cout << "Hacim = ";
					
				silindir.hacimHesaplama(yukseklik1, yariCap1);

				cout << endl;

				cout << "Alan = ";

				silindir.alanHesaplama(yukseklik1, yariCap1);

				cout << endl;
				break;

			default:
				cout << "//..Yanlýþ seçim yaptýnýz..//"<<endl;
				
			}
			if (secim != 1 || secim != 2 || secim != 3|| secim!=4)
			{
				cout << "Devam etmek için 'y' tuþuna kapatmak için herhangi bir tuþuna basýnýz-->";

				cin >> sonSecim;

				cout << endl;

				if (sonSecim !='y')
					exit(0);
			}

		} while (sonSecim = 'y');

		cout << "Tekrar Hesap Yapmak Ýçin 'Y' tuþuna Kapatmak Ýçin Herhangi Bir Tuþuna Basýnýz-->";

		cin >> sonSecim2;

		if (sonSecim2 != 'y')
			exit(0);

	} while (sonSecim2 = 'y');
	

}