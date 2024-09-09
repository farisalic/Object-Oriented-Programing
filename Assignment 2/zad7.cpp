//Napisati f-ju none_of() koja prima 2 iteratora i predicate f-ju. F-ja vraca
//true ukoliko niti jedan element ne zadovoljava uslov. U suprotnom vraca false
#include"zaglavlje.txt"

template<typename T, typename pred>

bool moj_none_of(T begin, T end, pred Predicate){
while(begin!=end){
  if(Predicate(*begin)){
  return false;
  }
  begin++;
}
return true;
}

int main(int argc, char *argv[])
{
  std::vector<int> vec{1,2,3,4,5,12,13};
  auto kriterij=[](auto x){
  return x>=15;
  };

  auto y=moj_none_of(vec.begin(), vec.end(), kriterij);
  std::cout << y << std::endl;
  return 0;
}


