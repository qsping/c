//月用电量在 150千瓦时及以下部分按每千瓦时 0.4463 元执行，
//月用电量在 151∼400 千瓦时的部分按每千瓦时 0.4663元执行，
//月用电量在 401 千瓦时及以上部分按每千瓦时 0.5663 元执行; 
//小玉想自己验证一下，电费通知单上应交电费的数目到底是否正确呢。
//请编写一个程序，已知用电总计，根据电价规定，计算出应交的电费应该是多少。
#include<iostream>
#include <iomanip>
//
//using namespace std;
//class Ele {
//public:
//	double* set_price(double*price);
//	double get_price();
//	bool set_power(int power);
//	int* powerdiv();
//	double pay();
//	Ele() {
//		double* set_price(_price);
//		bool set_power(int power);
//		int* powerdiv();
//	}
//private:
//	int _power;
//	double _price[3];
//	double _pay;
//};
//bool Ele::set_power(int power) {
//	_power = power;
//	return true;
//}
//double* Ele::set_price(double*price) {
//	price[0] = 0.4463;
//	price[1] = 0.4663;
//	price[2] = 0.5663;
//	return price;
//}
//double Ele::pay() {
//	int*arr1=powerdiv();
//	if (_power <= 150)
//	{
//		_pay = arr1[0]*_price[0];
//	}
//	else if (_power < 400 && _power>151)
//	{
//		_pay= arr1[0] * _price[0]+ arr1[1] * _price[1];
//	}
//	else
//	{
//		_pay = arr1[0] * _price[0] + arr1[1] * _price[1]+ arr1[2] * _price[2];
//	}
//	return _pay;
//}
//int* Ele::powerdiv() {
//	int arr[3] = {0};
//	if (_power <= 150)
//	{
//		arr[0]=_power;
//	}
//	else if (_power < 400 && _power>151)
//	{
//		arr[0]=150;
//		arr[1] = _power - 150;
//	}
//	else
//	{
//		arr[0] =150;
//		arr[1] =250;
//		arr[2] = _power - 400;
//	}
//	return arr;
//}
//int main(){
//	int power=0;
//	int pay=0;
//	scanf("%d", &power);
//	Ele Yu;
//	Yu.set_power(power);
//	cout << Yu.pay() << endl;
//	return 0;
//}
//不应该直接返回局部变量的地址 野指针
#include<iostream>  

using namespace std;

class Ele {
public:
    bool set_power(int power);
    double pay();

    Ele() {
        // 直接在构造函数中设置价格  
        _price[0] = 0.4463;
        _price[1] = 0.4663;
        _price[2] = 0.5663;
    }

private:
    int _power;
    double _price[3];
    double _pay;

    // 辅助函数，不需要对外暴露  
    void powerdiv(int arr[3]) {
        if (_power <= 150) {
            arr[0] = _power;
            arr[1] = 0;
            arr[2] = 0;
        }
        else if (_power < 400) {
            arr[0] = 150;
            arr[1] = _power - 150;
            arr[2] = 0;
        }
        else {
            arr[0] = 150;
            arr[1] = 250;
            arr[2] = _power - 400;
        }
    }
};

bool Ele::set_power(int power) {
    _power = power;
    return true;
}

double Ele::pay() {
    int arr[3];
    powerdiv(arr);

    _pay = 0;
    if (arr[0] > 0) _pay += arr[0] * _price[0];
    if (arr[1] > 0) _pay += arr[1] * _price[1];
    if (arr[2] > 0) _pay += arr[2] * _price[2];

    return _pay;
}

    int main() {
        int power;
        cin >> power;
        Ele Yu;
        Yu.set_power(power);
        double fee = Yu.pay();
        // 使用 setprecision 和 fixed 来保留两位小数  
        cout << fixed << setprecision(1) << fee << endl;
        return 0;
}
