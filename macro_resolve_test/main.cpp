#include <iostream>

using namespace std;



#define REGISTER_TASK(Task, type, subtype) template<> TaskRegistrar<Task> TaskRegistrar<Task>::object(type, subtype);



template <typename Task>
class TaskRegistrar
{
	static TaskRegistrar object;

public:
	TaskRegistrar(const std::string& type, const std::string& subtype)
	{
		std::cout << "SURPRISE!" << std::endl;
	}
};



class A {};
REGISTER_TASK(A, "one", "two")


int main()
{
	return 0;
}