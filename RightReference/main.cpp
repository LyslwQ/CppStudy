#include "iostream"

int g_value=666;
void testFun(int&& value)
{

int localValue(std::move(value));
std::cout<<localValue<<std::endl;

}

int main()
{

 testFun(std::move(g_value));
 return 0;
}
