#include <iostream>
#include <string>
using namespace std;
int main()
//step 1: input three country name string
{
	void stringcmp(char string[][]);
	char str[4][20];
    for(int i = 1; i < 4;i++)
		cin>>str[i];
	stringcmp(str);
}

//step 2: string compare function
void stringcmp(char string[][])
{
	char min[20];
	strcpy(min,string[1]);//set min array as constant char
	for(int i = 1; i<3;i++)
	{
		if(strcmp(string[i+1],min) < 0)
			strcpy(min,string[i+1]);
	}
	cout<<min<<endl;
	
}
