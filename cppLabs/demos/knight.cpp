#include <iostream>
#include <vector>

using namespace std;

class Knight{
		
	public:	
		// constructor prototypes
		Knight() = default;		// creates default constructor even though there is a programmer-defined constructor
		Knight(string nameIn, string questIn, string colorIn); 
				
		// setter prototypes
		void setName(string nameIn);
		void setQuest(string questIn);
		void setFavoriteColor(string colorIn);

		// getter prototypes
		string getName() const;
		string getQuest() const;
		string getFavoriteColor() const;						

		// other function prototypes
		void interrogate();
		void showAnswers();

				
		
	private:
		string name;
		string quest;
		string favoriteColor;
	
};

	// function definitions
	
	// constructor
	Knight::Knight(string nameIn, string questIn, string colorIn) : name(nameIn), quest(questIn), favoriteColor(colorIn){}
		
	void Knight::setName(string in){
			name = in;
	}

	string Knight::getName() const{
		return name;
	}

	void Knight::setQuest(string in){
		quest = in;
	}

	string Knight::getQuest() const{
		return quest;
	}

	void Knight::setFavoriteColor(string in){
		favoriteColor = in;
	}
		
	string Knight::getFavoriteColor() const{
		return favoriteColor;
	}
						
	void Knight::interrogate(){
		std::cout << "what is your name? ";
		getline(cin, name);
			
		std::cout << "what is your quest? ";
		getline(cin, quest);
			
		std::cout << "what is your favorite color? ";
		getline(cin, favoriteColor);
	}
		
	void Knight:: showAnswers() {
		std::cout  << "Name: " << name << "; Quest: " << quest << "; Favorite color: " << favoriteColor << endl;
	}


int main(){
	vector<Knight> knights;
	
	Knight firstKnight;															// default constructor invoked without explicit call
	firstKnight.setName("Arthur");
	firstKnight.setQuest("I seek the Holy Grail");
	firstKnight.setFavoriteColor("Blood Red");

	Knight secondKnight ("Lancelot", "I seek the Holy Grail", "Carotid Blue");				// "implicit" constructor call because we don;t name the constructor
	
	Knight thirdKnight = Knight("Lancelittle", "I seek the Holy Grail", "Violent Violet");  // "explicit" constructor call
		
	Knight fourthKnight{};
	fourthKnight.interrogate();
	
	knights.push_back(firstKnight);
	knights.push_back(secondKnight);
	knights.push_back(thirdKnight);
	knights.push_back(fourthKnight);
	
	
	for(Knight k: knights) k.showAnswers(); 
	
	cout << "Here is the first one again using getters: " << firstKnight.getName() << " " << firstKnight.getQuest() << " " << firstKnight.getFavoriteColor() << endl;
	
	return 0;
	
}
