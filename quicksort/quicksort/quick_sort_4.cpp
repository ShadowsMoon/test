#include <iostream>
#include <vector>
#include <stdexcept>
using std::cout;
using std::endl;
using std::cin;
//template <typename T>
//T max(std::vector<T> arr)
//{
//	if (arr.empty()) 
//		throw  std::invalid_argument("Cannot select max value from empty sequence");   // throw:�׳��쳣
//	if (arr.size() == 1) 
//		return arr.at(0);
//	T back = arr.back();
//	arr.pop_back();
//	T sub_max = max(arr);
//	return back > sub_max ? back : sub_max;   //���������������һ��Ϊ�棬��ִ�еڶ�����䣻���򣬵�����
//}
//int main() 
//{
//	std::vector<int> array = { 1, 5, 10, 25, 16, 1 };
//	cout << max(array) << endl;
//	std::vector<int> negative_array = { -1, -5, -10, -25, -16 };
//	cout << max(negative_array) << endl;
//	cout << max(array) << endl;
//	cin.get(); cin.get();
//	return 0;
//} 

//--------------testself---------------------------------------------------------------
//template <class T>
//T max_test(std::vector<T>arr)
//{
//	if (arr.size() == 1)
//		return arr.back();
//	T back = arr.back();
//	arr.pop_back();
//	return back > max_test(arr)? back: max_test(arr);
//}
//
//int main() 
//{
//	std::vector<int> array = { 1, 5, 10, 25, 16, 1 };
//	cout << max_test(array) << endl;
//	std::vector<int> negative_array = { -1, -5, -10, -25, -16 };
//	cout << max_test(negative_array) << endl;
//	cout << max_test(array) << endl;
//	cin.get(); cin.get();
//	return 0;
//} 
