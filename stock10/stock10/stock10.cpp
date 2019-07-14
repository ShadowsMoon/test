#include<iostream>
#include"stock10.h"

Stock::Stock()    //构造函数无返回值，也没有声明类型，不同于其他
{
   	std::cout << "default constructor called\n";
	 company="no name";
	 shares=0;
	 share_val=0.0;
	 total_val=0.0;
}

Stock::Stock(const std::string &co, long n, double pr)
{
	std::cout << "constructor using " << co << " called\n";
	company = co;
	if (n < 0)
	{
		std::cout << "number of shares can't be negative;"
			<< company << "shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}
Stock::~Stock()   //每个类只能有一个析构函数
{
	std::cout<<"bye, " << company << " !\n";
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "number of shares can't be negative " << " transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "number of shares can't be negative " << " transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cout << "you can't sell more than you have" << "transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()const
{
	std::cout << " company : " << company
		<< " shares: " << shares << ' \n'
		<< " shares prices: $" << share_val
		<< " total worth: $ " << total_val << '\n';
}
const Stock& Stock::topval(const Stock&s)const    //const Stock &表明返回的是const对象
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;       //this指针返回对象的地址
	
}