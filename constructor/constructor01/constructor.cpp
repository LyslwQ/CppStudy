#include <iostream>
#include <list>
#include <string>

using namespace std;

class Class01
{
public:
  Class01(int value, const string& str);

private:
  int _value01;
  const string _str01;
};

Class01::Class01(int value, const string& str):_str01(str)
{
  _value01= value;
}


int main()
{
  Class01 classIns(1,"Hey girl..");

  /*list<int>  list01(); //会被解析成函数申明
  cout<< *list01.begin();//*/
  return 0;
}
