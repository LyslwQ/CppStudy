#include "memory"
#include "iostream"
using namespace std;

template<typename T>
class rValueOBJ
{

public:
  rValueOBJ(T value):value_(move(value))
  {}

  T print_()
  {
   return value_;
  }

private:
  T value_;
};

int main()
{

 rValueOBJ<int>  value(8); 
 cout<<value.print_()<<endl;
  
 return 0;
}
