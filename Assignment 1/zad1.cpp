//Unijeti x brojeva u vektor do EOF ili pogresnog unosa. Ispisati sve clanove,
//sortirati od manjeg prema većem i sabrati sve članove vektora.
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

int a;
int suma=0;
std::vector<int> vec;
int main(int argc, char *argv[])
{
  std::cout << "Unesite vaše brojeve: " << std::endl;
  while(std::cin>>a){
  vec.push_back(a);
  }

  std::cout << "Unijeti brojevi su: " << std::endl;
  for(auto x:vec){
  std::cout << x << std::endl;
  suma+=x;
  }
  std::cout << "Suma članova vektora je: " << suma << std::endl;
  std::sort(vec.begin(),vec.end());
  std::cout << "Sortirani članovi od manjeg prema većem: " << std::endl;
  for(auto y:vec){
  std::cout << y << std::endl;
  }
  
  return 0;
}
