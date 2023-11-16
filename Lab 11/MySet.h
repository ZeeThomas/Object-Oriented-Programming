#pragma once
class MySet
{
	private:
		unsigned range;
		int size;
		bool* set;
	public:
		MySet(unsigned);
		MySet(const MySet& p);
		~MySet();
		void insertElement(int k);
		void deleteElement(int k);
		void printSet();
		bool isEqualTo(const MySet&);
};

