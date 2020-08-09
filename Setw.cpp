#include <iostream>
#include <iomanip>

using std::cout;
using std::setw; 
using std::endl;

int main()
{
	setlocale(0, "ru");
	long pop1 = 2365464, pop2 = 58, pop3 = 8457;
	cout << setw(6) << "Город " << setw(15)
		<< "Население " << endl
		<< setw(6) << "Москва " << setw(12) << pop1 << endl
		<< setw(6) << "Киров " << setw(13) << pop2 << endl
		<< setw(7) << "Угрюмовка " << setw(9) << pop3 << endl;
	return 0;
}