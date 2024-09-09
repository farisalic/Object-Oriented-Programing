//Napisati f-ju distance koja racuna distancu izmedju neka 2 iteratora

#include"zaglavlje.txt"

int d=0;
template<typename T>
int distanca(const T& begin, const T& end){
for(T it=begin; it!=end; it++){
d++;
}
return d;
}

int main(int argc, char *argv[])
{
  std::vector<int> vec{1,2,3,4,5,6};
  int x=distanca(vec.begin(), vec.end());
  std::cout << "Distanca je: " << x << std::endl;
  return 0;
}


