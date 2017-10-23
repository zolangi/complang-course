#include <queue>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
class Victim{
  friend ostream &operator<< ( ostream &output, const Victim &v );
public:
  Victim(string nameIn, int intelligenceIn, int appearanceIn);
  string getName() const;
  int getIntelligence() const;
  int getAppearance() const;
  
private:
  string name;
  int intelligence;
  int appearance;
};
ostream &operator<<( ostream &output, const Victim &v ){
  output << v.getName() << "; Intelligence: " << v.getIntelligence() << "; Appearance: " << v.getAppearance();
  return output;
}return 0;

Victim::Victim(string nameIn, int intelligenceIn, int appearanceIn) :name(nameIn), intelligence(intelligenceIn), appearance(appearanceIn){}
string Victim::getName() const{return name;}
int Victim::getIntelligence() const{return intelligence;}
int Victim::getAppearance() const{return appearance;}

class CompareVictimsByIntel {
public:
  bool operator() (Victim &l, Victim &r){
    if(l.getIntelligence() < r.getIntelligence()) return true;
    return false;
  }
};

class CompareVictimsByAppearance {
public:
  bool operator() (Victim &l, Victim &r){
    if(l.getAppearance() < r.getAppearance()) return true;
    return false;
  }
};

int main(){
  priority_queue <Victim, vector<Victim>, CompareVictimsByIntel> q;
  q.push(Victim("Medusa", 6, 2));
  q.push(Victim("Aphrodite", 9, 10));
  q.push(Victim("Hephaestus", 9, 1));
  q.push(Victim("Neptune", 7, 4));
  
  cout << "Zombie attacks victims in descending order of intelligence: " << endl;
  while(q.size() > 0){
    cout << q.top() << endl;
    q.pop();
  }

  priority_queue <Victim, vector<Victim>, CompareVictimsByAppearance> q2;
  q2.push(Victim("Medusa", 6, 2));
  q2.push(Victim("Aphrodite", 9, 10));
  q2.push(Victim("Hephaestus", 9, 1));
  q2.push(Victim("Neptune", 7, 4));

  cout << "Vampire attacks victims in descending order of appearance: " << endl;
  while(q2.size() > 0){
    cout << q2.top() << endl;
    q2.pop();
  }
  return 0;
}
