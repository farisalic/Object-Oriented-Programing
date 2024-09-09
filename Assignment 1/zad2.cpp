//Napisi program koji unosi jednu rijec i onda sortira karaktere na osnovu toga
//da li su unijeta velika,mala slova, brojevi...

#include<iostream>
#include<string>
#include<algorithm>

std::string rijec;
std::string velika_s;
std::string mala_s;
std::string brojevi;

int main(int argc, char *argv[])
{
  std::cout << "Unesite riječ: " << std::endl;
  std::cin >> rijec;
  for(auto x:rijec){
  if(isupper(x)){
    velika_s.push_back(x);
  }
  else if(islower(x)){
    mala_s.push_back(x);
  }
  else if(isdigit(x)){
    brojevi.push_back(x);
  }}

  std::cout << "Velika slova: " << std::endl;
  for(auto y:velika_s){
    std::cout << y << std::endl;
  }
  std::cout << "Mala slova: " << std::endl;
  for(auto g:mala_s){
  std::cout << g << std::endl;
  }
  std::cout << "Brojevi: " << std::endl;
  for(auto k:brojevi){
  std::cout << k << std::endl;
  }
  return 0;
}
