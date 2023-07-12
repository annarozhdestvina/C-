#include <iostream>
#include <string>

class Worker {
private:
    std::string m_name;
public:
    Worker(std::string name) : m_name(name) {}

    std::string getName() {
        return m_name;
    }
};

class Department {
private:
    Worker *m_worker;

public:
    Department(Worker *worker = nullptr) : m_worker(worker) {}
};

int main() {
    Worker *worker = new Worker("Anton"); 
    {
        Department department(worker);
    }

    std::cout << worker->getName() << " still exists!";

    delete worker;
    return 0;
}