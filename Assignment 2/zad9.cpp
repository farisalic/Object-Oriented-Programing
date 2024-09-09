//Napisati f-ju koja prima 2 iteratora, broj n koji predstavlja broj elemenata
//koje kopiramo kao i iterator koji omogucava dodavanje novih elemenata na kraj
//novog kontejnera

#include"zaglavlje.txt"

template<typename T, typename U>
void moj_copyn(T begin, T end, int n, U iter){
for(auto i=1; i<=n; i++){
*iter=*begin;
begin++;
}
}

int main(int argc, char *argv[])
{
  std::vector<int> vec{1,2,3,4,5,6};
  std::vector<int> temp;

  moj_copyn(vec.begin(), vec.end(), 4, std::back_inserter(temp));

  for(auto x:temp){
  std::cout << x << " ";
  }
  return 0;
}
