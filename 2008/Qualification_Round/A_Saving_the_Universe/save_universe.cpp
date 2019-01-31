#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <map>

using namespace std;

int main()
{
	string str_test_cases, str_distinct_elements, str_elements;
	int test_cases, distinct_elements, elements;
	getline(cin, str_test_cases);
	test_cases = atoi(str_test_cases.c_str());
	cout << test_cases << endl;
	for(int i = 0; i < test_cases; i++)
	{
		int count = 0;
		getline(cin, str_distinct_elements);
		distinct_elements = atoi(str_distinct_elements.c_str());
		string element;
		for(int j = 0; j < distinct_elements; j++)
		{
			getline(cin, element);
		}
		getline(cin, str_elements);
		elements = atoi(str_elements.c_str());
		map<string, int> actual_elements;
		for(int j = 0; j < elements; j++)
		{
			getline(cin, element);
			actual_elements.insert(pair<string, int>(element, j));
			if(actual_elements.size() == distinct_elements)
			{
				count++;
				actual_elements.clear();
				actual_elements.insert(pair<string, int>(element, j));
			}
		}
		cout << "Case #" << i+1 << ": " << count << endl;
		
	}
	return 0;
}
