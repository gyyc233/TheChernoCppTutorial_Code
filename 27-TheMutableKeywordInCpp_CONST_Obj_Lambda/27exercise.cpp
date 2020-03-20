// --------------------------------------------
#include <iostream>
#include <string>

class Entity{
	private:
		std::string m_Name = "Hello!";
	public:
		std::string& GetName(){
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
			// m_Name = "Hi!"; 
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
// --------------------------------------------
// --------------------------------------------
#include <iostream>
#include <string>

class Entity{
	private:
		std::string m_Name = "Hello!";
	public:
		std::string& GetName() {
			m_Name = "Hi!"; 
			return m_Name;
		}
};

int main (){

	const Entity e;
	std::string str = e.GetName(); // Doesn't work
	/*
	const class objects can only explicitly call const member functions
	*/
	return 0;
}

// --------------------------------------------
#include <iostream>
#include <string>

class Entity{
	private:
		std::string m_Name = "Hello!";
	public:
		const std::string& GetName() {
			m_Name = "Hi!"; 
			return m_Name;
			/*
				This doesn't work either because const method should not modify the class memebers
				for this reason the second const is needed after GetName()
				A const object (const Entity e) can only call const methods (const std::string& GetName())
				but the const method should not modify the class members so they need an additional const 
				const std::string& GetName() const
			*/
		}
};

int main (){

	const Entity e;
	std::string str = e.GetName(); // Doesn't work
	/*
	const class objects can only explicitly call const member functions
	*/
	return 0;
}

// --------------------------------------------
#include <iostream>
#include <string>

class Entity{
	private:
		std::string m_Name = "Hello!";
	public:
		std::string& GetName() const {
			// m_Name = "Hi!"; // Because it's a const method I can't change the class variable
			return m_Name; 
			/*
			Doesn't work because GetName is not a const method.
			The const I used just says that GetName won't change the class members
			*/
		}
};

int main (){

	const Entity e;
	std::string str = e.GetName(); // Doesn't work
	/*
	const class objects can only explicitly call const member functions
	*/
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
			// m_Name = "Hi!"; // Because it's a const method I can't change the class variable
			return m_Name;
		}
};

int main (){

	const Entity e;
	std::string str = e.GetName(); // WORKS!!!
	/*
	const class objects can only explicitly call const member functions
	*/
	return 0;
}

