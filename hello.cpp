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

	t = "“ü—Í•¶šF";

	cout << "“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << endl << ">";
	cin >> s;
	cout << endl << t + s << a + b << "B" << endl;
	*/

	/* 2 
	int num;
	CSample* pObj = NULL;  //Îß²İÀ
	CSample::staticSet(9); //½ÀÃ¨¯¸

	cout<< "®”‚ğ“ü—Í" << endl << ">";
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
