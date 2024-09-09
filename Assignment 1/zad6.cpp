//Napisati program koji omogućava unos n brojeva, sortira vektor, ispisuje
//aritmeticku sredinu vektora. Treba sortiran vec i ispisati.

#include<iostream>
#include<vector>
#include<algorithm>
std::vector<double> vec;
int broj_el;
double a;
double suma=0;
double average=0;

int main(int argc, char *argv[])
{
  std::cout << "Unesi koliko elemenata ce imati vektor: " << std::endl;
  std::cin >> broj_el;

  std::cin.ignore(200,'\n');

  for(int i=0;i<broj_el;i++){
  std::cin >> a;
  vec.push_back(a);
  }

  std::sort(vec.begin(),vec.end());

  for(auto x:vec){
  suma+=x;
  }

  average=suma/broj_el;

  std::cout << "Aritmeticka sredina je: " <<  average << std::endl;

  for(auto y:vec){
  std::cout << y << " ";
  }
 return 0;
}
