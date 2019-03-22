#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x,y,ans,a;
	cout<<"男生年齡";
	cin>>x;
	cout<<"女生年齡";
	cin>>y;
	if (x<18)
	cout<<"不能結婚";
	if (x>=18)
	{
		if(y>=16)
		cout<<"可以結婚";
	else
			cout<<"不能結婚";
	
}
	
		return 0;
	}
	
	
