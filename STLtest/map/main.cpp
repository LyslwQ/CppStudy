#include "iostream"
#include "map"

int main()
{
 
 std::map<int,const char*> myMap1;
 std::map<int,const char*> myMap2;
 myMap1[1]="hello1a";
 myMap2[1]="hello2a";
 std::pair<int,const char*> tmp(2,"hello1a");
 myMap1.insert(tmp);
 myMap2.insert(std::pair<int,const char*> (2,"hello2b"));
 std::map<int,const char*>::iterator itr1=myMap1.begin();
 for(;itr1!=myMap1.end();itr1++)
 std::cout<<"myMap1["<<itr1->first<<"]="<<itr1->second<<std::endl;
 
 std::map<int,const char*>::iterator itr2=myMap2.begin();
 for(;itr2!=myMap2.end();itr2++)
 std::cout<<"myMap2["<<itr2->first<<"]="<<itr2->second<<std::endl;

 myMap1.swap(myMap2);

 for(itr1=myMap1.begin();itr1!=myMap1.end();itr1++)
 std::cout<<"myMap1["<<itr1->first<<"]="<<itr1->second<<std::endl; 
 for(itr2=myMap2.begin();itr2!=myMap2.end();itr2++)
 std::cout<<"myMap2["<<itr2->first<<"]="<<itr2->second<<std::endl;

 return 0;
}
