//Napisati f-ju any_of() koja prima 2 iteratora i predicate f-ju. F-ja vraca 
//iterator na prvi element koji zadovoljava uslov a u suprotnom vraca end iterator.

#include"zaglavlje.txt"

template<typename T, typename pred>

T moj_any_of(T begin, T end, pred Predicate){
while(begin!=end){
  if(Predicate(*begin)){
  return begin;
  }
  begin++;
}
return end;
}

int main(int argc, char *argv[])
{
  std::vector<int> vec{1,2,3,4,5,6};
  auto kriterij=[](auto a){return a%2==0;};
  
  auto x=moj_any_of(vec.begin(), vec.end(), kriterij);

  if(x!=vec.end()){
  std::cout << "Prvi element koji je zadovoljio uslov je: " << *x << std::endl;
  }
  else{
  std::cout << "Niti jedan uslov ne zadovoljava kriterij" << std::endl;
  }
  return 0;
}
