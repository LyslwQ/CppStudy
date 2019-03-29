#include "iostream"

class Test
{
public: 
explicit Test(int input)
 {
  std::cout<<"Test():"<<input<<std::endl;
 }

};


int main()
{
 Test test=1;
 return 0;
}
