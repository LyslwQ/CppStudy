#include "string"
#include "iostream"

using namespace std;

void Exchange(string&& str)
{
 string str2(str);
 cout<<"output in Exchange():"<<str<<endl;
}

void test(string&& str)
{
 cout<<"test(string&& str):..."<<endl;
}

void test(string& str)
{
 cout<<"test(string str):..."<<endl;
}

int main()
{

/* string str1("Im string1...");
 string str2("Im string2...");
 Exchange(str1+str2);
 cout<<"output in main():"<<str1<<endl;//*/
 string str1("hello world");
 test(move(str1));
 return 0;
}
