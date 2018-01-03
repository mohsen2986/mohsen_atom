#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <Windows.h>
#include<conio.h>
#include <fstream>
#include <string>

int grade = 0;
//stealer $ his firend # sherlock @ 
using namespace std;
int x_1 = 0;
int y_1 = 0;
int x_moriarty = 0;
int y_moriarty = 0;
int x_sherlock = 0;
int y_sherlock = 0;
int x_eastWind = 0;
int y_eastWind = 0;
int sherlock = 0;
int abc[5];
int moriarty = 0;
int eastwind = 0;
int johnEye = 0;
int johnEye_1 = 0;
int steps_M = 0;
int steps_E = 0;
int  score = 0;
void swapnum(int, int);
void lose();
void printqube(int, int, int, int);
void load();
void graphic();
void printmain(int, int, int, int);
void color(int);
void gotoxy(int, int);
void changehome(int);
void printText();
void printLine(int, int, int, int, int);
void guss();
void Moriarty();
void Sherlock();
void JohnEye();
void Score_1();
void activity();
void print(int a, int b);
void loading();
void text();
void nextstep();
void titele();
void Moveto(char, int, int, int, int, int, int);
int Score(int, char);
string Show_Scores(int);
int homesize = 7;
int homecounter = 10;
int homecounter2 = (((homecounter * 2) - 2) / 3);
void first();

int main() {
	int choseState = 0;
	color(0X77);
	printqube(70, 30, 0, 0);
	color(0X7c);
	gotoxy(0, 0);
	text();


	print(35, 3);
	loading();
	color(0X08);
	system("cls");
	color(0X0b);
	nextstep();

	titele();
	activity();
	cin >> choseState;











	

	if (choseState == 1) {

		printqube(39, 30, 0, 0);
		color(0X8c);
		printqube(21, 15, 77, 0);
		printqube(21, 15, 77, 15);
		graphic();
		printText();
		printLine(37, 1, 4, 1, 0);
		printLine(37, 1, 26, 1, 0);
		printLine(35, 3, 12, 2, 3);
		printLine(35, 3, 16, 2, 3);
		first();
		JohnEye();
		//load();

		while (true) {
			guss();
			Moriarty();
			JohnEye();
			Sherlock();
			Score_1();
			if (sherlock == moriarty) {
				lose();
				Score(score, 's');
				break;
			}
		}

	}	else if (choseState == 2) {
		system("cls");
		gotoxy(20, 20);
		Show_Scores(1);
		Show_Scores(2);
		Show_Scores(3);
		cin.get();
		cin.get();
	}

	cin.get();
	cin.get();
	
	return 0;
}
void swapnum(int a, int b) {
	int help = abc[a];
	abc[a] = abc[b];
	abc[b] = help;


}
int randomnum() {
	srand(time(0));
	int i = (rand() % 100) + 1;
	return i;
}
int randomhome() {
	srand(time(0));
	int a = (rand() % homecounter + 1);
	return a;
}
void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void printmain(int width, int length, int x, int y)
{
	//color(0x1e);
	gotoxy(x, y);

	for (int j = 1; j <= width; j++) {
		if (j == 1 || j == length)
		{
			for (int i = 1; i <= length; i++)
			{
				color(0xe0);
				cout << "  ";
			}
			gotoxy(x, y + j);

		}
		else {
			for (int i = 1; i <= width; i++)
			{
				if (i == 1 || i == length) {
					color(0xe0);
					cout << "  ";
				}
				else {
					color(0X00);
					cout << "  ";
				}

			}
			gotoxy(x, y + j);

		}
	}

}
void graphic() {

	for (int i = 0; i < (homecounter / 2); i++) {

		printmain(homesize, homesize, ((homecounter2 * 2 + 2)*i) + 3, 5);
		printmain(homesize, homesize, ((homecounter2 * 2 + 2)*i) + 3, ((((homecounter * 2) - 2) / 3)) + 5 + 8);
		gotoxy((((homecounter2 * 2 + 2)*i) + 5) + (homesize / 2) + 1, 5);
		color(0X7c);
		cout << (i * 2 + 1);
		gotoxy((((homecounter2 * 2 + 2)*i) + 5) + (homesize / 2) + 1, ((((homecounter * 2) - 2) / 3)) + 5 + 14);
		cout << (i * 2 + 2);
	}
	color(0X0c);
	gotoxy(8, 11);
	cout << "    ";
	gotoxy(22, 11);
	cout << "    ";

	gotoxy(36, 11);
	cout << "    ";

	gotoxy(50, 11);
	cout << "    ";

	gotoxy(64, 11);
	cout << "    ";

	gotoxy(8, 19);
	cout << "    ";

	gotoxy(22, 19);
	cout << "    ";

	gotoxy(36, 19);
	cout << "    ";

	gotoxy(50, 19);
	cout << "    ";

	gotoxy(64, 19);
	cout << "    ";
	color(0X0B);
	gotoxy(8, 7);
	cout << "&";
	color(0X0A);
	gotoxy(22, 7);
	cout << "&";
	color(0X0C);
	gotoxy(36, 7);
	cout << "&";
	color(0X0F);
	gotoxy(50, 7);
	cout << "&";
	color(0X0C);
	gotoxy(64, 7);
	cout << "&";
	color(0X0D);
	gotoxy(64, 7);
	cout << "&";
	gotoxy(8, 23);
	cout << "&";
	color(0X0C);
	gotoxy(22, 23);
	cout << "&";
	color(0X0A);
	gotoxy(36, 23);
	cout << "&";
	color(0X0B);
	gotoxy(50, 23);
	cout << "&";
	color(0X0F);
	gotoxy(64, 23);
	cout << "&";
	color(0X7c);
	for (int i = 0; i < (35 * 2) + 1; i++) {
		gotoxy(i + 3, 15);
		cout << "-";

	}


}
void color(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void Moriarty() {
	int inputnum;
	char moORsh;
	cin >> moORsh;
	if (moORsh == 'm' || moORsh == 'M') {

		cin >> inputnum;
		if (inputnum == sherlock) {
			lose();
		}
		else if (inputnum == eastwind) {
			steps_M = (steps_M + 1) % 2;
		}
		else if (inputnum % 2 == 0 && moriarty % 2 == 0 && johnEye_1 == 2 || inputnum % 2 == 1 && moriarty % 2 == 1 && johnEye_1 == 1 || inputnum % 2 == 1 && moriarty % 2 == 0 && johnEye_1 == 1 || moriarty % 2 == 1 && inputnum % 2 == 0 && johnEye_1 == 2) {
			abc[0] = 1;
		}
		else if (inputnum % 2 == 0 && moriarty % 2 == 1 && johnEye_1 == 1 || inputnum % 2 == 1 && moriarty == 0 && johnEye_1 == 2) {

		}
		else {
			//gotoxy(x_moriarty, y_moriarty);
			//cout << " ";
			changehome(inputnum);
			if (moriarty % 2 == 0) {
				Moveto('$', x_moriarty, y_moriarty, x_moriarty, y_moriarty - 5, 1, 100);
				gotoxy(x_moriarty, y_moriarty - 5);
				cout << " ";

				Moveto('$', x_moriarty, y_moriarty - 6, x_1, y_1 - 6, 1, 100);
				gotoxy(x_1, y_1 - 6);
				cout << " ";
				if (inputnum % 2 == 0) {
					Moveto('$', x_1, y_1 - 6, x_1, y_1, 1, 100);
				}
				else {
					//Moveto('$', x_1, y_1 - 6, x_1, y_1-6, 1, 100);
				}



			}
			else {
				Moveto('$', x_moriarty, y_moriarty, x_1, y_1 + 6, 1, 100);
			}

			//gotoxy(x_1, y_1);
			//cout << "$";
			x_moriarty = x_1;
			y_moriarty = y_1;
			steps_M = (steps_M + 1) % 2;
			//cout << steps_M;
			moriarty = inputnum;
		}
	}
	else if (moORsh == 'e') {
		cin >> inputnum;
		gotoxy(x_eastWind, y_eastWind);
		cout << " ";
		changehome(inputnum);
		gotoxy(x_1, y_1);
		cout << "#";
		x_eastWind = x_1;
		y_eastWind = y_1;
		steps_E = (steps_E + 1) % 3;
		cout << steps_M;
		eastwind = inputnum;

	}

}
void Sherlock() {
	int a = randomnum();
	int mind;
	gotoxy(97, 5);
	for (int i = 0; i < 4; i++) {
		color(0Xcc);
		gotoxy(97, 5 + i);
		cout << "          ";
		Sleep(200);
	}
	for (int i = 0; i < 4; i++) {
		color(0X80);
		gotoxy(97, 5 + i);
		cout << "          ";
		Sleep(200);
	}
	if (abc[0] == 4) {
		gotoxy(93, 5);
		cout << abc[0];
		gotoxy(97, 5);
		cout << "% 50 ==>" << abc[1];
		gotoxy(97, 6);
		cout << "% 30 ==>" << abc[2];
		gotoxy(97, 7);
		cout << "% 15 ==>" << abc[3];
		gotoxy(97, 8);
		cout << "% 5  ==>" << abc[4];
		if (a <= 50) {
			mind = abc[1];

		}
		else if (a>50 && a <= 80) {
			mind = abc[2];

		}
		else if (a > 80 && a <= 95) {
			mind = abc[3];

		}
		else {
			mind = abc[4];

		}
	}
	else if (abc[0] == 3) {
		gotoxy(93, 5);
		cout << abc[0];
		gotoxy(97, 5);
		cout << "% 60 ==>" << abc[1];
		gotoxy(97, 6);
		cout << "% 25 ==>" << abc[2];
		gotoxy(97, 7);
		cout << "% 15 ==>" << abc[3];
		if (a <= 60) {
			mind = abc[1];

		}
		else if (a > 60 && a <= 85) {
			mind = abc[2];

		}
		else {
			mind = abc[3];

		}
	}
	else if (abc[0] == 2) {
		gotoxy(93, 5);
		cout << abc[0];
		gotoxy(97, 5);
		cout << "% 70 ==>" << abc[1];
		gotoxy(97, 6);
		cout << "% 30 ==>" << abc[2];
		if (a < 70) {
			mind = abc[1];

		}
		else {
			mind = abc[2];

		}
	}
	else if (abc[0] == 1) {
		gotoxy(93, 5);
		cout << abc[0];
		mind = moriarty;
		gotoxy(97, 5);
		cout << "% 100 ==>" << moriarty;
	}
	gotoxy(x_sherlock, y_sherlock);
	cout << " ";
	changehome(mind);
	if (mind % 2 == 0) {
		y_1 -= 5;
	}
	else {
		y_1 += 5;
	}
	gotoxy(x_1, y_1);
	x_sherlock = x_1;
	y_sherlock = y_1;
	cout << "@";
	sherlock = mind;


}
void JohnEye() {
	int a = randomnum();
	if (a <= johnEye) {
		a = randomnum();
		if (a <= 50) {
			gotoxy(74, 13);
			color(0X7c);
			cout << "(>";
			gotoxy(83, 12);
			color(0X80);
			cout << "Ok i am locking the street";
			johnEye = 0;
			johnEye_1 = 1;
		}
		else if (a > 50) {
			gotoxy(74, 17);
			color(0X7c);
			cout << "(>";
			gotoxy(83, 12);
			color(0X80);
			cout << "Ok i am locking the street";
			johnEye = 0;
			johnEye_1 = 2;
		}
	}
	else {
		johnEye += 20;
		gotoxy(83, 12);
		color(0X80);
		for (int i = 0; i < 27; i++) {
			cout << " ";
		}
	}
	gotoxy(94, 23);

}
void first() {
	sherlock = randomhome();
	do {
		moriarty = randomhome();
		eastwind = randomhome();
	} while (sherlock == moriarty || moriarty == eastwind);
	changehome(sherlock);
	if (sherlock % 2 == 0) {
		y_1 -= 5;
	}
	else {
		y_1 += 5;
	}
	x_sherlock = x_1;
	y_sherlock = y_1;
	gotoxy(x_1, y_1);
	cout << "@";

	changehome(moriarty);
	gotoxy(x_1, y_1);
	cout << "$";
	x_moriarty = x_1;
	y_moriarty = y_1;
	changehome(eastwind);
	gotoxy(x_1, y_1);
	cout << "#";
	x_eastWind = x_1;
	y_eastWind = x_1;


}
void changehome(int a) {
	switch (a)
	{
	case 1:x_1 = 9, y_1 = 7;
		break;
	case 3:x_1 = 23, y_1 = 7;
		break;
	case 5:x_1 = 37, y_1 = 7;
		break;
	case 7:x_1 = 51, y_1 = 7;
		break;
	case 9:x_1 = 65, y_1 = 7;
		break;
	case 2:x_1 = 9, y_1 = 22;
		break;
	case 4:x_1 = 23, y_1 = 22;
		break;
	case 6:x_1 = 37, y_1 = 22;
		break;
	case 8:x_1 = 51, y_1 = 22;
		break;
	case 10:x_1 = 65, y_1 = 22;
		break;







	default:
		break;
	}
}
void load33() {
	/*for (int i = 0; i < 10; i++) {
	gotoxy(20+i, 30);
	cout << "!";
	Sleep(100);

	}//system("cls");*/
	gotoxy(77, 4);
	cout << "@";

}
void printqube(int a, int b, int c, int d) {
	//color(0x0c);

	for (int i = 1; i <= b; i++) {
		if (i == 1 || i == b) {
			gotoxy(c, (d + i) - 1);
			if (i == 1) {

			}
			else if (i == b) {
			}
			for (int j = 1; j <= a; j++) {
				cout << "= ";

			}

		}
		else {
			gotoxy(c, (d + i) - 1);
			cout << "= ";
			for (int j = 2; j <= a - 1; j++) {
				cout << "  ";
			}
			cout << "= ";
		}gotoxy(c, (d + i) - 1);

	}
}
void printText() {
	color(0X8c);
	gotoxy(79, 0);
	cout << "<=SHERLOCK=>";
	gotoxy(79, 15);
	cout << "<=MORIARTY=>";
	gotoxy(80, 3);
	cout << "The game is on!!!";
	gotoxy(80, 5);
	cout << "suggestions:";
	gotoxy(80, 9);
	cout << "JOHN";
	gotoxy(80, 11);
	cout << "looking the street?";
	gotoxy(80, 17);
	cout << "DID you miss me??";
	gotoxy(80, 18);
	cout << "welcome to the final problem.";
	gotoxy(80, 20);
	cout << "score :";
	gotoxy(80, 23);
	cout << "your choise:";
	gotoxy(28, 0);
	cout << "<<==SHERLOCK==>>";
	color(0X7c);
	gotoxy(1, 27);
	cout << "                                                                           ";
	gotoxy(1, 28);
	cout << " <<SHERLOCk C++ game>>          MOHSEN ALIAKBARI                ATOM       ";

}
void printLine(int a, int b, int c, int d, int f) {
	gotoxy(b, c);
	if (d == 1) {
		for (int i = 0; i < a; i++) {
			if (i == (a - 1)) {
				cout << "= =";
			}
			else {
				cout << "= ";
			}
		}
	}
	else if (d == 2) {
		while (f != 0) {
			color(0X80);
			for (int i = 0; i < a; i++) {
				if (i == (a - 1)) {
					cout << "   ";
				}
				else {
					cout << "  ";
				}
			}
			f--;
			gotoxy(b, c += 1);
		}
	}
}
void guss() {

	if (sherlock % 2 == 0) {
		if (sherlock == moriarty - 1) {
			abc[0] = 2;
		}
	}
	else {
		if (sherlock == moriarty + 1) {
			abc[0] = 2;
		}
	}

	if (sherlock == moriarty - 2 || sherlock == moriarty + 2) {
		abc[0] = 2;
	}
	if (sherlock != moriarty + 2 || sherlock != moriarty - 2) {
		if (sherlock % 2 == moriarty % 2) {
			abc[0] = 3;
		}
	}
	if (sherlock != moriarty - 1 || sherlock != moriarty + 1) {
		if (sherlock % 2 != moriarty % 2) {
			abc[0] = 4;
		}
	}
	abc[1] = moriarty;
	do {
		srand(time(0));
		abc[2] = (rand() % homecounter + 1);
		abc[3] = (rand() % homecounter + 1);
		abc[4] = (rand() % homecounter + 1);



	} while (moriarty == abc[2] || moriarty == abc[3] || moriarty == abc[4] || abc[2] == abc[3] || abc[2] == abc[4] || abc[3] == abc[4]);

	int rand;
	if (sherlock == eastwind) {
		rand = randomnum();
		if (rand <= 50) {
			do {
				abc[1] = randomhome();
			} while (moriarty == abc[1] || abc[1] == abc[2] || abc[1] == abc[3] || abc[1] == abc[4]);
		}


	}
	rand = randomnum();
	if (abc[0] == 4) {
		if (rand <= 25) {
			swapnum(1, 2);
			swapnum(3, 4);
		}
		else if (rand > 25 && rand <= 50) {
			swapnum(1, 3);
			swapnum(2, 4);
		}
		else if (rand > 50 && rand <= 75) {
			swapnum(1, 4);
			swapnum(2, 3);
		}
	}
	if (abc[0] == 3) {
		if (rand <= 34) {
			swapnum(1, 2);

		}
		else if (rand > 34 && rand <= 67) {
			swapnum(2, 3);
		}
	}
	if (abc[0] == 2) {
		if (rand <= 50) {
			swapnum(1, 2);
		}
	}
	/*for (int i = 0; i < 5; i++) {
	cout << abc[i];
	}*/
}
void lose() {
	printLine(60, 0, 0, 2, 31);
	gotoxy(50, 10);
	char t[] = { 'G','R','E','A','T',' ','W','O','R','K' };
	for (int i = 0; i <10; i++) {
		cout << t[i];
		Sleep(300);
	}
	gotoxy(51, 15);
	char t_2[] = { 'g','o','o','d',' ','j','o','b' };
	for (int i = 0; i <8; i++) {
		cout << t_2[i];
		Sleep(300);
	}
	Sleep(800);
	gotoxy(45, 20);
	cout << "your score is : " << endl;
}
void Score_1() {
	score++;
	gotoxy(88, 20);
	cout << score;
	gotoxy(94, 23);
	for (int i = 0; i < 5; i++) {
		gotoxy(94 + i, 23);
		cout << " ";
	}
	gotoxy(94, 23);
}
void activity() {
	system("cls");
	color(0X77);
	printqube(70, 31, 0, 0);

	color(0X7c);
	gotoxy(53, 10);
	cout << "1-START GAME";
	gotoxy(53, 15);
	cout << "2-HIGH SCORE";
	gotoxy(54, 18);
	cout << "3-ABOUT ME";
	gotoxy(56, 20);
	cout << "4-exit";
	gotoxy(52, 23);
	cout << "your chose is :";


}
void print(int a, int b) {
	color(0x3b);
	gotoxy(24, 17);
	for (int i = 1; i <= b; i++) {
		if (i == 1 || i == b) {
			if (i == 1) {
				gotoxy(24, 17);
			}
			else if (i == b) {
				gotoxy(24, 19);
			}
			for (int j = 1; j <= a; j++) {
				cout << "  ";

			}

		}
		else {
			gotoxy(24, 18);
			cout << "  ";
			for (int j = 2; j <= a - 1; j++) {
				cout << "  ";
			}gotoxy(92, 18);
			cout << "  ";
		}cout << "\n";
	}


}
void loading()
{
	for (int i = 0; i < 67; i++) {
		color(0x49);
		gotoxy(25 + i, 18);
		if (i == 40) {
			for (int j = 0; j < 50; j++) {
				Sleep(100);
			}
		}
		cout << " ";
		Sleep(100);
	}
}
void text() {

	cout << "                                                                                                                    " << endl;
	cout << "                                                                                                                    " << endl;
	cout << "                                                                                                                    " << endl;
	cout << "                                                                                                                    " << endl;
	cout << "                                                                                                                    " << endl;
	cout << "                                                                                                                    " << endl;
	cout << "                  ##                                               ##                                               " << endl;
	cout << "                  ##                                               ##                                               " << endl;
	cout << "                  ##                                               ##                                               " << endl;
	cout << "                  ##                                               ##   ##                                          " << endl;
	cout << "                  ##                                               ##   ##   ##                                     " << endl;
	cout << "                  ##          ##########  ##########       ##########        ##########  ##########                 " << endl;
	cout << "                  ##          ##########  ###########      ##########   ##   ##########  ##########                 " << endl;
	cout << "                  ##          ##      ##  ##      ## #     ##      ##   ##   ##      ##  ##      ##                 " << endl;
	cout << "                  ##          ##      ##  ##      ##  #    ##      ##   ##   ##      ##  ##      ##                 " << endl;
	cout << "                  ##########  ##########  ##########   #   ##########   ##   ##      ##  ##########                 " << endl;
	cout << "                  ##########  ##########  ##########   ##  ##########   ##   ##      ##  ##########                 " << endl;
	cout << "                                                                                                 ##                 " << endl;
	cout << "                                                                                                 ##                 " << endl;
	cout << "                                                                                                 ##                 " << endl;
	cout << "                                                                                         ##########                 " << endl;
	cout << "                                                                                         ##########                 " << endl;

}
void nextstep() {
	gotoxy(11, 10); cout << "##########  ##      ##  ##########  ##########  ##          ##########  ##########  ##      ##";
	gotoxy(11, 11); cout << "##########  ##      ##  ##########  ##########  ##          ##########  ##########  ##     ## ";
	gotoxy(11, 12); cout << "##          ##      ##  ##          ##      ##  ##          ##      ##  ##          ##    ##  ";
	gotoxy(11, 13); cout << "##          ##      ##  ##          ##      ##  ##          ##      ##  ##          ##   ##   ";
	gotoxy(11, 14); cout << "##          ##      ##  ##          ##      ##  ##          ##      ##  ##          ##  ##    ";
	gotoxy(11, 15); cout << "##          ##      ##  ##          ##      ##  ##          ##      ##  ##          ## ##     ";
	gotoxy(11, 16); cout << "##########  ##########  ##########  ##########  ##          ##      ##  ##          ####      ";
	gotoxy(11, 17); cout << "##########  ##########  ##########  ##########  ##          ##      ##  ##          ####      ";
	gotoxy(11, 18); cout << "        ##  ##      ##  ##          ####        ##          ##      ##  ##          ## ##     ";
	gotoxy(11, 19); cout << "        ##  ##      ##  ##          ## ##       ##          ##      ##  ##          ##  ##    ";
	gotoxy(11, 20); cout << "        ##  ##      ##  ##          ##  ##      ##          ##      ##  ##          ##   ##   ";
	gotoxy(11, 21); cout << "        ##  ##      ##  ##          ##   ##     ##          ##      ##  ##          ##    ##  ";
	gotoxy(11, 22); cout << "##########  ##      ##  ##########  ##    ##    ##########  ##########  ##########  ##     ## ";
	gotoxy(11, 23); cout << "##########  ##      ##  ##########  ##     ###  ##########  ##########  ##########  ##      ##";





	Sleep(2000);
	system("cls");
}
//system("cls");
void titele() {
	gotoxy(33, 5);
	char a[] = { 'T','h','i','s',' ','i','s',' ','a',' ','g','a','m','e',' ','b','a','s','e','d',' ','o','n',
		' ','S','H','E','R','L','O','C','K',' ','M','O','V','I','E',' ','a','n','d',' ', 'n','o','v','e','l' };
	for (int i = 0; i < 48; i++) {
		cout << a[i];
		Sleep(200);
	}
	gotoxy(48, 10);
	char b[] = { 'H','o','p','e',' ','y','o','u',' ','e','n','j','o','y', ' ','i','t' };
	for (int i = 0; i<17; i++) {
		cout << b[i];
		Sleep(200);
	}
	Sleep(700);
	system("cls");
	gotoxy(30, 30);
	char c[] = { 'p','o','w','e','d',' ','b','y',' ',' ','A','T','O','M' };
	for (int i = 0; i < 14; i++) {
		cout << c[i];
		Sleep(200);
	}
	Sleep(950);
	system("cls");
	gotoxy(40, 20);
	cout << "<<==press any key to continue==>>";
	cin.get();
	system("cls");
}
void Moveto(char character, int first_x, int first_y, int fin_x, int fin_y, int steps, int speed)
{
	int y = first_y;
	int direction;

	// Set direction for y
	if ((fin_y - first_y) > 0)
		direction = steps;
	else
		direction = -steps;

	// Check and set y
	while (first_y != fin_y)
	{
		// Sleep for a few seconds
		Sleep(speed);
		// Remove character from previous position
		gotoxy(first_x, first_y);
		std::cout << " ";
		// Set character to new position
		first_y += direction;
		gotoxy(first_x, first_y);
		std::cout << character;
	}

	// Set direction for x
	if ((fin_x - first_x) > 0)
		direction = steps;
	else
		direction = -steps;

	// Check and set x
	int temp = direction;
	while (first_x != fin_x)
	{
		// Sleep for a few seconds
		Sleep(speed);
		// Remove character from previous position
		gotoxy(first_x, first_y);
		std::cout << " ";
		// Set character to new position
		first_x += direction;
		gotoxy(first_x, first_y);
		std::cout << character;
	}
}
int Score(int my_score, char mod)
{
	int rank = 0;
	string line;
	ifstream myfile_in("score.txt");

	int first = 0, second = 0, third;

	// Read scores
	getline(myfile_in, line); // First line
	if (my_score >= stoi(line))
	{
		first = my_score;
		rank = 1;
		second = stoi(line);
		getline(myfile_in, line);
		third = stoi(line);
	}
	else
	{
		first = stoi(line);
		getline(myfile_in, line);
		if (my_score >= stoi(line)) // Second line
		{
			second = my_score;
			rank = 2;
			third = stoi(line);
		}
		else
		{
			second = stoi(line);
			getline(myfile_in, line);
			if (my_score >= stoi(line)) // Third line
			{
				third = my_score;
				rank = 3;
			}
			else
			{
				third = stoi(line);
			}
		}
	}

	// Save ?
	if (mod == 's')
	{
		// Write scores
		ofstream myfile_out("score.txt");
		myfile_out << first << endl;
		myfile_out << second << endl;
		myfile_out << third;
	}

	return rank;
}

// Show nth rank score
string Show_Scores(int r)
{
	string line;
	ifstream myfile_in("score.txt");

	for (int i = 0; i < r; i++)
	{
		getline(myfile_in, line); // Read line
	}
	return line;
}
//Score(score,'s')
int Mouse(string mode) {
	POINT mouse;
	RECT rect;
	int home_x, home_y;
	while (true) {
		home_x = 10, home_y = 10;
		GetWindowRect(GetConsoleWindow(),&rect);
		int screen_x = rect.left;
		int screen_y = rect.top;
		GetCursorPos(&mouse);
		Sleep(50);
		if ((GetKeyState(VK_LBUTTON) & 0X8000 != 0)) {
			if (mouse.y - screen_y > 6 && mouse.y - screen_y < 10)
				home_y = 0;
			else if (mouse.y - screen_y > 20 && mouse.y - screen_y < 24)
				home_y = 1;
			else if (mouse.x - screen_x > 5 && mouse.x - screen_x < 14)
				home_x = 0;
			else if (mouse.x - screen_x > 19 && mouse.x - screen_x < 28)
				home_x = 1;
			else if (mouse.x - screen_x > 33 && mouse.x - screen_x < 42)
				home_x = 2;
			else if (mouse.x - screen_x > 47 && mouse.x - screen_x < 56)
				home_x = 3;
			else if (mouse.x - screen_x > 61 && mouse.x - screen_x < 70)
				home_x = 4;
			
		}

	}
}
