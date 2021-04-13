#pragma once
#include "Member.h"
class MemberManager
{
	Member *member;
	int total = 0;
public:
	MemberManager();
	~MemberManager();

	void addMember(Member *member);
	int findID(string name,int HB);
	int findPW(string name, int ID);
	bool availableID(int ID);
	void print();
};
