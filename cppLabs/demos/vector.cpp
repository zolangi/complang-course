#include <iostream> 
#include <vector>
using namespace std;


int main(){
	vector <int> v;
	cout << "size " << v.size() << " capacity " << v.capacity() << endl;
	for(int i = 0; i < 10; i++) v.push_back(i);	
	cout << "size " << v.size() << " capacity " << v.capacity() << endl;

	for(int i = 0; i < (int) v.size(); i++) cout << v[i] << " ";
	cout << endl;	
	
	v.push_back(v.size());
	cout << "size " << v.size() << " capacity " << v.capacity() << endl;
	for(int i = 0; i < (int) v.size(); i++) cout << v[i] << " ";
	cout << endl;	

	
	int currSize = (int) v.size();
	int currCap = (int) v.capacity();
	for(int i = currSize; i <= currCap; i++) v.push_back(i);
	cout << "size " << (int) v.size() << " capacity " << v.capacity() << endl;
	for (int i = 0; i < (int) v.size(); i++) cout << v[i] << " ";
	cout << endl;	

	v[0] = 42;
	for (int i = 0; i < (int) v.size(); i++) cout << v[i] << " ";
	cout << endl;	
		
	return 0;	
}
