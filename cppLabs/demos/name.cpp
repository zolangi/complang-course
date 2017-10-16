#include <iostream>
using namespace std;
class Name{
	public:
		void setLast(string in);
		void setFirst(string in);
		string getName() const;
		
	private:
		string first;
		string last;
};
void Name::setLast(string in){last = in;}
void Name::setFirst(string in){first = in;}
string Name:: getName() const{return last + ", " + first;}

int main(){
	Name n;
	n.setLast("Smith"); 	
	n.setFirst("Winston");
	cout << n.getName() << endl;
	return 0;
}

