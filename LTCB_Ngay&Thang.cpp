#include <iostream>
using namespace std;
int main() {
	int thang;
	cout << "Nhap vao thang trong nam: ";
	cin >>  thang;
	switch (thang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "Thang nay co 31 ngay\n";
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "Thang nay co 30 ngay\n";
		break;
	case 2:
		cout << "Thang 2 co 28 hoac 29 ngay";
		break;
	default:
		cout << "Khong co thang nay trong nam";
		break;
	}return 0;
}