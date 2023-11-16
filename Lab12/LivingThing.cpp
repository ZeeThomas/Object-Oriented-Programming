#include <iostream>
using namespace std;
class LivingThing
{
	public:
		LivingThing()
		{
			cout << "+ Living Thing constructor called\n";
		}
		~LivingThing()
		{
			cout << "# Living Thing destructor called\n";
		}
		virtual void toString() const
		{
			cout << "=Living Thing toString called\n";
		}
};
class Animal : public LivingThing
{
public:
	Animal()
	{
		cout << "++ Animal constructor called\n";
	}
	~Animal()
	{
		cout << "## Animal destructor called\n";
	}
	void toString() const
	{
		cout << "==Animal toString called\n";
	}
};
class Plant : public LivingThing
{
public:
	Plant()
	{
		cout << "++Plant constructor called\n";
	}
	~Plant()
	{
		cout << "## Plant destructor called\n";
	}
	void toString() const
	{
		cout << "==Plant toString called\n";
	}
};
class Fish : public Animal
{
public:
	Fish()
	{
		cout << "+++Fish constructor called\n";
	}
	~Fish()
	{
		cout << "### Fish destructor called\n";
	}
	void toString() const
	{
		cout << "===Fish toString called\n";
	}
};
class Mammal : public Animal
{
public:
	Mammal()
	{
		cout << "+++Mammal constructor called\n";
	}
	~Mammal()
	{
		cout << "### Mammal destructor called\n";
	}
	void toString() const
	{
		cout << "===Mammal toString called\n";
	}
};
class Succulent : public Plant
{
public:
	Succulent()
	{
		cout << "+++ Succulent constructor called\n";
	}
	~Succulent()
	{
		cout << "### Succulent destructor called\n";
	}
	void toString() const
	{
		cout << "=== Succulent toString called\n";
	}
};
class Tuna : public Fish
{
public:
	Tuna()
	{
		cout << "++++Tuna constructor called\n";
	}
	~Tuna()
	{
		cout << "#### Tuna destructor called\n";
	}
	void toString() const
	{
		cout << "==== Tuna toString called\n";
	}
};
class Salmon : public Fish
{
public:
	Salmon()
	{
		cout << "++++ Salmon constructor called\n";
	}
	~Salmon()
	{
		cout << "#### Salmon destructor called\n";
	}
	void toString() const
	{
		cout << "==== Salmon toString called\n";
	}
};
class Dog : public Mammal
{
public:
	Dog()
	{
		cout << "++++ Dog constructor called\n";
	}
	~Dog()
	{
		cout << "#### Dog destructor called\n";
	}
	void toString() const
	{
		cout << "==== Dog toString called\n";
	}
};
class Cacti : public Succulent
{
public:
	Cacti()
	{
		cout << "++++ Cacti constructor called\n";
	}
	~Cacti()
	{
		cout << "#### Cacti destructor called\n";
	}
	void toString() const
	{
		cout << "==== Cacti toString called\n";
	}
};
class Aloe : public Succulent
{
public:
	Aloe()
	{
		cout << "++++ Aloe constructor called\n";
	}
	~Aloe()
	{
		cout << "#### Aloe destructor called\n";
	}
	void toString() const
	{
		cout << "==== Aloe toString called\n";
	}
};
class Wolf : public Dog
{
public:
	Wolf()
	{
		cout << "+++++ Wolf constructor called\n";
	}
	~Wolf()
	{
		cout << "##### Wolf destructor called\n";
	}
	void toString()const
	{
		cout << "===== Wolf toString called\n";
	}
};
class Fox : public Dog
{
public:
	Fox()
	{
		cout << "+++++ Fox constructor called\n";
	}
	~Fox()
	{
		cout << "##### Fox destructor called\n";
	}
	void toString()const
	{
		cout << "===== Fox toString called\n";
	}
};
void display(const LivingThing*p) 
{
	cout << "Display ";
	(*p).toString();
}
int main()
{
	cout << "Create Tuna: " << endl;
	Tuna tuna;
	cout << endl;
	cout << "Create Salmon: " << endl;
	Salmon salmon;
	cout << endl;
	cout << "Create wolf: " << endl;
	Wolf wolf;
	cout << endl;
	cout << "Create fox: " << endl;
	Fox fox;
	cout << endl;
	cout << "Create cacti: " << endl;
	Cacti cacti;
	cout << endl;
	cout << "Create aloe: " << endl;
	Aloe aloe;
	cout << endl;
	cout << "Create Succulent: " << endl;

	Succulent succulent;
	succulent.toString();
	display(&succulent);
	cout << endl;
	cout << "Create Animal: " << endl;
	Animal tree;
	tree.toString();
	display(&tree);
	cout << endl;
	cout << "Call display on six objects"<<endl;
	display(&tuna);
	display(&salmon);
	display(&wolf);
	display(&fox);
	display(&cacti);
	display(&aloe);
	cout << endl;
	cout << "destruction started..." << endl;





}