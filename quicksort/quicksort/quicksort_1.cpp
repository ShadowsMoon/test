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
//T sum_quick(std::vector<T>&li,T &a) //�ݹ��������Ӧ�ں��������ٶ������
//{
//	if (li.size() == 1)    //����ԭ��������������ǰ����Щ�������ö�δ���
//		return a;       
//	li.pop_back();
//	a = a + sum_quick(li,li.back());     //ע�⣺�ݹ������ȴ��⵽��ٴ��ﵽ�⣬���Կɵã�
//	
//}
//int main()
//{
//	std::vector<int>quicker = { 1,2,3,6,7,8 };
//	int nu = quicker.back();//���Ǹ��������Ӧ
//	int summ = sum_quick(quicker, nu);
//	cout << "summer: " << summ << endl;
//	cin.get(); cin.get();
//	return 0;
//}     