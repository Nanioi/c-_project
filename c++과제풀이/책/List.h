#pragma once
#include <iostream>
using namespace std;

template <typename T>
class List
{
private:
	T *x;
	int cnt = 0;


public:
	List();
	~List();

	T Showbegin(T &x);
	T Showend(T &x);
	int Showlistcnt(T &x);
	int MaxList(T &x);
	int MinList(T &x);
};

