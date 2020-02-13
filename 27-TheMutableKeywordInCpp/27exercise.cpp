// --------------------------------------------
#include <iostream>
#include <string>

class Entity{
	private:
		std::string m_Name = "Hello!";
	public:
		const std::string& GetName(){
			m_Name = "Hi!";
			return m_Name;
		}
};

int main (){

	Entity e;
	std::string str = e.GetName();
	str = "Bye";
	std::cout<< "---Starting Program---" << std::endl;
	std::cout<< str << std::endl;

	return 0;
}

// --------------------------------------------
#include <iostream>
#include <string>

class Entity{
	private:
		std::string m_Name = "Hello!";
	public:
		std::string& GetName() const{
			// m_Name = "Hi!"; // I can't this because of const
			return m_Name;
		}
};

int main (){

	Entity e;
	std::string str = e.GetName();
	str = "Bye";
	std::cout<< "---Starting Program---" << std::endl;
	std::cout<< str << std::endl;

	return 0;
}

// --------------------------------------------
#include <iostream>
#include <string>

class Entity{
	private:
		std::string m_Name = "Hello!";
	public:
		const std::string& GetName() const {
			// If I didn't put const here the code didn't work
			m_Name = "Hi!"; 
			return m_Name;
		}
};

int main (){

	const Entity e;
	std::string str = e.GetName(); 
	/*
	const class objects can only explicitly call const member functions
	*/
	return 0;
}

