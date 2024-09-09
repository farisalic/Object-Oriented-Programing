//Napisati strukturu koja oponaša niz. Definisati pravilo "sestorke" kao i operatore
//cout, [] i >

#include<iostream>
#include<string>
#include<iterator>
#include<algorithm>
#include<initializer_list>


class MojNiz{
   public:
     MojNiz()=default;
      
     //default konstruktor
     MojNiz(const size_t& n):n_{n}, p_{new int[n_]}{};

     //default konstruktor sa std::initializer_list
     MojNiz(const std::initializer_list<int>& a):n_{a.size()}, p_{new int[n_]}{
      std::copy(a.begin(), a.end(),p_);
     };
      
     //copy konstruktor
     MojNiz(const MojNiz& other): n_{other.n_}, p_{other.p_}{
       std::copy(other.p_, other.p_ + n_, p_);
     };
    
     //move konstruktor
     MojNiz(MojNiz&& other): n_{other.n_}, p_{other.p_}{
     other.p_=nullptr;
     other.n_=n_;
     };

     //copy operator=
     MojNiz& operator=(const MojNiz& other){
     if(this!=&other){
      delete [] p_;
      n_=other.n_;
      p_=new int[n_];
      std::copy(other.p_, other.p_ + n_, p_);
     }
     return *this;
     };

     //move operator=
     MojNiz& operator=(MojNiz&& other){
     delete [] p_;
     n_=other.n_;
     p_=other.p_;
     other.p_=nullptr;
     other.n_=0;
     return *this;
     };

     //Destruktor
     ~MojNiz(){
     delete [] p_;
     n_=0;
     };

     //metod .size()
     size_t size() const{
     return n_;
     };
     
     //metod at()
     int& at(size_t i){
     return p_[i];
     };
      
     //operator[]
     int& operator[](size_t i){
     return p_[i];
     };

     const int& operator[](size_t i) const {
     return p_[i];
     };

     //metod >
     bool operator>(const MojNiz& other){
     return n_>other.n_;
     };

   private:
     size_t n_{0};
     int *p_{nullptr};
 };

std::ostream& operator<<(std::ostream& out,const MojNiz& temp){
for(auto i=0; i<temp.size(); i++){
out<< temp[i] << " ";
}
return out;
};


int main(int argc, char *argv[])
{
  MojNiz a(10);
  a=MojNiz{1,2,3};
  
  MojNiz b=MojNiz{4,5,6};
  MojNiz c{1,5,67,8};
  MojNiz d{c};

  auto x= b.at(2);
  operator<<(std::cout, c);
  std::cout << x << std::endl;
  bool vece = c > b;
  std::cout << vece << std::endl;

  return 0;
}
