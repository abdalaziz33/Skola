#include "SchoolSystem.h"
#include"Menu.cpp"



void SchoolSystem::Run()
{
	// menu filen döps till m och används

	Menu m;
	while (true)
	{
		m.MENU();


		return ;
	}
}

void SchoolSystem::AddStudent()
{
	Student student;
	student.name = "Blabla";
	student.age = 123;
	students.push_back(student);
}

void SchoolSystem::RemoveStudent()
{
}
