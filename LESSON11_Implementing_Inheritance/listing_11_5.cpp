
 //Listing . Overriding a base class method in a derived class
 #include <iostream>
 using std::cout;

 enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB }; 
 class Mammal
 {
	 public:
 // constructors
 Mammal() { cout << "Mammal constructor...\n"; }
 ~Mammal() { cout << "Mammal destructor...\n"; }

 //Other methods
 void Speak()const { cout << "Mammal sound!\n"; }
 void Sleep()const { cout << "shhh. I’m sleeping.\n"; }

	 protected:
 int itsAge;
 int itsWeight;
 };

 class Dog : public Mammal
 {
	 public:
 // Constructors
 Dog() : itsBreed (GOLDEN) { cout << "Dog constructor...\n"; }
 ~Dog(){ cout << "Dog destructor...\n"; }

 // Other methods
 void WagTail() const { cout << "Tail wagging...\n"; }
 void BegForFood() const { cout << "Begging for food...\n"; }
 void Speak() const { cout << "Woof!\n"; }

	 private:
 BREED itsBreed;
 };

 int main(void)
{
	Mammal bigAnimal;
	Dog Fido;
	bigAnimal.Speak();
	Fido.Speak();
	return 0;
}
