//Napisi program koji trazi unos sekvence brojeva. Upis traje sve do EOF signala.
//Nakon toga program ispisuje sve brojeve i sumu neparnih

#include<iostream>
#include<vector>

std::vector<int> vec;
double a;
double suma=0;
int main(int argc, char *argv[])
{
  std::cout << "Unesi elemente vectora: " << std::endl;
  while(std::cin>>a){
  vec.push_back(a);
  }
  
  std::cout << "Uneseni elementi vectora su: " << std::endl;
  for(auto x:vec){
  std::cout << x << " "<< std::endl;
  }

  for(auto y:vec){
  if(y%2!=0){
  suma+=y;
  }
  }
  std::cout << "Suma svih neparnih brojeva je: "<< suma << std::endl;
  return 0;
}
