#include <iostream>
#include <conio.h>
#include <math.h>

 using namespace std;
 
 
 class Osoba
{
    private:

		int id, waga;
		float wzrost;   

	public:

 		Osoba(){       
       		id = 0;
		   	waga = 0;
       		wzrost = 0;
    	}
    	
 		Osoba(int i, int a, float z) {  
 			id = i;
        	waga = a;
       		wzrost = z;
    	}

		void wypisz(){
			cout << "Dane tej osoby: id: " << id << "  waga: " << waga << "  wzrost: " << wzrost <<endl;
		}

		void bmi(){
			float wz = wzrost*wzrost;
			cout << "Wskaznik  bmi tej osoby wynosi:  " <<  waga/wz <<endl;
		}
		
		void figura()
		{
			float wz = wzrost*wzrost;
			if(waga/wz <= 18.5){
				cout << "Osoba posiada niedowage"<< endl << endl;
			} else	{
					if(waga/wz <= 24.9){
					cout << "Osoba posiada nwage prawidlowa"<< endl << endl;
					} 	else{
								if(waga/wz <= 29.9){
								cout << "Osoba posiada nadwage"<< endl << endl;
								} else {
											if(waga/wz > 30){
											cout << "Osoba posiada otylosc"<< endl << endl;
											}
										}
							}
					}
		}

};

int main()

{

 	Osoba p1(1,58,1.72);
 	Osoba p2(2,66,1.90);
	
	p1.wypisz();
	p1.bmi();
	p1.figura();
	
	p2.wypisz();
	p2.bmi();
	p2.figura();
	
}
 

