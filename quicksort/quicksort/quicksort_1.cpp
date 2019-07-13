//2019-5-9
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
//template <typename T>
//T sum(const std::vector<T>& arr) 
//{
//	T sum = 0;
//	for (T item : arr) {
//		sum += item;
//	}
//	return sum;
//}
//int main() {
//	std::vector<int> arr_int = { 1, 2, 3, 4 };
//	std::vector<float> arr_float = { 0.1, 0.2, 0.3, 0.4, 0.5 };
//	cout << "Sum ints: " << sum(arr_int) << endl;
//	cout << "Sum floats: " << sum(arr_float) << endl;
//	cin.get(); cin.get();
//}
//----------testself-------------------------------------------------
//   template<class T>
//T sum_quick(std::vector<T>&li,T &a) //递归操作，不应在函数里面再定义变量
//{
//	if (li.size() == 1)    //根本原因：遇到基线条件前，这些函数调用都未完成
//		return a;       
//	li.pop_back();
//	a = a + sum_quick(li,li.back());     //注意：递归运算先从外到里，再从里到外，调试可得：
//	
//}
//int main()
//{
//	std::vector<int>quicker = { 1,2,3,6,7,8 };
//	int nu = quicker.back();//和那个函数相对应
//	int summ = sum_quick(quicker, nu);
//	cout << "summer: " << summ << endl;
//	cin.get(); cin.get();
//	return 0;
//}     