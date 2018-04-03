#include<iostream>
using namespace std;
int main()
{
	int t;
	while (cin >> t){
		if (t>49 && t<100)
			cout << (char)(65 + (100 - t) / 10);
		else if (t == 100)
			cout << "A";
		else if (t >= 0 && t <= 49)
			cout << "E";
		else
			cout << "Score is error!";
		cout << endl;
	}
	return 0;
}