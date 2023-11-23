#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class guessinggame {
private:
	int no, guessno, nolimit;
public:
	void gno() {       //gno=guessing no
		cout << "Enter limit value  where u want to generate random value  " << endl;
		cin >> nolimit;
		no = rand() % nolimit + 1;
		while (no != 0) {
			cout << "Enter guess number:" << endl;
			cin >> guessno;
			if (guessno == no) {
				cout << "Conguratilations! you won your number is equal:" << "\nYour guessed number is:" << guessno << "\nRandom no is:" << no << endl;
				cout << "So!" << no << "=" << guessno << endl;
				break;
			}
			else if (guessno < no) {
				cout << "Your Guessed number is less than orignal random number! Enter again:\n";
			}
			else if (guessno > no) {
				cout << "Your Guessed number is greater than orignal random number! Enter again:\n";
			}
		}
	}
};
int main() {
	guessinggame s1;
	srand(time(0));
	s1.gno();
	system("pause");
}