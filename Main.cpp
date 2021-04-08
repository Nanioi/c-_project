#include<iostream>
#include"Price_Time.h"
#include"Information.h"
#include"Member.h"
#include"Seat.h"
#include"Food.h"
using namespace std;

int main()
{
	Price_Time price;
	Seat seat(150);
	Member member;
	Information info;
	Food food;

	int choose = 0;

	while (true)
	{
	AA:cout << "================\n[1] Member\n[2] Nonmember\n[3] Sign Up\n================" << endl;
		
		cout << "��";
		cin >> choose;
		cout << endl;
		switch (choose)
		{
		case 1:	//ȸ��
		{
			while (true)
			{
				cout << "================\n[1] Login\n[2] Find ID\n[3] Find PW\n[0] Exit\n================" << endl;
				cout << "��";
				cin >> choose;
				cout << endl;
				switch (choose)
				{
				case 1:	//ȸ�� �α���
				{
					Information find = member.checkID();
					find.Login();
					while (true)
					{
					BB:cout << "================\n[1] Choose Seat\n[2] Move Seat\n[3] Exit Seat\n[4] Available Seats\n[0] Exit\n================" << endl;
						cout << "��";
						cin >> choose;
						cout << endl;
						switch (choose)
						{
						case 1:	//�¼�����
						{

							seat.chooseSeat();
							while (true)
							{
								cout << "================\n[1] Charge\n[2] Foods\n[0] Exit\n================" << endl;
								cout << "��";
								cin >> choose;
								cout << endl;
								switch (choose)
								{
								case 1:
								{
									while (true)
									{
										cout << "================\n[1] Price\n[2] Pay\n[3] Add Price\n[4] Refund\n[0] Exit\n================" << endl;
										cout << "��";
										cin >> choose;
										cout << endl;
										switch (choose)
										{
										case 1:	//����ǥ
											price.prn();
											break;
										case 2:	//����
											price.pay();
											break;
										case 3:	//�߰�����
											price.Add();
											break;
										case 4:	//ȯ��
											price.refund();
											break;
										case 0:
											goto BB;
											break;
										}
									}
								}
								case 2:
								{
									food.prn();
									break;
								}
								case 0:
									goto BB;
									break;
								}
							}
							break;
						}
						case 2:	//�ڸ��̵�
							seat.moveSeat();
							break;
						case 3:	//�������
							seat.exitSeat();
							break;
						case 4:	//��밡���¼�
							seat.prn();
							break;
						case 0:	//
							goto AA;
							break;
						}
					}
				}
				case 2:	//�̸����� ID ã��
				{
					info = member.checkName();
					info.findID();
					break;
				}
				case 3:	//ID�� �޴��� ��ȣ�� ��й�ȣ ã��
				{
					info = member.checkID();
					info.findPW();
					break;
				}
				case 0:
					goto AA;
					break;
				}
			}
		}

		case 2:	//��ȸ��
		{
			while (true)
			{
			CC:cout << "================\n[1] Choose Seat\n[2] Move Seat\n[3] Exit Seat\n[4] Available Seats\n[0] Exit\n================" << endl;
				cout << "��";
				cin >> choose;
				cout << endl;
				switch (choose)
				{
				case 1:	//�¼�����
				{
					seat.chooseSeat();
					while (true)
					{
						cout << "================\n[1] Charge\n[2] Foods\n[0] Exit\n================" << endl;
						cout << "��";
						cin >> choose;
						cout << endl;
						switch (choose)
						{
						case 1:
						{
							while (true)
							{
								cout << "================\n[1] Price\n[2] Pay\n[3] Add Price\n[4] Refund\n[0] Exit\n================" << endl;
								cout << "��";
								cin >> choose;
								cout << endl;
								switch (choose)
								{
								case 1:	//����ǥ
									price.prn();
									break;
								case 2:	//����
									price.nonMemberPay();
									break;
								case 3:	//�߰�����
									price.nonMemberAdd();
									break;
								case 4:	//ȯ��
									price.refund();
									break;
								case 0:
									goto CC;
									break;
								}
							}
						}
						case 2:
						{
							food.prn();
							break;
						}
						case 0:
							goto CC;
							break;
						}
					}
					break;
				}
				case 2:	//�ڸ��̵�
					seat.moveSeat();
					break;
				case 3:	//�������
					seat.exitSeat();
					break;
				case 4:	//��밡���¼�
					seat.prn();
					break;
				case 0:
					goto AA;
					break;
				}
			}
		}
		case 3:	//ȸ������
		{
			member.add(info.joinMember());
			break;
		}
		}
	}
	return 0;
}