#include <iostream>
#include <string>
#include "sample.h"


using namespace std;


int main(){
    
	/* 1
	int a, b;
    string s, t;

	a = 1;
	b = 2;

	t = "入力文字：";

	cout << "入力してください。" << endl << ">";
	cin >> s;
	cout << endl << t + s << a + b << "。" << endl;
	*/

	/* 2 
	int num;
	CSample* pObj = NULL;  //ﾎﾟｲﾝﾀ
	CSample::staticSet(9); //ｽﾀﾃｨｯｸ

	cout<< "整数を入力" << endl << ">";
	cin>> num;

	pObj = new CSample();
	
	pObj->set(num);
	cout<< pObj->get() << endl;
	
	delete pObj;
	
	cout<< CSample::staticGet();
	*/

	/* 3 
	int *p = 0;
	int i;
	p = new int[10];

	for(i=0; i<10; ++i)
	{
		p[i] = i;
		cout<< p[i] << endl;
	}

	delete [] p;
	*/




	return 0;
}
