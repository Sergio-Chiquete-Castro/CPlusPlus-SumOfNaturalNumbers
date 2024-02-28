 #include <iostream>
using namespace std;


int main()
{
   
	int n, sum = 0;
	cout << "Enter a num: ";
	cin >> n;



	for (int i = 1; i <= n; i++) {
		sum = sum + i;
	}

	cout << "sum of first " << n << " natural number is " << sum << endl;

	return 0;
}
 

// if n were 20

//		i = 1:  sum = 0 + 1 = 1
//		i = 2 : sum = 1 + 2 = 3
//		i = 3 : sum = 3 + 3 = 6
//		i = 4 : sum = 6 + 4 = 10
//		i = 5 : sum = 10 + 5 = 15
//		i = 6 : sum = 15 + 6 = 21
//		i = 7 : sum = 21 + 7 = 28
//		i = 8 : sum = 28 + 8 = 36
//		i = 9 : sum = 36 + 9 = 45
//		i = 10 : sum = 45 + 10 = 55
//		i = 11 : sum = 55 + 11 = 66
//		i = 12 : sum = 66 + 12 = 78
//		i = 13 : sum = 78 + 13 = 91
//		i = 14 : sum = 91 + 14 = 105
//		i = 15 : sum = 105 + 15 = 120
//		i = 16 : sum = 120 + 16 = 136
//		i = 17 : sum = 136 + 17 = 153
//		i = 18 : sum = 153 + 18 = 171
//		i = 19 : sum = 171 + 19 = 190
//		i = 20 : sum = 190 + 20 = 210
