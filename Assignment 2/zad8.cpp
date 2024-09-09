//Napisati f-ju adjacent_find() koja prima 2 iteratroa i predicate f-ju. F-ja
//vraca 2 sukcesivna iteratora koja zadovoljavaju uslov predicate f-je.

#include"zaglavlje.txt"

template<typename T, typename pred>
std::pair<T, T> moj_adjacent_find(T begin, T end, pred Predicate){
std::pair<T, T> par;
while(begin!=end){
  if(Predicate(*begin)){
  par.first=begin;
  break;
  }
  begin++;
}
begin++;
while(begin!=end){
  if(Predicate(*begin)){
  par.second=begin;
  break;
  }
  begin++;
}
return par;
}

int main(int argc, char *argv[])
{
  std::vector<int> vec{1,2,3,6,8};

  auto kriterij=[](auto x){
  return x%2==0;
  };

  auto x=moj_adjacent_find(vec.begin(), vec.end(), kriterij);

  std::cout << "Dva elementa koja zadovoljavaju uslov f-je su: " << *x.first << " kao i "<< *x.second;

  return 0;
}
