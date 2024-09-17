# Sign-up-Application
# Project Overview
This project is a simple C++ console application that allows users to manage records of individuals, including adding new records and fetching existing ones by their unique IDs. It demonstrates the use of classes, arrays, and basic I/O operations to simulate a simple database of users.

# Features
Add Record: Users can add a new person's name and age to the system, which automatically assigns a unique ID.
Fetch Record: Users can retrieve a person's details (name and age) by entering the ID associated with that record.
Simple Menu Interface: The program provides a console-based menu for easy interaction, allowing users to select options to add or fetch records.
Record Limit: The system is designed to store up to 100 records (modifiable by changing the N constant).
Error Handling: The program checks for invalid IDs and prevents the user from adding more records if the system reaches its storage limit.
File Structure
main.cpp: The main source file containing the entire program.
# Compilation & Execution
Compile: Use the following command to compile the program:

bash
g++ -o person_records main.cpp
Run: After compilation, run the executable:

bash
./person_records

# Class Structure
person
This class represents a single person and contains the following properties:

std::string name: Stores the person's name.
int age: Stores the person's age.
int id: A unique identifier for each person.
Methods:
void AddRecord(const std::string& name, int age): Adds a new record with the provided name and age, automatically assigning a unique ID.
void FetchRecord(int id): Fetches and displays the name and age of the person corresponding to the given ID.
Global Variables:
std::array<person, N> arr: Stores the records of people in a static array with a size of N (default is 100).
static int current_id: Keeps track of the current ID to ensure each record has a unique identifier.
Usage
# Once you run the program, you'll be prompted with the following options:

Please select an option:
1: Add Record
2: Fetch Record
3: Quit
Adding a Record:
Select option 1.
Enter the person's name and age when prompted.
The system will store the person's details and assign them a unique ID.
Fetching a Record:
Select option 2.
Enter the ID of the person whose details you want to fetch.
The system will display the person's name and age, or return an error if the ID is invalid.
Exiting the Program:
Select option 3 to quit the program.
Example Session
yaml
Copy code
Please select an option:
1: Add Record
2: Fetch Record
3: Quit

Enter Option:
1
Add User. Please enter your name and age
Name: John
Age: 25
User record added successfully

Please select an option:
1: Add Record
2: Fetch Record
3: Quit

Enter Option:
2
Fetch User. Please enter user ID
User ID: 0
User name: John
User age: 25

Please select an option:
1: Add Record
2: Fetch Record
3: Quit

# Limitations
The program can only store up to 100 records (modifiable by changing the N constant).
When adding records, the input format for name and age is simple (no input validation for strings or age is implemented).
