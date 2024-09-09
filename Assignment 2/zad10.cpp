//Napisati f-ju copy_backward() koja prima 2 iteratora i destinacijski iterator
//koji omogucava kopiranje elemenata na novi destinacijski vektor. Elementi se 
//kopiraju s kraja na pocetak

#include"zaglavlje.txt"

template<typename T, typename U>

void moj_copy(T begin, T end, U iter){
while(end!=begin){
--end;
*iter=*end;
}
}

int main(int argc, char *argv[])
{
  std::vector<int> vec{1,2,3,4,5,6,7,8,9,10};
  std::vector<int> temp;

  moj_copy(vec.begin(), vec.end(), std::back_inserter(temp));

  for(auto x:temp){
  std::cout << x << " ";
  }

  return 0;
}
