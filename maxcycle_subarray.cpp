#include<iostream>
using namespace std;
int main()
{
	/* code */
	int i, num, max2sum, result;
	cout<<"please input count";
	cin>>num;
	int *arr = new int[num];
	cout<<"please input element";
	for(int i = 0; i < num; i++){
		cin>>arr[i];
	}
	int sum = 0;
	int tmp = 0;
	int CurSum=0;
	int MaxSum=0;
	int MinSum = 0;
	for(int i = 0; i < num; i++){
		sum += arr[i];
		if(tmp>0){
			tmp = arr[i];
		}else{
			tmp += arr[i];
		}

		if(tmp<MinSum){
			MinSum = tmp;
		}
		CurSum += arr[i]; 
		if(CurSum>MaxSum){
			MaxSum = CurSum;
		}
		if(CurSum<0){
			CurSum=0;
		}
	}
	max2sum = sum - MinSum;
	if(CurSum>max2sum){
		result = CurSum;
	}else{
		result = max2sum;
	}
	cout<<result<<endl;
	system("pause");
}
