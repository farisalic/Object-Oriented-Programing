/* Napisati Complex klasu i implementirati:
 * 1. default konstruktor
 * 2. konstruktor koji prima realni i imaginarni broj
 * 3. copy i move konstruktor
 * 4. copy i move operator=
 * 5. operator+ za sabiranje sa kompleksnim brojem
 * 6. operator<< za ispis kompleksnog broja
 * 7. getteri za imaginarni i realni broj*/

#include"zaglavlje.txt"

class Complex{
  private: 
    double realni;
    double imaginarni;

  public:
    //default konstruktor
    Complex(){
    realni=0;
    imaginarni=0;
    }

    //konstruktor koji prima realni i imaginarni broj
    Complex(double r, double i){
    realni=r;
    imaginarni=i;
    }

    //copy konstruktor
    Complex(const Complex& other){
    realni=other.realni;
    imaginarni=other.imaginarni;
    }

    //move operator
    Complex(Complex&& other){
    realni=other.realni;
    imaginarni=other.imaginarni;
    other.realni=0;
    other.imaginarni=0;
    }
    
    //destruktor
    ~Complex(){}

    //getteri
    double getReal(){
    return realni;
    }
    double getImag(){
    return imaginarni;
    }

    //copy operator=
    Complex& operator=(const Complex& other){
    realni=other.realni;
    imaginarni=other.imaginarni;
    return *this;
    }

    //move operator=
    Complex& operator=(Complex&& other){
    realni=other.realni;
    imaginarni=other.imaginarni;
    other.imaginarni=0;
    other.realni=0;
    return *this;
    }

    //friend function za operator<<
    friend std::ostream& operator<<(std::ostream& out, const Complex& comp);

    //Operator+
    Complex& operator+(const Complex& other){
    realni+=other.realni;
    imaginarni+=other.imaginarni;
    return *this;
    }
};

 //operator<< za ispis 
    std::ostream& operator<<(std::ostream& out, const Complex& comp){
    out<< comp.realni << "+" << comp.imaginarni << "j";
    return out;
    };

int main(int argc, char *argv[])
{
  Complex a;
  
  Complex b(2,3);

  Complex c=Complex{5,6};

  Complex d=b;
  
  a=b;
  
  Complex f;
  f=Complex{1,2};

  Complex prvi{1,1};
  Complex drugi{2,2};
  Complex treci=prvi+drugi;
  std::cout << treci << std::endl;
  return 0;
}
