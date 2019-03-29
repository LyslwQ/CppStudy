#include "iostream"
#include "vector"

using namespace std;
int main()
{

  vector<char> vecObj(5);
  vecObj[0]='a';
  for(int i=0;i<vecObj.size();i++)
  vecObj[i]='a'+i;
 
  vector<char>::iterator it;
  for(it=vecObj.begin();it!=vecObj.end();it++)
  cout<< *it<< '\t';
  cout<<endl;

  vecObj.erase(vecObj.begin());
  for(it=vecObj.begin();it!=vecObj.end();it++)
  cout<<"vecObj["<<it-vecObj.begin()<<']'<<'='<< *it<< '\t';
  cout<<endl;

  cout<< "the size is:"<< vecObj.size()<<endl;
  vecObj.resize(2);
  cout<< "the size is:"<<vecObj.size()<<endl;
 
   
  return 0;
}
