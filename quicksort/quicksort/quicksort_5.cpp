#include <iostream>
#include <vector>
#include<ctime>
using std::cout;
using std::endl;
using std::cin;
template <typename T>
std::vector<T> quicksort(const std::vector<T>& arr)
{
	// base case, arrays with 0 or 1 element are already "sorted"
	if (arr.size() < 2)
		return arr;
	// recursive case
	const T* pivot = &arr.front() + arr.size() / 2 - 1;  // set the pivot somewhere in the middle
	std::vector<T> less;  // vector to store all the elements less than the pivot
	std::vector<T> greater;  // vector to store all the elements greater than the pivot
	for (const T* item = &arr.front(); item <= &arr.back(); item++) 
	{
		if (item == pivot) continue; // skip pivot element  //continue ,跳过循环体剩余的部分，开始新一轮循环
		if (*item <= *pivot) less.push_back(*item);
		else greater.push_back(*item);
	}
	std::vector<T> sorted_less = quicksort(less);  
	std::vector<T> sorted_greater = quicksort(greater);
	// concatenate less part, pivot and greater part
	sorted_less.push_back(*pivot);
	sorted_less.insert(sorted_less.end(), sorted_greater.begin(), sorted_greater.end());
	return sorted_less;
}
int main() 
{
	int a;
	double secs;
	clock_t start = clock();
	//-----------------------------------------------------
	std::vector<int> arr = { 2,1,5,3,4 };
	std::vector<int> sorted = quicksort(arr);
	for (int num : sorted) 
	{
		cout << num << " ";
	}
	cout << endl;
	
	//------------------------------------------------------
	a = 0;
	while (a < 2000000)
		a++;
	clock_t delay = clock() - start;
	secs =(double) delay / CLOCKS_PER_SEC;
	cout << "delay=: " << secs << endl;
	cin.get(); cin.get();
	return 0;
}
//----------------------------testself--------------------------------------------------------

//
template<class T>
std::vector<T> quicksort(std::vector<T>&arr)
{
	if (arr.size() < 2)
		return arr;
	const T*pivot = &arr.front() + arr.size() / 2 - 1;
	std::vector<T>less;
	std::vector<T>great;
	for (const T*item = &arr.front(); item<= &arr.back(); item++)
	{
		if (*item == *pivot) continue;
		if (*item <= *pivot)
			less.push_back(*item);
		else 
			great.push_back(*item);
	}
	std::vector<T>sorted_less = quicksort(less);
	std::vector<T>sorted_great = quicksort(great);
	sorted_less.push_back(*pivot);
    sorted_less.insert(sorted_less.end(),sorted_great.begin(),sorted_great.end());
	return sorted_less;
}



int main()
{
	std::vector<int> arr = { 2,1,5,3,4 };
	/*cout << *(arr.end() - 1) << endl;
	cout << arr.back() << endl;*/
	std::vector<int> sorted = quicksort(arr);
	for (int num : sorted)
	{
		cout << num << " ";
	}
	cout << endl;
	cin.get(); cin.get();
	return 0;
}