//Unesi vektor stringova, sortiraj, ispisis uokvireno
#include<iostream>
#include<vector>
#include<algorithm>

std::vector<std::string> vec;
std::string temp;
int a=0;

int main(int argc, char *argv[])
{
  while(std::cin>>temp){
  vec.push_back(temp);
  }

  std::sort(vec.begin(),vec.end());

  for(auto x:vec){
    if(a<x.size())
    a=x.size();
  }
  
  std::string linije(a,'#');
  std::string prazno_mjesto(a,' ');
  std::string prva_zadnja="##" + linije + "##";
  std::string druga_predzadnja="# "+prazno_mjesto+" #";

  std::cout << prva_zadnja << std::endl;
  std::cout << druga_predzadnja << std::endl;
  for(auto y:vec){
    std::string temp1(a-y.size(), ' ');
  std::cout << "# " << y << temp1 << " #" << std::endl;
  }
  std::cout << druga_predzadnja << std::endl;
  std::cout << prva_zadnja << std::endl;
  return 0;
}
