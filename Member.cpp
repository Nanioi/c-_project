#include"Member.h"

Member::Member() :data{}, count(0)
{
}

bool Member::add(const Information user)	//ȸ�����Խ� �����Ϳ� �������� ���
{
	for (int i = 0; i < count; i++)
	{
		if (data[i].getID() == user.getID())
		{
			cout << "==�̹� ������� ID�Դϴ�.==" << endl << endl;
			return false;
		}
	}

	data[count++] = user;	//�����Ϳ� �����߰�
	return true;
}

