#include <iostream>
#include <string>

/*
In Cpp exist the concept of mutable and immutable.
Mutable refers to constants and lambdas.
A mutable const can change
*/

class Entity{
	private:
		std::string m_Name;
	public:
		const std::string& GetName() const {
			/*
			In this method the first const identifies the return value of the method 
			that in this case is a const string: it means that I can't modify the content 
			of the string returned by the method
			The second const indicates that the method can't modify the class Entity
			*/

			m_Name = "Hi!"; // It is prohibited becuause of the second const

			return m_Name
		}
};

int main (){

	const Entity e;

	return 0;
}