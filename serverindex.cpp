#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
	string titolo, titolo2;
	string testo, foto;
	cout<<"Costruisci la pagina di default del tuo SERVER"<<endl;
	cout<<"Inserisci il titolo della pagina di intestazione"<<endl;
	getline(cin ,titolo);
	cout<<"Inserisci le specifiche del Server"<<endl;
	getline(cin ,titolo2);
	cout<<"Inserire il testo di presentazione"<<endl;
	getline(cin, testo);
	cout<<"Inserisci il path dell'immagine rispetto alla posizione della pagina  ( dim 300x400)"<<endl;
	getline(cin, foto);
	
	ofstream html; 
  html.open("index.html", ofstream::out);
  
   if (html.is_open())
   {
    html<<"<!doctype html>"<<endl;
    html<<"<head>"<<endl;
    html<<"<html lang=\"it\">"<<endl;
    html<<"<link href=\"./opt/serverindex/serverindex.conf.css\" rel=\"stylesheet\" type=\"text/css\">"<<endl;
    html<<"<title>"<<titolo<<"</title>"<<endl;
    html<<"<link href=\"serverindex.conf.css\" rel=\"stylesheet\" type=\"text/css\">"<<endl;
    html<<"</head>"<<endl;
    html<<"<body>"<<endl;
    html<<"<h1>"<<titolo<<"</h1>"<<endl;
    html<<"<img src=\""<<foto<<"\" alt=\"UNDER COSTRUCTION\" height=\"300\" width=\"400\">"<<endl;
    html<<"<h3>"<<titolo2<<"</h3>"<<endl;
    html<<"<p>"<<testo<<"</p>"<<endl;
    html<<"</body>"<<endl;
    html<<"</html>"<<endl;
    
  }else{
	  cout<<"ERRORE! File non aperto.";
  }
  html.close();
  return 0;
}
