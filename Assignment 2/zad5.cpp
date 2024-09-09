//Napisati f-ju count_if() koja prima 2 iteratora i predicate f-ju. F-ja vraca
//broj elemenata koji zadovoljavaju uslov definisan predicate f-jom.

#include"zaglavlje.txt"

int a=0;
template<typename T, typename pred>
int moj_count_if(T begin, T end, pred Predicate){
while(begin!=end){
if(Predicate(*begin)){
a++;
}
begin++;
}
return a;
}

int main(int argc, char *argv[])
{
  auto kriterij=[](auto x){return x%2==0;};
  std::vector<int> vec{1,2,3,4,5,6,7,8,10,12};
  auto x=moj_count_if(vec.begin(), vec.end(), kriterij);
  std::cout << x << std::endl;
  return 0;
}

