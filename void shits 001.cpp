#include <iostream>
#include <string>
using namespace std;

void home();
void tixe();
void aintro();
void bfavml();
void cmultitab();
void dminleg();
void egradeeq();
void fcalcu();

int main() {
	
		cout << "WELCOME TO MY PROGRAM\n\n";
		
	home();
	
	return 0;
}

void home() {
	
	char home1;
	
		cout << "A. Introduction";
		cout << "\nB. Favorite ML heroes";
		cout << "\nC. Multiplication Table";
		cout << "\nD. Age (minor or not)";
		cout << "\nE. Grade";
		cout << "\nF. Calculator";
		cout << "\nG. Exit";
		
		cout << "\n\nPick only one:  ";
		cin >> home1;
	
	switch(home1) {
		case 'A': case 'a': aintro(); break;
		case 'B': case 'b': bfavml(); break;
		case 'C': case 'c': cmultitab(); break;
		case 'D': case 'd': dminleg(); break;
		case 'E': case 'e': egradeeq(); break;
		case 'F': case 'f': fcalcu(); break;
		case 'G': case 'g': exit(0); break;
		default: system("cls"); cout << "Invalid Character!\n\n"; home();
		
	}
}


void aintro() {
	system("cls");
	
	int cont;
	
		cout << "C++\n\n";
		cout << "C++ (/'si? pl?s pl?s/, pronounced \"C plus plus\") is a high-level, general-purpose programming language";
		cout << "\ncreated by Danish computer scientist Bjarne Stroustrup. First released in 1985 as an extension of the C";
		cout << "\nprogramming language, it has since expanded significantly over time; modern C++ currently has object-";
		cout << "\noriented, generic, and functional features, in addition to facilities for low-level memory manipulation. It is";
		cout << "\nalmost always implemented as a compiled language, and many vendors provide C++ compilers, including";
		cout << "\nthe Free Software Foundation, LLVM, Microsoft, Intel, Embarcadero, Oracle, and IBM.";
	
		cout << "\n\nPress 1 if you want to retry. Press 2 if you want to go to main screen. Press any key if you want to exit.";
		cout << "\nWhich one:  ";
		cin >> cont;
	
	switch(cont) {
		case 1: aintro(); break;
		case 2: system("cls"); home(); break;
		default: exit(0); break;
	}
}

void bfavml() {
	system("cls");
	
	string fav;
	string isa = " is a ";
	string isan = " is an ";
	string sl = "/";
	string nd = " and";
	string f = "Figher";
	string mm = "Marksman";
	string a = "Assassin";
	string m = "Mage";
	string s = "Support";
	string t = "Tank";
	string el = " EXP Laner.";
	string jg = " Jungler.";
	string ml = " Mid Laner.";
	string gl = " Gold Laner.";
	string rm = " Roamer.";
	int cont;
	
		cin.ignore();
		cout << "Who is your favorite ml hero(first letter uppercase)?  ";
		getline(cin, fav);
	
	if(fav == "Balmond") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Alucard") {
		cout << fav << isa << f << sl << a << nd << el;
	}
	
	else if(fav == "Bane") {
		cout << fav << isa << f << sl << m << nd << el;
	}
	
	else if(fav == "Zilong") {
		cout << fav << isan << a << sl << f << nd << el;
	}
	
	else if(fav == "Freya") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Chou") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Sun") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Alpha") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Ruby") {
		cout << fav << isa << f << sl << t << nd << el;
	}
	
	else if(fav == "Hilda") {
		cout << fav << isa << f << sl << t << nd << el;
	}
	
	else if(fav == "Lapu-Lapu") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Roger") {
		cout << fav << isa << f << sl << mm << nd << el;
	}
	
	else if(fav == "Gatotkaca") {
		cout << fav << isa << t << sl << f << nd << el;
	}
	
	else if(fav == "Argus") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Jawhead") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Uranus") {
		cout << fav << isa << t << nd << el;
	}
	
	else if(fav == "Martis") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Kaja") {
		cout << fav << isa << f << sl << s << nd << el;
	}
	
	else if(fav == "Aldous") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Leomord") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Thamuz") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Minsitthar") {
		cout << fav << isa << f << sl << s << nd << el;
	}
	
	else if(fav == "Badang") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Guinevere") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Terizla") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "X-Borg") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Dyrroth") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Silvanna") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Masha") {
		cout << fav << isa << f << sl << t << nd << el;
	}
	
	else if(fav == "Yu Zhong") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Benedetta") {
		cout << fav << isan << a << nd << el;
	}
	
	else if(fav == "Khaleed") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Barats") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Paquito") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Gloo") {
		cout << fav << isa << t << nd << el;
	}
	
	else if(fav == "Phoveus") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Aulus") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Yin") {
		cout << fav << isa << f << nd << el;
	}
	
	else if(fav == "Edith") {
		cout << fav << isa << t << sl << mm << nd << el;
	}
	
	else if(fav == "Fredrinn") {
		cout << fav << isa << t << sl << f << nd << el;
	}
	
	else if(fav == "Julian") {
		cout << fav << isa << f << sl << m << nd << el;
	}
	
	else if(fav == "Joy") {
		cout << fav << isan << a << nd << el;
	}
	
	else if(fav == "Arlott") {
		cout << fav << isa << f << sl << a << nd << el;
	}
	
	else if(fav == "Saber") {
		cout << fav << isan << a << nd << jg;
	}
	
	else if(fav == "Karina") {
		cout << fav << isan << a << nd << jg;
	}
	
	else if(fav == "Fanny") {
		cout << fav << isan << a << nd << jg;
	}
	
	else if(fav == "Hayabusa") {
		cout << fav << isan << a << nd << jg;
	}
	
	else if(fav == "Natalia") {
		cout << fav << isan << a << nd << jg;
	}
	
	else if(fav == "Harley") {
		cout << fav << isa << m << sl << a << nd << jg;
	}
	
	else if(fav == "Lancelot") {
		cout << fav << isan << a << nd << jg;
	}
	
	else if(fav == "Helcurt") {
		cout << fav << isan << a << nd << jg;
	}
	
	else if(fav == "Gusion") {
		cout << fav << isan << a << nd << jg;
	}
	
	else if(fav == "Selena") {
		cout << fav << isan << a << sl << m << nd << jg;
	}
	
	else if(fav == "Hanzo") {
		cout << fav << isan << a << nd << jg;
	}
	
	else if(fav == "Ling") {
		cout << fav << isan << a << nd << jg;
	}
	
	else if(fav == "Alice") {
		cout << fav << isa << m << sl << t << nd << ml;
	}
	
	else if(fav == "Nana") {
		cout << fav << isa << m << sl << s << nd << ml;
	}
	
	else if(fav == "Eudora") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Gord") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Kagura") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Cyclops") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Aurora") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Vexana") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Odette") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Zhask") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Pharsa") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Valir") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Chang'e") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Vale") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Lunox") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Harith") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Kadita") {
		cout << fav << isa << m << sl << a << nd << ml;
	}
	
	else if(fav == "Esmeralda") {
		cout << fav << isa << m << sl << t << nd << ml;
	}
	
	else if(fav == "Lylia") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Cecilion") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Luo Yi") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Yve") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Aamon") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Valentina") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Xavier") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Novaria") {
		cout << fav << isa << m << nd << ml;
	}
	
	else if(fav == "Miya") {
		cout << fav << isa << mm << nd << gl;
	}
	
	else if(fav == "Bruno") {
		cout << fav << isa << mm << nd << gl;
	}
	
	else if(fav == "Clint") {
		cout << fav << isa << mm << nd << gl;
	}
	
	else if(fav == "Layla") {
		cout << fav << isa << mm << nd << gl;
	}
	
	else if(fav == "Yi Sun-shin") {
		cout << fav << isan << a << sl << mm << nd << gl;
	}
	
	else if(fav == "Moskov") {
		cout << fav << isa << mm << nd << gl;
	}
	
	else if(fav == "Karrie") {
		cout << fav << isa << mm << nd << gl;
	}
	
	else if(fav == "Irithel") {
		cout << fav << isa << mm << nd << gl;
	}
	
	else if(fav == "Lesley") {
		cout << fav << isa << mm << sl << a << nd << gl;
	}
	
	else if(fav == "Hanabi") {
		cout << fav << isa << mm << nd << gl;
	}
	
	else if(fav == "Claude") {
		cout << fav << isa << mm << nd << gl;
	}
	
	else if(fav == "Kimmy") {
		cout << fav << isa << mm << sl << m << nd << gl;
	}
	
	else if(fav == "Granger") {
		cout << fav << isa << mm << nd << gl;
	}
	
	else if(fav == "Wanwan") {
		cout << fav << isa << mm << nd << gl;
	}
	
	else if(fav == "Popol and Kupa") {
		cout << fav << isa << mm << nd << gl;
	}
	
	else if(fav == "Brody") {
		cout << fav << isa << mm << nd << gl;
	}
	
	else if(fav == "Beatrix") {
		cout << fav << isa << mm << nd << gl;
	}
	
	else if(fav == "Beatrix") {
		cout << fav << isa << mm << nd << gl;
	}
	
	else if(fav == "Melissa") {
		cout << fav << isa << mm << nd << gl;
	}
	
	else if(fav == "Tigreal") {
		cout << fav << isa << t << sl << s << nd << rm;
	}
	
	else if(fav == "Akai") {
		cout << fav << isa << t << sl << s << nd << rm;
	}
	
	else if(fav == "Franco") {
		cout << fav << isa << t << sl << s << nd << rm;
	}
	
	else if(fav == "Rafaela") {
		cout << fav << isa << s << nd << rm;
	}
	
	else if(fav == "Minotaur") {
		cout << fav << isa << t << sl << s << nd << rm;
	}
	
	else if(fav == "Lolita") {
		cout << fav << isa << s << sl << t << nd << rm;
	}
	
	else if(fav == "Johnson") {
		cout << fav << isa << t << nd << rm;
	}
	
	else if(fav == "Estes") {
		cout << fav << isa << s << nd << rm;
	}
	
	else if(fav == "Grock") {
		cout << fav << isa << t << nd << rm;
	}
	
	else if(fav == "Diggie") {
		cout << fav << isa << s << nd << rm;
	}
	
	else if(fav == "Hylos") {
		cout << fav << isa << t << nd << rm;
	}
	
	else if(fav == "Angela") {
		cout << fav << isa << s << nd << rm;
	}
	
	else if(fav == "Belerick") {
		cout << fav << isa << t << nd << rm;
	}
	
	else if(fav == "Faramis") {
		cout << fav << isa << s << sl << m << nd << rm;
	}
	
	else if(fav == "Khufra") {
		cout << fav << isa << t << sl << s << nd << rm;
	}
	
	else if(fav == "Baxia") {
		cout << fav << isa << t << nd << rm;
	}
	
	else if(fav == "Carmilla") {
		cout << fav << isa << s << nd << rm;
	}
	
	else if(fav == "Atlas") {
		cout << fav << isa << t << sl << s << nd << rm;
	}
	
	else if(fav == "Mathilda") {
		cout << fav << isa << s << sl << a << nd << rm;
	}
	
	else if(fav == "Floryn") {
		cout << fav << isa << s << nd << rm;
	}
	
	else {
		cout << "Invalid Character!";
				
		cout << "\n\nPress 1 if you want to retry. Press 2 if you want to go to main screen. Press any key if you want to exit.";
		cout << "\nWhich one:  ";
		cin >> cont;
	
	switch(cont) {
		case 1: bfavml(); break;
		case 2: system("cls"); home(); break;
		default: exit(0); break;
	}
	}
	
	cout << "\n\nPress 1 if you want to retry. Press 2 if you want to go to main screen. Press any key if you want to exit.";
		cout << "\nWhich one:  ";
		cin >> cont;
	
	switch(cont) {
		case 1: bfavml(); break;
		case 2: system("cls"); home(); break;
		default: exit(0); break;
}
}

void cmultitab() {
	system("cls");
	
	int num1,num2,cont;
	
		cout << "Type a number:  ";
		cin >> num1;
		cout << "How many times do you want this to loop?  ";
		cin >> num2;
		
		
	for (int a = 1; a <= num2; a++) {
		cout << endl << num1 << " x " << a << " = " << num1*a;
	}
	
		cout << "\n\nPress 1 if you want to retry. Press 2 if you want to go to main screen. Press any key if you want to exit.";
		cout << "\nWhich one:  ";
		cin >> cont;
	
	switch(cont) {
		case 1: cmultitab(); break;
		case 2: system("cls"); home(); break;
		default: exit(0); break;
	}
}

void dminleg() {
	system("cls");
	
	int age,cont;
	
		cout << "How old are you?  ";
		cin >> age;
	
	if(age >= 18) {
		cout << "You are in legal age!";
	}
	
	else if (age >= 0 && age <= 17) {
		cout << "You are a minor!";
	}
	
	else {
		cout << "Invalid number!";
	}
	
		cout << "\n\nPress 1 if you want to retry. Press 2 if you want to go to main screen. Press any key if you want to exit.";
		cout << "\nWhich one:  ";
		cin >> cont;
	
	switch(cont) {
		case 1: dminleg(); break;
		case 2: system("cls"); home(); break;
		default: exit(0); break;
	}
	
}

void egradeeq() {
	system("cls");
	
	int mark,cont;
	char grade;
	
		cout << "Enter a grade between 0 and 100: ";
		cin >> mark;
	
	if(mark < 0 || mark > 100){
		cout<<"\nINVALID SCORE!!!"<<endl;
	}
	
	switch(mark/10){
		case 10: case 9: grade = 'A'; break;
		case 8: grade = 'B'; break;
		case 7: grade = 'C'; break;
		case 6: grade = 'D'; break;
		case 5: grade = 'E'; break;
		default: grade = 'F';
	}
	
		cout << "Your grade is " << grade << endl;
	
		cout << "\n\nPress 1 if you want to retry. Press 2 if you want to go to main screen. Press any key if you want to exit.";
		cout << "\nWhich one:  ";
		cin >> cont;
	
	switch(cont) {
		case 1: egradeeq(); break;
		case 2: system("cls"); home(); break;
		default: exit(0); break;
	}
}

void fcalcu() {
	system("cls");
	
	double num1,num2;
	int cont;
	
		cout << "Type any 2 numbers:  ";
		cin >> num1 >> num2;
	
		cout << endl << num1 << " + " << num2 << " = " << num1+num2 << endl;
		cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
		cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
		cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
	
		cout << "\n\nPress 1 if you want to retry. Press 2 if you want to go to main screen. Press any key if you want to exit.";
		cout << "\nWhich one:  ";
		cin >> cont;
	
	switch(cont) {
		case 1: fcalcu(); break;
		case 2: system("cls"); home(); break;
		default: exit(0); break;
	}
}
