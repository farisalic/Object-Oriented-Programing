//Napisati f-ju find_if koja prima 2 iteratora i predicate f-ju koja definise
//uslov po kojim pretrazujemo elemente kontejnera. F-ja vraca iterator na element
//koji je pronadjen a u suprotnom vraca end iterator.

#include"zaglavlje.txt"

template<typename T, typename pred>

T moj_find_if(T begin, T end, pred predicate){
while(begin!=end){
  if(predicate(*begin)){
  return begin;
  }
  begin++;
}
return end;
}

int main()
{
  int temp1;
  std::vector<int> vec;
  std::cout << "Unesi elemente vektora: " << std::endl;
  while(std::cin>>temp1){
  vec.push_back(temp1);
  }

  auto kriterij = [](auto a){return a%2==0;};

  auto x=moj_find_if(vec.begin(), vec.end(), kriterij);

  if(x==vec.end()){
  std::cout << "Vracen je end iterator!" << std::endl;
  }
  else{
  std::cout << *x << std::endl;
  } 

  for(auto y:vec){
  std::cout << y << std::endl;
  }
  return 0;
}
