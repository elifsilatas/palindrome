#include <iostream>

using namespace std;
/*
bir kelimenin okunuşu ile tersten okunuşu aynıysa
bu kelimeye polindrom ismi verilir. Verilen kelimenin 
polindrom olup olmadığını bulan kodu yazınız.
*/
int main()
{
	cout << "Lutfen bir kelime giriniz:" << endl;
	char c[100];
	cin >> c;   
	char *p,*q;
	p = c;
	q = c; 
	while(*q!='\0'){ 
		q++;//dizgi sonu 
	}
	q--;//dizginin son elemanı
	bool palindrome=true;
	while(q>p){
		if(*p!=*q){
			palindrome=false;
			}
			p++;
			q--;
		}
		if(palindrome)
			cout << "Girilen dizgi palindromedur." << endl;
		else                                                          
			cout << "Girilen dizgi palindrome degildir." << endl;
}
