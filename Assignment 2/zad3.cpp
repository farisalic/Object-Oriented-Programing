//Napisati f-ju copy_if koja prima 2 iteratora (begin i end), vektor u koji cemo
//kopirati elemente kao i predicate f-ju koja definise koji clanovi kontejnera
//se kopiraju

#include"zaglavlje.txt"

template<typename T, typename vektor, typename pred>

void moj_copy_if(T begin, T end, vektor& vec, pred predicate){
while(begin!=end){
  if(predicate(*begin)){
  vec.push_back(*begin);
  }
  begin++;
}
}

int main(int argc, char *argv[])
{
  std::vector<int> vec1{1,2,3,4,5,6,7,8};
  std::vector<int> vec2;

  auto kriterij=[](auto a){return a%2==0;};

  moj_copy_if(vec1.begin(), vec1.end(), vec2, kriterij);

  for(auto x:vec2){
  std::cout << x << " ";
  }
  return 0;
}
