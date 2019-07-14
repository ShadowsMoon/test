#pragma once
#ifndef  STOCK10_H_
#define STOCK10_H_
#include<string>
class Stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	//构造函数的使用是为了方便类向其他类型一样进行初始化，但由于数据的私有，只能通过成员函数来初始化
	Stock();    // 默认构造函数,构造函数没有返回值，或者定义声明类型
	Stock(const std::string &co, long n = 0, double pr = 0.0);
	~Stock(); //析构函数
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show()const; //类方法不修改调用对象，应使用该方法
//外面的stock为隐式访问，括号的stock为显示访问，该函数功能为对两个对象中的某个私有数据进行对比，然后返回其中一个对象
	const Stock &topval(const Stock &s) const; 
	//（）中的const表明不会被显示修改， 最后面的const表明不会隐式修改，因为两者都为const，因此返回的也是const对象
};
#endif // ! STOCK10_H_
