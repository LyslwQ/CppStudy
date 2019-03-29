#include"iostream"
#include"string"
#include"stdio.h"
using namespace std;
string test()
{
 string str ="here...";
 cout<<static_cast<const void*>(str.data())<<endl;
 return str;
}
int main()
{


string str1=test();
str1="change...";

cout<<static_cast<const void*>(str1.data())<<endl;

return 0;
}
