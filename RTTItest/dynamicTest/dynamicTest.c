#include <iostream>

using namespace std;

class Grand
{
public:
  virtual void speak()
  {
    cout<<"Grand:speak():Hey girl..."<<endl;
  }
};

class Super:public Grand
{

public:
  virtual void speak()
  {
    cout<<"Super:speak():Hey girl..."<<endl;
  }
};


class Child:public Super
{

public:
  void speak()
  {
    cout<<"Child:speak():Hey girl..."<<endl;
  }

};


class OtherSuper
{
public:
  virtual void speak()
  {
    cout<<"OtherSuper:speak():Hey girl..."<<endl;
  }

};
class OtherChild:public OtherSuper
{

public:
  void speak()
  {
    cout<<"OtherChild:speak():Hey girl..."<<endl;
  }
};



void test(Grand* pG)
{
  if(pG == nullptr)
     return;

  Super* pS = dynamic_cast<Super*>(pG);
  if(pS != nullptr)
     pS->speak();
}
int main()
{
  Grand*  super01 = new Grand;
  Grand*  super02 = new Super;
  Grand*  super03 = new Child;
 
  test(super01); 

  //Super*  super01 = new Child;
  //Super*  super02 = (Super*)new OtherChild;
   
    //Super*  super01 = new Child;
    //Super*  super02 = (Super*)new OtherChild;
  //Super*  super01 = dynamic_cast<Super*>(new Child);
  //Super*  super02 = dynamic_cast<Super*>(new OtherChild);   
 
  
  /*if(super01 != nullptr)
     super01->speak();
  if(super02 != nullptr)
     super02->speak();
  if(super03 != nullptr)
     super03->speak();//*/
  return 0;
}
