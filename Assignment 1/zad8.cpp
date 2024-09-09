//Napisati program koji unosi liniju teksta i onda sva velika slova pretvara u mala
//i obrnuto ali bez upotrebe algorithm  zaglavlja
#include<iostream>
#include<string>

std::string rijec;

int main(int argc, char *argv[])
{
  std::cout << "Unesi recenicu: " << std::endl;
  std::getline(std::cin,rijec);

  for(auto &x:rijec){
  if(x>='A' && x<='Z'){
  x+=32;
  }
  else if (x>='a' && x<='z'){
  x-=32;
  }
  }
  std::cout << "Izmijenjena recenica: " << rijec << std::endl;
  return 0;
}
