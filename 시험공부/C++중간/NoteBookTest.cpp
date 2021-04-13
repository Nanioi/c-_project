#include "NoteBook.h"
#include "Samsung.h"
#include "Apple.h"

void main() {

	NoteBook::TotalUser();

	cout << "-------------생성자 오버로딩---------" << endl;
	
	//생성자 오버로딩
	NoteBook n;
	NoteBook m(20000);
	Samsung s;
	Apple a;
	
	NoteBook::TotalUser();
	
	//get/set 멤버함수
	n.SetPrice(2323);
	cout << n.GetPrice() << endl;
	


	//다형성 구현	(Show)
	//업캐스팅
	NoteBook *S = new Samsung();
	S->Show();
	//다운 캐스팅
	Samsung *SC = (Samsung *)new NoteBook();
	SC->SamsungCeo();
	//업캐스팅
	NoteBook *A = new Apple();
	A->Show();
	//다운캐스팅
	Apple *AC = (Apple *)new NoteBook();
	AC->AppleCeo();

	NoteBook::TotalUser();

	delete(S);
	delete(SC);
	delete(A);
	delete(AC);

	NoteBook::TotalUser();

	//friend 출력연산 << 오버로딩
	cout << n;
	cout << m;
	//연산자 오버로딩
	cout << a + s;
	cout << a - s;
	cout << a * s;
	cout << a / s;
	cout << -a ;
	//멤버함수 출력
	n.PrintPrice();
	m.PrintPrice();

}