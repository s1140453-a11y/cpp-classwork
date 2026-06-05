#include <iostream>
using namespace std;


int main()
{
	int age;
	cout << "請輸入年齡/n";
	cin >> age;
	
	if (age >=18) {
		cout << "可以喝啤酒/n";
	}else if (age < 18 && age > 9) {
		cout << "你是青少年/n";
	}else {
		cout << "寫出99乘法表/n";
		for (int i=1; i<=9; i++){
			for (int j=1; j<=9; j++) {
				cout << i << "*" << j << "=" << i*j  << "1"; 
			}
			cout  << "/n"
		}
	}
	
	return 0;
}
