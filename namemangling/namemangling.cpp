#include <iostream>

extern "C" void test1(int in){}
void test1(int in,char ci){}

int main()
{
 test1(1);
 //std::cout<<sizeof(.1)<<std::endl;
 return 0;
}
