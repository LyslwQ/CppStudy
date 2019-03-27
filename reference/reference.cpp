#include <iostream>
#include <string>
using std::string;

void test1_my(string& str1)
{
 str1="hello boy...";
}

void test1(const string& str1)
{
 
 test1_my(const_cast<string&>(str1));
}



void Swap( char* &str1, char* &str2)
{
 char* tmp=str1;
 str1=str2;
 str2=tmp;
}


void test3(int& dV)
{
 dV=3;
}
void test2(const int& dV)
{
  test3(const_cast<int&>(dV)); 
}
int main()
{

 double dV=3.14;
 test2(dV);
 std::cout<<"dV="<<dV<<std::endl;
/* int arr[]={1,2,3};
 int (&refArr)[3]=arr;//*/
/* int b=4;
 int &a=b;
 //int& &c=a;//*/
 


/* string str1="str1...";
 test1(str1);//*/


/* char*  pstr1="hello girl...";
 char*  pstr2="hello boy...";
 Swap(pstr1,pstr2);
 std::cout<<"pstr1="<<pstr1<<std::endl;
 std::cout<<"pstr2="<<pstr2<<std::endl;//*/
 
 return 0;
}
