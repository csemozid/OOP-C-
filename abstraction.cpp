// C++ program to implement
// Interface
#include <iostream>
#include <string>
using namespace std;

// Interface(Abstract class
// with pure virtual function)
class GFG
{
public:
	virtual string returnString() = 0;
};

class child : public GFG
{
public:
	string returnString()
	{
	return "GeeksforGeeks";
	}
    void show() {
        cout << "Hello I'm from Child class" << endl;
    }
};

// Driver code
int main()
{
	child childObj, childObj2;
	GFG* ptr;
	ptr = &childObj;
    ptr = &childObj2;
	cout << ptr->returnString() << endl;
    
    cout << ptr->returnString() << endl;
    // childObj.show();
    // cout << childObj.returnString();
	return 0;
}
