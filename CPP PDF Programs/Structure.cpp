#include<iostream>
#include<string>

struct Person {
	std::string name;
	int age;
	float height;
 };

int main() {
 	Person john = {"John Doe", 30, 5.9f};
 	std::cout <<"Name: "<< john.name <<"\nAge: "<<john.age<<"\nHeight: "<<john.height<< std::endl;
 	return 0;
}
