
															//@SAUTEKNOLOJ�

#include<iostream>
#include<locale.h>  //T�RK�E KARAKTERLER ���N K�T�PHANE

using namespace std;

//K�RE,S�L�ND�R,K�P VE D�KD�RTGENLER PR�ZMASININ HAC�M VE ALANINI BULAN PROGRAM...

class Kure  //k�re ile ilgili fonksiyonlar� i�inde bar�nd�ran bir s�n�f olu�turuyoruz.
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

}kure; //Kure s�n�f�n�n nesnesi kureyi olu�turma

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
}dikdortgenP;  //nesne olu�turuyoruz

class Silindir  //silindir s�n�f� olu�turma
{
private: 
double	PI = 3.14;  //pi sayisini tan�mlama

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

	setlocale(LC_ALL, "Turkish"); //T�RK�E KARAKTERLER KULLANAB�LMEK ���N 
	do {
		
		do {
			
			cout << "Alan ve Hacim Hesaplama Program�na Ho�geldiniz..." << endl;

			cout << "--------------------------------------" << endl;

			cout << "L�tfen Hangi Cisim �zerinde Hesap Yapaca��n�z� Se�iniz (1-K�p,2-K�re,3-Dikd�rtgenPrizma,4-Silindir)"<<"-->";

			cin >> secim;

			switch (secim)
			{
			case 1:
				cout << "K�p�n bir kenar uzunlu�unu giriniz-->";

				cin >> kenarUzunlugu1;

				cout << "Hacim = ";
				
				kup.hacimHesaplama(kenarUzunlugu1);

				cout << endl;

				cout << "Alan = ";
				
				kup.alanHesaplama(kenarUzunlugu1); 

				cout << endl;
				break;
			case 2:
				cout << "K�renin yar��ap�n� giriniz-->";

				cin >> yariCap1;

				cout << "Hacim = ";
				
				kure.hacimHesaplama(yariCap1);
				
				cout << endl;

				cout << "Alan = ";
				
				kure.alanHesaplama(yariCap1);
				
				cout << endl;
				break;
			case 3:
				cout << "S�ras�yla dikd�rtgenler prizmas�n�n k�sa kenar,uzun kenar,y�ksekli�i giriniz-->"<<endl;

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
				cout << "S�ras�yla silindirin y�ksekli�ini ve yari�ap�n� giriniz-->" << endl;

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
				cout << "//..Yanl�� se�im yapt�n�z..//"<<endl;
				
			}
			if (secim != 1 || secim != 2 || secim != 3|| secim!=4)
			{
				cout << "Devam etmek i�in 'y' tu�una kapatmak i�in herhangi bir tu�una bas�n�z-->";

				cin >> sonSecim;

				cout << endl;

				if (sonSecim !='y')
					exit(0);
			}

		} while (sonSecim = 'y');

		cout << "Tekrar Hesap Yapmak ��in 'Y' tu�una Kapatmak ��in Herhangi Bir Tu�una Bas�n�z-->";

		cin >> sonSecim2;

		if (sonSecim2 != 'y')
			exit(0);

	} while (sonSecim2 = 'y');
	

}