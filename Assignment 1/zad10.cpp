//Napisi program koji ce omoguciti sortianje vektora na nacin da su svi parni
//elementi na pocetku a neparni na kraju vektora

#include<iostream>
#include<algorithm>
#include<vector>

std::vector<int> vec{1,2,3,4,5,6,7,8,9};

int main(int argc, char *argv[])
{
  auto kriterij=[](int a,int b){
  return a%2==0 || b%2!=0;
  };
  std::sort(vec.begin(),vec.end(),kriterij);
for(auto x:vec){
  std::cout << x << std::endl;
}
  return 0;
}
