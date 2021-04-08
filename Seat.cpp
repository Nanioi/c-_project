#include"Seat.h"

Seat::Seat()
{
	m_nSeat = 0;
	m_nSeatNumber[500] = 0;
}

Seat::Seat(int seat)
{
	m_nSeat = seat;
	for (int i = 1; i <= seat; i++)
	{
		m_nSeatNumber[i] = 0;
	}
}

void Seat::prn()
{
	cout << "��ü �¼��� : " << m_nSeat << endl << endl;
}

void Seat::chooseSeat()
{
	int choose;
	AA:	cout << "����Ͻ� �¼���ȣ�� �Է��� �ּ���. " << endl;
	cout << "��";
	cin >> choose;
	if (m_nSeatNumber[choose] == 0)
	{
		cout << choose << "�� �¼��� ����մϴ�." << endl << endl;
		m_nSeatNumber[choose] = 1;
		m_nSeat--;
	}
	else
	{
		cout << "������� �ڸ��Դϴ�." << endl;
		goto AA;
	}
}

void Seat::exitSeat()
{
	int exit;

	cout << "������� �¼���ȣ�� �Է��ϼ���. ";
	cout << "��";
	cin >> exit;
	if (m_nSeatNumber[exit] == 0)
	{
		cout << "������� �¼���ȣ�� ��Ȯ�� �Է��ϼ���." << endl;
	}
	else
	{
		m_nSeatNumber[exit] = 0;
		cout << exit << "�� �ڸ����� ����� �����մϴ�." << endl;
		m_nSeat++;
	}
}
void Seat::moveSeat()
{
	int mySeat_A;
	int mySeat_B;
	cout << "������� �¼���ȣ�� �Է��ϼ���. " << endl;
	cout << "��";
	cin >> mySeat_A;
	if (m_nSeatNumber[mySeat_A] == 0)
	{
		cout << "������� �¼���ȣ�� ��Ȯ�� �Է��ϼ���." << endl;
	}
	else
	{
		cout << "�̵��Ͻ� �¼���ȣ�� �Է��ϼ���. " << endl;
		cout << "��";
		cin >> mySeat_B;
		if (m_nSeatNumber[mySeat_B] == 0)
		{
			m_nSeatNumber[mySeat_B] = m_nSeatNumber[mySeat_A];
			m_nSeatNumber[mySeat_A] = 0;
			cout << mySeat_A << "�� �ڸ����� " << mySeat_B << "�� �ڸ��� �̵��Ǿ����ϴ�." << endl;
		}
		else
		{
			cout << "�ڸ��� �̵��� �� �����ϴ�." << endl;
		}
	}
}