#include "NoteBook.h"
#include "Samsung.h"
#include "Apple.h"

void main() {

	NoteBook::TotalUser();

	cout << "-------------������ �����ε�---------" << endl;
	
	//������ �����ε�
	NoteBook n;
	NoteBook m(20000);
	Samsung s;
	Apple a;
	
	NoteBook::TotalUser();
	
	//get/set ����Լ�
	n.SetPrice(2323);
	cout << n.GetPrice() << endl;
	


	//������ ����	(Show)
	//��ĳ����
	NoteBook *S = new Samsung();
	S->Show();
	//�ٿ� ĳ����
	Samsung *SC = (Samsung *)new NoteBook();
	SC->SamsungCeo();
	//��ĳ����
	NoteBook *A = new Apple();
	A->Show();
	//�ٿ�ĳ����
	Apple *AC = (Apple *)new NoteBook();
	AC->AppleCeo();

	NoteBook::TotalUser();

	delete(S);
	delete(SC);
	delete(A);
	delete(AC);

	NoteBook::TotalUser();

	//friend ��¿��� << �����ε�
	cout << n;
	cout << m;
	//������ �����ε�
	cout << a + s;
	cout << a - s;
	cout << a * s;
	cout << a / s;
	cout << -a ;
	//����Լ� ���
	n.PrintPrice();
	m.PrintPrice();

}