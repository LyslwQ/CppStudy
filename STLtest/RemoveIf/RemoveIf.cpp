#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct ContainsString:public unary_function<string, bool>
{
	ContainsString(const string& str):m_string(str){};
	bool operator()(const string& stringToMatch) const
	{
		return stringToMatch.find(m_string) != string::npos;
	}

	string m_string;
};

int main(void)
{
	vector<string> vec {"hello world hello", "hey girl", "hello boy", "hey boy", "hello pig"};
	vector<string>::iterator it = vec.begin();
	for(; it != vec.end(); ++it)
		cout << *it << ",";
	cout << endl;

	vec.erase(remove_if(vec.begin(), 
						vec.end(),
						ContainsString("hello")),
						vec.end());

	it = vec.begin();
	for(; it != vec.end(); ++it)
		cout << *it << ",";
	cout << endl;
	return 0;
}

