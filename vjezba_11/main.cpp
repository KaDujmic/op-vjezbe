	
#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
    
bool greater_than_500(int i)
{
	return (i > 500);
}

bool less_than_300(int i)
{
	return (i < 300);
}

bool descending(int i, int j) {
	
	return i > j;

};


int main()
{

	ifstream fd("numbers.txt");
	try
	{
		if (!fd.is_open())
		{
			throw string("Error opening file");
		}
	}
	catch (string x)
	{
		cout << x << endl;
	}
    vector<int> vec;
	istream_iterator<int> begstr(fd), endstr;
    ostream_iterator<int> os(cout, "\n");
	copy(begstr, endstr, back_inserter(vec));
	//copy(vec.begin(), vec.end(), os);
    cout << "Nums greater thane 500 = " << count_if(vec.begin(), vec.end(), greater_than_500) << endl;
    cout << "Max = " << *max_element(vec.begin(),vec.end()) << endl;
    cout << "Min = " << *min_element(vec.begin(),vec.end()) << endl;
    vec.erase(remove_if(vec.begin(), vec.end(), less_than_300), vec.end());
    sort(vec.begin(),vec.end(),descending);
    copy(vec.begin(),vec.end(),os);
}
    
    
