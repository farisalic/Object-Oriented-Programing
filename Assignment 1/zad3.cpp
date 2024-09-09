//Problem uokvireno ime: Uneseno ime se ispisuje kao uokvireno bez obzira na duzinu.

#include<iostream>
#include<algorithm>
#include<string>

std::string ime;


int main(int argc, char *argv[])
{
  std::cout << "Unesi ime: " << std::endl;
  getline(std::cin, ime);
  std::string prazno_mjesto(ime.size(),' ');
  std::string sredina= "##  "+prazno_mjesto+"  ##";
  std::string has(ime.size(),'#');
  
  std::cout << "####" << has << "####" << std::endl;
  std::cout << sredina << std::endl;
  std::cout << "##  " << ime << "  ##" << std::endl;
  std::cout << sredina << std::endl;
  std::cout << "####" << has << "####" << std::endl;

  return 0;
}
