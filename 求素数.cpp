#include<iostream>
#include<cmath> 
using namespace std;
int main(){
	int sum=0;
	int flag=1;
	for(int i=101;i<201;i++){
		flag=1;
		for(int j=2;j<=sqrt(i)+1;j++){
			if(i%j==0)
			{
				flag=0;
			   break;
			}
		}
		if(flag==1)sum++;
	}
	cout<<sum<<"¸öËØÊý"; 
	return 0;
}
