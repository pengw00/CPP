#include <iostream>
#include <string> 
using namespace std;

class BuckysClass{
	public:
			void setName(string x){
				name = x;
			}
			string getName(){
				return name;
			}
	private:
			string name;

};
int main(){
	BuckysClass bo;
	bo.setName("sir buckey WALLANCE");
	cout << bo.getName() <<endl;
	return 0;
}