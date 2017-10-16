#ifndef BORG
#define BORG

class Borg{
	public:
		Borg(int ordinalIn); 
		void attack();
	private:
		int ordinal;
		static int borgCount;
};

#endif
