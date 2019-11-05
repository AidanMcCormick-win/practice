#include <iostream>
using namespace std;
int main()
{
	int age, count=1, newAge;
	cout<<"Please enter your age: ";
	cin>>age;
	for(int i=1;i<11;i++)
	{
		newAge=age+i;
		cout<<"In "<<count<<" years you will be "<<newAge<<" years old"<<endl;
		count++;
		newAge++;
	}

	return 0;
}


