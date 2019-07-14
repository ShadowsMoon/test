#include<iostream>
#include"stock10.h"
using std::cin; using std::cout; using std::endl;
//int main()
//{
//	{
//		using std::cout;
//		
//		Stock stock1("nan", 12, 20.0);  //使用构造函数创建新的对象
//		stock1.show();
//		Stock stock2("boffo", 2, 2.0);//程序声明对象 将自动调用构造函数
//		stock2.show();
//		Stock stock3 = { "nan",11,23 };//  列表初始化方法
//
//		cout << "assigning stock1 to stock2:\n";
//		stock2 = stock1;
//		cout << "listing stock1 and stock2.\n";
//		stock1.show();
//		stock2.show();
//
//		cout << "using stock1 to reassigning new varaible.\n";
//		stock1 = Stock("newest", 10, 50.0);
//		cout << "now stock1: \n";
//		stock1.show();
//		cout << "done.\n";
//
//	}
//	cin.get(); cin.get();
//	return 0;
//
//}

//----------------对象数组-----------------------------------
const int STK = 4;
int main()
{
	Stock top_list[STK] = {
		{"nan",10,12.5},
	    {"jogn",25,12.6},
	    {"mike",65,2},
	    {"cos",100,36}
	};
	for (int stk = 0; stk < STK; stk++)
	{
		top_list[stk].show();
	};
	cout << "choose the top one: " << endl;
	const Stock *top = &top_list[0];
	for (int stk = 1; stk < STK; stk++)
	{
		top =&top->topval(top_list[stk]); //注：不能用*top赋值，因为const 无法修改，但可以修改他的地址
		//top = &top_list[stk].topval(*top);

	}
	top->show();  //此时top为const类型//->:指针间接运算符，直接用指针引用成员函数。''/x
	cin.get(); cin.get();
	return 0;

}