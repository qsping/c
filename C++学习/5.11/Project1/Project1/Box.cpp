#include"Box.h"
#include<iostream>
using namespace std;

bool Box::set_l(int l ) {
	if (l <= 0 || l > 100)
	{
		cout << "length error" << endl;
		return false;
	}
	_l = l;
	return true;
}
bool Box::set_w(int w) {
	if (w <= 0 || w > 100)
	{
		cout << "weigth error" << endl;
		return false;
	}
	_w = w;
	return true;
}
bool Box::set_h(int h) {
	if (h <= 0 || h > 100)
	{
		cout << "height erro" << endl;
		return false;
	}
	_h = h;
	return true;
}
int Box::get_l() {
	return _l;
}
int Box::get_w() {
	return _w;
}
int Box::get_h() {
	return _h;
}
int Box::get_s() {
	_s = _l * _w;
	return _s;
}
int Box::get_v() {
	_v = get_s() * _h;
	return _v;
}
Box::Box(int x, int y, int z) :_l(x), _w(y), _h(z)
{
	cout << "ok" << endl;
}
