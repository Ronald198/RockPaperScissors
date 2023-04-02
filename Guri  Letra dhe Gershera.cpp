#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;

void meKompjuterin()
{
	int i = 40, z, k, j = 3, c = 40; //Zgjedhja e lojtarit = z, e kompjuterit = k;
	string p;
	
	cout << "*\t\t\t\t\t*\n*  ZGJIDHNI 1 PER GURIN, 2 PER LETREN   *\n*\t OSE 3 PER GERSHEREN.\t\t*\n*\t\t\t\t\t*\n*\t\t    ";
	cin >> z;

	cout << "*\t\t\t\t\t*\n";
	
	while(z > 3 || z < 1)
	{
		cout << "*\t  JU LUTEM, ZGJIDHNI NJE \t*\n*\t   TE NUMER TE VLEFSHEM\t\t*\n*\t\t\t\t\t*\n*\t\t   ";
		cin >> z;
		cout << "*\t\t\t\t\t*\n";	
	}

	if(z == 1)
	{
		cout << "*\t     ZGJODHET GURIN.\t\t*";
	}
	else if(z == 2)
	{
		cout << "*\t     ZGJODHET LETREN.\t\t*";
	}
	else if(z == 3)
	{
		cout << "*\t    ZGJODHET GERSHEREN.\t\t*";
	}
	
	cout << "\n*\t\t\t\t\t*\n";
	cout << "*\t  KOMPJUTERI PO ZGJEDH";
		
	i = 1;
	
	while (1 <= i)
	{
		j = 3;
		while(1 <= j)
		{
			cout << ".";
			sleep(1);
			j--;
		}
	
		i--;
	}

	cout << "\t*\n";
	cout <<"*\t\t\t\t\t*\n";
	
	srand(time(NULL)); //zgjedhja e numrit nga kompjuteri
	k = rand() % 3 + 1;
	
	if(k == 1)
	{
		cout << "*\tKOMPJUTERI ZGJODHI GURIN.\t*";
	}
	else if(k == 2)
	{
		cout << "*\tKOMPJUTERI ZGJODHI LETREN.\t*";
	}
	else if(k == 3)
	{
		cout << "*\tKOMPJUTERI ZGJODHI GERSHEREN.\t*";
	}
	
	cout << "\n*\t\t\t\t\t*\n";
	cout << "*\t\tREZULTATI:\t\t*\n";
	
	if(k == z)
	{
		cout << "*\t\t BARAZIM\t\t*\n";
	}
	else if(z == 1)
	{
		if(k == 2)
		{
			cout << "*\t        JU HUMBET...\t\t*\n";
		}
		else
		{
			cout << "*\t\tJU FITUAT!\t\t*\n";
		}
	}
	else if(z == 2)
	{
		if(k == 1)
		{
			cout << "*\t\tJU FITUAT!\t\t*\n";
		}
		else
		{
			cout << "*\t        JU HUMBET...\t\t*\n";
		}
	}
	else if(z == 3)
	{
		if(k == 1)
		{	cout << "*\t        JU HUMBET...\t\t*\n";
		}
		else
		{
			cout << "*\t\tJU FITUAT!\t\t*\n";
		}
	}

	cout << "*\t\t\t\t\t*\n";
	cout << "*\tA DONI TE LUANI PERSERI?\t*\n";
	cout << "*\t\t\t\t\t*\n*\t\t    ";
	cin>> p;
	
	if(p == "Po" || p == "PO" || p == "po" || p == "pO")
	{

		cout << "*\t\t\t\t\t*\n";
		meKompjuterin();
	}
	else
	{
		cout << "*\t\t\t\t\t*\n";
		cout << "*\t FALEMINDERIT QE LUAJTET\t*\n";
		cout << "*\t   ME PROGRAMIN TONE!   \t*\n";
		cout << "*\t\t\t\t\t*\n";
		
		while(0 <= c)
		{
			cout << "*";
			c--; 
		}
	}
}

void meShokun()
{
	
 int p1;//pergjigjja e lojtarit numer 1
 int p2;//pergjigja e lojtarit numer 2

 cout<<"--------------------------------\nShtyp 1 per te zgjedhur gurin"<<endl;
 cout<<"Shtyp 2 per te zgjedhur letren"<<endl;
 cout<<"Shtyp 3 per te zgjedhur gersheren"<<endl;
  cout<<"--------------------------------"<<endl;
  cin>>p1;
  if(p1==1)
  {
   cout<<"JU ZGJODHET GURIN LE TE SHOHIM SE CFARE DO TE JAPE KUNDERSHTARI"<<endl;
  }
  else if(p1==2)
  {
      cout<<"JU ZGJODHET LETREN LE TE SHOHIM SE CFARE DO TE JAPE KUNDERSHTARI"<<endl;
  }
  else if (p1==3)
  {
      cout<<"JU ZGJODHET GERSHEREN LE TE SHOHIM SE CFARE DO TE ZGJEDHI KUNDERSHTARI"<<endl;
  }
  else
  {
      cout<<"PERGJIGJA QE JU KENI DHENE NUK ESHTE E SAKTE\nPROVOJENI PERSERI"<<endl;
  }
  
  cout<<"--------------------------------\nShtyp 7 per te zgjedhur gurin"<<endl;
 cout<<"Shtyp 8 per te zgjedhur letren "<<endl;
 cout<<"Shtyp 9 per te zgjedhur gersheren"<<endl;
  cout<<"--------------------------------"<<endl;
 cin>>p2;
 if(p2==7)
  {
   cout<<"JU ZGJODHET GURIN "<<endl;
  }
  else if(p2==8)
  {
      cout<<"JU ZGJODHET LETREN "<<endl;
  }
  else if (p2==9)
  {
      cout<<"JU ZGJODHET GERSHEREN "<<endl;
  }
  else
  {
      cout<<"PERGJIGJA QE JU KENI DHENE NUK ESHTE E SAKTE\nPROVOJENI PERSERI"<<endl;
  }
  if(p1==1&&p2==7)
  {
      cout<<"Ju keni zgjedhur "<<p1<<endl;
      cout<<"Kundershtari ka zgjedhur "<<p2<<endl;
      cout<<" nuk kemi fitues\njeni barazim"<<endl;
  }
  else if(p1==1&&p2==8)
  {
       cout<<"Ju keni zgjedhur "<<p1<<endl;
      cout<<"Kundershtari ka zgjedhur "<<p2<<endl;
      cout<<" Fituesi eshte kundershtari "<<endl;
     
  }
  else if(p1==1&&p2==9)
  {
      cout<<"ju keni zgjedhur "<<p1<<endl;
      cout<<"kundershtari ka zgjedhur "<<p2<<endl;
      cout<<" fituesi jeni ju"<<endl;
  }
  else if(p1==2&&p2==7)
  {
       cout<<"ju keni zgjedhur "<<p1<<endl;
      cout<<"kundershtari ka zgjedhur "<<p2<<endl;
      cout<<" fituesi jeni ju"<<endl;
  }
  else if(p1==2&&p2==8)
  {
       cout<<"ju keni zgjedhur "<<p1<<endl;
      cout<<"kundershtari ka zgjedhur "<<p2<<endl;
      cout<<" nuk kemi fitues\njeni barazim"<<endl;
  }
  else if(p1==2&&p2==9)
  {
       cout<<"ju keni zgjedhur "<<p1<<endl;
      cout<<"kundershtari ka zgjedhur "<<p2<<endl;
      cout<<" kundershtari eshte fitues "<<endl; 
  }
  else if(p1==3&&p2==7)
  {
        cout<<"ju keni zgjedhur "<<p1<<endl;
      cout<<"kundershtari ka zgjedhur "<<p2<<endl;
      cout<<" fituesi eshte kundershtari "<<endl;
  }
   else if(p1==3&&p2==8)
  {
        cout<<"ju keni zgjedhur gershere "<<endl;
      cout<<"kundershtari ka zgjedhur letren "<<endl;
      cout<<" fituesi jeni ju "<<endl;
  }
   else if(p1==3&&p2==9)
  {
        cout<<"ju keni zgjedhur "<<p1<<endl;
      cout<<"kundershtari ka zgjedhur "<<p2<<endl;
      cout<<" ju jeni barazim "<<endl;
  }
  else
  {
      cout<<"ja ke fut kot"<<endl;
  }
}

int main()
{
	int i = 40, p; //Zgjedhja e lojtarit = z, e kompjuterit = k;

	while(0 <= i)
	{
		cout << "*";
		i--; 
	}
	
	cout << "\n*\t GURI, LETRA DHE GERSHERA\t*\n*\t\t\t\t\t*\n";
	cout << "*\t\t\t\t\t*\n* DONI TE LUANI ME KOMPJUTERIN (1) APO\t*\n";
	cout << "*\t   ME NJE SHOK/SHOQE (2)?\t*\n";
	cout << "*\t\t\t\t\t*\n*\t\t    ";
	cin >> p;
	cout << "*\t\t\t\t\t*\n";
	
	while(p > 2 || p < 1)
	{
		cout << "*\t  JU LUTEM, ZGJIDHNI NJE \t*\n*\t   TE NUMER TE VLEFSHEM\t\t*\n*\t\t\t\t\t*\n*\t\t   ";
		cin >> p;
		cout << "*\t\t\t\t\t*\n";	
	}
	
	if(p == 1)
	{
		cout << "*   ZGJODHET TE LUANI ME KOMPJUTERIN.\t*\n";
	}
	else
	{
		cout << "*  ZGJODHET TE LUANI ME SHOKUN/SHOQEN.\t*\n\n";
	}
	
	if(p == 1)
	{
		meKompjuterin();
	}
	else if(p == 2)
	{
		meShokun();
	}

}
