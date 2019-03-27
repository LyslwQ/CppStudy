#include <iostream>

using namespace std;

class String
{
public:
  String(){ cout<<"String():..."<<endl;}
  String(const char* pc){ cout << "String(const char* ):..." << endl;}
  String(const String& str){ cout << "String(const String& str):..." << endl;}
  String& operator = (const String& str){ cout << "operator = ():..." << endl;}

private:
  int in = 1;
};


int main()
{
  //String string01;
  String string02("Hey");
  String string03 = "Hey girl"; 
  string03 = "Hey boy";
  
  return 0;
}
