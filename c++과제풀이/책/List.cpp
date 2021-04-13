#include "List.h"
#include <vector>


template <typename T>
List<T>::List()
{ 
	list = new List[100]();
	for (int i = 0;i < 100;i++)
	{
		List[i] = i+1;
	}

}

template <typename T>
List<T>::~List()
{
	list--;
}

template<typename T>
T List<T>::Showbegin(T & x)
{
	vector <T>::iterator iter;
	vector <T> v;
	iter = v.begin();

	return *iter;
}

template<typename T>
T List<T>::Showend(T & x)
{
	vector <T>::iterator iter;
	vector <T> v;
	iter = v.end();

	return *iter;
}

template<typename T>
int List<T>::Showlistcnt(T & x)
{
	vector <T> v;
	v = x;

	cout << "Å©±â´Â:" << v.size()<<endl;
}
template<typename T>
int List<T>::MaxList(T & x)
{
	vector <T>::iterator iter;
	vector <T> v;
	iter = v.begin();
	int max;
	max = *iter;

	for (iter = v.begin();iter != v.end();iter++)
	{
		if (max < *iter)
			max = *iter;
	}
	return max;
}

template<typename T>
int List<T>::MinList(T & x)
{
	vector <T>::iterator iter;
	vector <T> v;
	iter = v.begin();
	int min;
	min = *iter;

	for (iter = v.begin();iter != v.end();iter++)
	{
		if (min > *iter)
			min = *iter;
	}
	return min;
}
