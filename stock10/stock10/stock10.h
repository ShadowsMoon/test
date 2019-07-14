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
	//���캯����ʹ����Ϊ�˷���������������һ�����г�ʼ�������������ݵ�˽�У�ֻ��ͨ����Ա��������ʼ��
	Stock();    // Ĭ�Ϲ��캯��,���캯��û�з���ֵ�����߶�����������
	Stock(const std::string &co, long n = 0, double pr = 0.0);
	~Stock(); //��������
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show()const; //�෽�����޸ĵ��ö���Ӧʹ�ø÷���
//�����stockΪ��ʽ���ʣ����ŵ�stockΪ��ʾ���ʣ��ú�������Ϊ�����������е�ĳ��˽�����ݽ��жԱȣ�Ȼ�󷵻�����һ������
	const Stock &topval(const Stock &s) const; 
	//�����е�const�������ᱻ��ʾ�޸ģ� ������const����������ʽ�޸ģ���Ϊ���߶�Ϊconst����˷��ص�Ҳ��const����
};
#endif // ! STOCK10_H_
