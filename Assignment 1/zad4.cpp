//Program od korisnika trazi unos broja recenica a nakon toga unosimo  broj recenica
//koji smo trazili i racunamo prosjecnu duzinu istih.

#include<iostream>
#include<string>
#include<algorithm>
int broj_rec;
std::string recenica;
double suma=0;

int main(int argc, char *argv[])
{
  std::cout << "Broj recenica koje zelim unijeti: " << std::endl;
  std::cin >> broj_rec;

  std::cin.ignore(200,'\n');

  for(int i=0;i<broj_rec;i++){
  getline(std::cin, recenica);
  suma+=recenica.size();
  }

  double prosjek = suma/broj_rec;
  std::cout << "Broj unijetih recenica je: " << broj_rec << " a prosjecna duzina je: "<< prosjek << std::endl;
  return 0;
}
