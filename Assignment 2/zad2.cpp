//Implementirati all_of algoritam koji prima 2 iteratora i predicate f-ju koja
//provjerava da li svi elementi u kontejneru zadovoljavaju kriterij i vraca true
//ako zadovoljavaju te vraca false ukoliko barem jedan ne zadovoljava uslov

#include"zaglavlje.txt"

template<typename T, typename pred>

bool moj_all_of(T begin, T end, pred& predicate){
while(begin!=end){
  if(!predicate(*begin)){
    return false;
  }
  begin++;
}
return true;
}

int main(int argc, char *argv[])
{
  std::vector<int> vec1{1,2,4,5,6,7};
  std::vector<int> vec2{2,4,6,8,10,12};

  auto kriterij=[](auto x){return x%2==0;};

  bool x=moj_all_of(vec1.begin(), vec1.end(), kriterij);
  if(x==true){
  std::cout << "Svi elementi vec1 zadovoljili uslov" << std::endl;
  }
  else{
  std::cout << "Elementi vec1 nisu zadovoljili uslov" << std::endl;
  }

  bool y=moj_all_of(vec2.begin(), vec2.end(), kriterij);
  if(y==true){
  std::cout << "Svi elementi vec2 zadovoljili uslov" << std::endl;
  }
  else{
  std::cout << "vec2 nije zadovoljio uslov" << std::endl;
  }

  return 0;
}

