//Napisati program koji prima vektor stringova a zatim ih salje u f-ju koja
//provjerava da li se na kraju rečenice nalazi znak interpunkcije i ako ga nema
//dodaje ga na kraj svakog stringa
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


std::vector<std::string> vec;

void inter(std::vector<std::string> &temp){
  for(auto &x:temp){
  int s=x.size();
  if(!ispunct(x[s-1])){
      x.push_back('.');
      };
  }
  
}

int main(int argc, char *argv[])
{
  std::string temp;
  while(std::getline(std::cin, temp)){
  vec.push_back(temp);
  }
  inter(vec);
  for(auto y: vec){
  std::cout << y << std::endl;
  }
  return 0;
}
