#include"Member.h"

Member::Member() :data{}, count(0)
{
}

bool Member::add(const Information user)	//회원가입시 데이터에 유저정보 등록
{
	for (int i = 0; i < count; i++)
	{
		if (data[i].getID() == user.getID())
		{
			cout << "==이미 사용중인 ID입니다.==" << endl << endl;
			return false;
		}
	}

	data[count++] = user;	//데이터에 유저추가
	return true;
}

