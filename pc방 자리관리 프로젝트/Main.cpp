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
		
		cout << "→";
		cin >> choose;
		cout << endl;
		switch (choose)
		{
		case 1:	//회원
		{
			while (true)
			{
				cout << "================\n[1] Login\n[2] Find ID\n[3] Find PW\n[0] Exit\n================" << endl;
				cout << "→";
				cin >> choose;
				cout << endl;
				switch (choose)
				{
				case 1:	//회원 로그인
				{
					Information find = member.checkID();
					find.Login();
					while (true)
					{
					BB:cout << "================\n[1] Choose Seat\n[2] Move Seat\n[3] Exit Seat\n[4] Available Seats\n[0] Exit\n================" << endl;
						cout << "→";
						cin >> choose;
						cout << endl;
						switch (choose)
						{
						case 1:	//좌석선택
						{

							seat.chooseSeat();
							while (true)
							{
								cout << "================\n[1] Charge\n[2] Foods\n[0] Exit\n================" << endl;
								cout << "→";
								cin >> choose;
								cout << endl;
								switch (choose)
								{
								case 1:
								{
									while (true)
									{
										cout << "================\n[1] Price\n[2] Pay\n[3] Add Price\n[4] Refund\n[0] Exit\n================" << endl;
										cout << "→";
										cin >> choose;
										cout << endl;
										switch (choose)
										{
										case 1:	//가격표
											price.prn();
											break;
										case 2:	//지불
											price.pay();
											break;
										case 3:	//추가지불
											price.Add();
											break;
										case 4:	//환불
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
						case 2:	//자리이동
							seat.moveSeat();
							break;
						case 3:	//사용종료
							seat.exitSeat();
							break;
						case 4:	//사용가능좌석
							seat.prn();
							break;
						case 0:	//
							goto AA;
							break;
						}
					}
				}
				case 2:	//이름으르 ID 찾기
				{
					info = member.checkName();
					info.findID();
					break;
				}
				case 3:	//ID와 휴대폰 번호로 비밀번호 찾기
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

		case 2:	//비회원
		{
			while (true)
			{
			CC:cout << "================\n[1] Choose Seat\n[2] Move Seat\n[3] Exit Seat\n[4] Available Seats\n[0] Exit\n================" << endl;
				cout << "→";
				cin >> choose;
				cout << endl;
				switch (choose)
				{
				case 1:	//좌석선택
				{
					seat.chooseSeat();
					while (true)
					{
						cout << "================\n[1] Charge\n[2] Foods\n[0] Exit\n================" << endl;
						cout << "→";
						cin >> choose;
						cout << endl;
						switch (choose)
						{
						case 1:
						{
							while (true)
							{
								cout << "================\n[1] Price\n[2] Pay\n[3] Add Price\n[4] Refund\n[0] Exit\n================" << endl;
								cout << "→";
								cin >> choose;
								cout << endl;
								switch (choose)
								{
								case 1:	//가격표
									price.prn();
									break;
								case 2:	//지불
									price.nonMemberPay();
									break;
								case 3:	//추가지불
									price.nonMemberAdd();
									break;
								case 4:	//환불
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
				case 2:	//자리이동
					seat.moveSeat();
					break;
				case 3:	//사용종료
					seat.exitSeat();
					break;
				case 4:	//사용가능좌석
					seat.prn();
					break;
				case 0:
					goto AA;
					break;
				}
			}
		}
		case 3:	//회원가입
		{
			member.add(info.joinMember());
			break;
		}
		}
	}
	return 0;
}