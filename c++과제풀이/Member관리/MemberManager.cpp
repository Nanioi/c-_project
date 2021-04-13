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
		if (member[i].getName() == name && member[i].getHB() == HB)//����� �̸��� ��������� ��
			return member[i].getID(); //������ ���̵� ��ȯ
	}
	return 0;//���̵� ������ 0��ȯ
}

int MemberManager::findPW(string name, int ID)
{
	for (int i = 0;i < total;i++)
	{
		if (member[i].getName() == name && member[i].getID() == ID)//�̸��� ���̵� ��
			return member[i].getPW();//������ ��й�ȣ ��ȯ
	}
	return 0;//Ʋ���� 0��ȯ
}

bool MemberManager::availableID(int ID)
{
	for (int i = 0;i < total;i++)
	{
		if (member[i].getID() == ID)//������ ���̵� �ִ°�� 
			return false;//false��ȯ

	}
	return true;//������ ���̵� ���� ��� true��ȯ
}

void MemberManager::print()
{
	for (int i = 0;i < total;i++)
	{
		cout << "�̸�" << "\t" << ":" <<member[i].getName() << endl;
		cout << "�������" << "\t" << ":" << member[i].getHB() << endl;
		cout << "�޴�����ȣ" << "\t" << ":" << member[i].getPhoneNum() << endl;
		cout << "ID" << "wt" << ":" << member[i].getID() << endl;
		cout << "PW" << "\t" << ":" << member[i].getPW() << endl;

	}
}
