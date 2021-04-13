#include "MemberManager.h"



MemberManager::MemberManager()
{
	member = new Member[100]();
	memset(member, 0, sizeof(member));
}


MemberManager::~MemberManager()
{
	delete member;
}

void MemberManager::addMember(Member * member)
{
		this->member[this->total++] = *member; 	
}

int MemberManager::findID(string name,int HB)
{
	for (int i = 0;i < total;i++)
	{
		if (member[i].getName() == name && member[i].getHB() == HB)//사용자 이름과 생년월일을 비교
			return member[i].getID(); //맞으면 아이디 반환
	}
	return 0;//아이디 없으면 0반환
}

int MemberManager::findPW(string name, int ID)
{
	for (int i = 0;i < total;i++)
	{
		if (member[i].getName() == name && member[i].getID() == ID)//이름과 아이디 비교
			return member[i].getPW();//맞으면 비밀번호 반환
	}
	return 0;//틀리면 0반환
}

bool MemberManager::availableID(int ID)
{
	for (int i = 0;i < total;i++)
	{
		if (member[i].getID() == ID)//기존에 아이디 있는경우 
			return false;//false반환

	}
	return true;//기존에 아이디 없는 경우 true반환
}

void MemberManager::print()
{
	for (int i = 0;i < total;i++)
	{
		cout << "이름" << "\t" << ":" <<member[i].getName() << endl;
		cout << "생년월일" << "\t" << ":" << member[i].getHB() << endl;
		cout << "휴대폰번호" << "\t" << ":" << member[i].getPhoneNum() << endl;
		cout << "ID" << "wt" << ":" << member[i].getID() << endl;
		cout << "PW" << "\t" << ":" << member[i].getPW() << endl;

	}
}
