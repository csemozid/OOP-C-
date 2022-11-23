#include <iostream>
using namespace std;

class Myclass {
	private:
		string name;
	public:
		void setName(string name) {
			this->name = name;	
		}
        string getName() {
            return name;
        }
};

int main() {
    Myclass ob;
    ob.setName("Abdul Mozid");
    cout << ob.getName() << endl;
}