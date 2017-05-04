#include <iostream>
#include "list.h"
#include <cstdlib>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv)
{
	numlist shortlist;
	
	int num1,num2,num3,num4,num5;
	
	cout << "  Enter number"  << " 1 into list " << ": ";
	cin >> num1;
	cout << "  Enter number"  << " 2 into list " << ": ";
	cin >> num2;
	cout << "  Enter number"  << " 3 into list " << ": ";
	cin >> num3;
	cout << "  Enter number"  << " 4 into list " << ": ";
	cin >> num4;
	cout << "  Enter number"  << " 5 into list " << ": ";
	cin >> num5;
	
	shortlist.insertlist(num1);
	shortlist.appendlist(num2);
	shortlist.appendlist(num3);
	shortlist.appendlist(num4);
	shortlist.appendlist(num5);
	
	cout << " Displaying list \n";
	shortlist.displaylist();
	
	cout << "Deleting a node \n";
	shortlist.deletelist(num3);
	shortlist.displaylist();
			
	cout << " Deleting list " << endl;
	shortlist.~numlist();
	
	system("PAUSE");
	return 0;
}
