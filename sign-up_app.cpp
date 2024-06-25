#include <iostream>
#include <array>
#include <string>

class person;
constexpr int N = 100;

class person {
public:
    std::string name;
    int age, id;
   

    void AddRecord(const std::string& name, int age);
    void FetchRecord(int id);
};

// Initialize static members
std::array<person, N>arr;
static int current_id = 0;

void person::AddRecord(const std::string& name, int age) {
    if (current_id >= N) {
        std::cout << "Cannot add more records, array is full.\n";
        return;
    }

    person new_record;
    new_record.name = name;
    new_record.age = age;
    new_record.id = current_id;

    arr[current_id] = new_record;
    std::cout << "User record added successfully\n";
    current_id++;
}

void person::FetchRecord(int id) {
    if (id < 0 || id >= current_id) {
        std::cout << "Invalid ID\n";
        return;
    }

    std::cout << "User name: " << arr[id].name << "\n"
              << "User age: " << arr[id].age << "\n\n";
}

int main() {
    while (true) {
        int op;
        std::cout << "Please select an option:\n";
        std::cout << "1: Add Record\n";
        std::cout << "2: Fetch Record\n";
        std::cout << "3: Quit\n\n";
        std::cout << "Enter Option:\n";
        std::cin >> op;

        switch (op) {
            case 1: {
                person user;
                int age;
                std::string name;
                std::cout << "Add User. Please enter your name and age\n";
                std::cout << "Name:";
                std::cin >> name;
                std::cout << "Age: ";
                std::cin >> age;
                user.AddRecord(name, age);
                break;
            }
            case 2: {
                int id;
                person user;
                std::cout << "Fetch User. Please enter user ID\n";
                std::cout << "User ID: ";
                std::cin >> id;
                user.FetchRecord(id);
                break;
            }
            case 3: {
                std::cout << "Exit code\n";
                return 0;
            }
            default: {
                std::cout << "Invalid option\n";
                break;
            }
        }
    }
    return 0;
}