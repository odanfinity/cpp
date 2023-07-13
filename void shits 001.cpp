#include <iostream>
#include <string>

using namespace std;

class Person {
	public:
		
		int weight, height;
		string color, gender, name;
	};
	
int main() {
	Person x;
		x.weight = 50;
		x.height = 160;
		x.name = "Juan";
		x.color = "Brown";
		x.gender = "Male";
		
			cout << "Person " << x.name << " is " << x.weight << " kg and " << x.height << " cm." << endl;
			cout << "Also his/her color is " << x.color << " and his gender is " << x.gender << endl;
			
system("pause");
}
