#ifndef _Box_H_
#define _Box_H_
//声明一个Box类
using namespace std;
class Box
{
public:
	//声明方法
	bool set_l(int l);
	bool set_w(int w);
	bool set_h(int h);

	int get_l();
	int get_w();
	int get_h();

	int get_s();
	int get_v();
	Box();
	Box(int x,int y,int z);

private:
	int _l;
	int _w;
	int _h;
	int _s;
	int _v;
};
#endif;