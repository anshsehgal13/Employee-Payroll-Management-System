#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Employee {
protected:
    string name;       
    double basicSalary;
    int employeeID;

public:

    Employee(){
        employeeID = 0001;
        basicSalary = 10000;
        name = "Akash";
    }
    Employee(string employeename, double salary, int ID) {
        employeeID = ID;
        basicSalary = salary;
        name = employeename;
    }

    void display() {
        cout << "The name of employee is: " << name << endl;
        cout << "The employee ID is: " << employeeID << endl;
    }
    
    virtual void displayInfo() = 0;
};

class Manager : public Employee {
private:
    double bonus , Dearness , houserent , conveyance , medical , totalSalary ;
    double tax1 , tax2 , profund ;
public:
    Manager(string employeename, double salary, int ID) : Employee(employeename, salary, ID) {
        bonus = basicSalary / 2;
        Dearness = (basicSalary *10)/100;
        houserent =  basicSalary / 2;
        conveyance = basicSalary * 0.04;
        medical = (basicSalary *10)/100;
        
        tax1 = basicSalary*0.01;
        tax2 = (basicSalary*30)/100;
        profund = basicSalary*0.045;
        
        totalSalary = (basicSalary + bonus + Dearness + houserent + conveyance + medical) - (tax1 + tax2 + profund);
    }

    void displayInfo() override{
        Employee::display();
        cout << "EARNINGS \n\n";
    cout << left << setw(5) << "Srno" << setw(25) << "Salary Head" << "Amount(Rs)" << endl;
    cout << left << setw(5) << "1" << setw(25) << "Basic Salary " << basicSalary <<endl;
    cout << left << setw(5) << "2" << setw(25) << "Dearness Allowance" << Dearness << endl;
    cout << left << setw(5) << "3" << setw(25) << "House rent Allowance" << houserent << endl;
    cout << left << setw(5) << "4" << setw(25) << "Conveyance Allowance" << conveyance << endl;
    cout << left << setw(5) << "5" << setw(25) << "Medical Allowance" << medical << endl;
    cout << left << setw(5) << "6" << setw(25) << "Bonus" << bonus << endl;
    cout << "\nTotal = " << Dearness + houserent + conveyance + medical + bonus + basicSalary << endl;

    cout << "\nDEDUCTIONS \n\n";
    cout << left << setw(5) << "Srno" << setw(25) << "Salary Head" << "Amount(Rs)" << endl;
    cout << left << setw(5) << "1" << setw(25) << "Professional Tax" << tax1 << endl;
    cout << left << setw(5) << "2" << setw(25) << "Tax deduction source" << tax2 << endl;
    cout << left << setw(5) << "3" << setw(25) << "Provident Fund" << profund << endl;
    cout << "\nTotal = " << tax1 + tax2 + profund << endl;

    cout << "\nTotal Salary = " << totalSalary << endl;
    }
};

class Engineer : public Employee {
private:
	int hrs ;
    double overtime , Dearness , houserent , conveyance , medical , totalSalary ;
    double tax1 , tax2 , profund ;

public:
    Engineer(string employeename, double salary, int ID) : Employee(employeename, salary, ID) {
        cout << "Enter overtime in hrs: ";
        cin >> hrs;
        overtime = hrs * 200;
        Dearness = (basicSalary *10)/100;
        houserent =  basicSalary / 2;
        conveyance = basicSalary * 0.04;
        medical = (basicSalary *10)/100;
        tax1 = basicSalary*0.01;
        tax2 = (basicSalary*30)/100;
        profund = basicSalary*0.045;
        totalSalary = (basicSalary + overtime + Dearness + houserent + conveyance + medical) - (tax1 + tax2 + profund);
    }
    void displayInfo() override {
        Employee::display();
        cout << "EARNINGS \n\n";
    cout << left << setw(5) << "Srno" << setw(25) << "Salary Head" << "Amount(Rs)" << endl;
    cout << left << setw(5) << "1" << setw(25) << "Basic Salary " << basicSalary <<endl;
    cout << left << setw(5) << "2" << setw(25) << "Dearness Allowance" << Dearness << endl;
    cout << left << setw(5) << "3" << setw(25) << "House rent Allowance" << houserent << endl;
    cout << left << setw(5) << "4" << setw(25) << "Conveyance Allowance" << conveyance << endl;
    cout << left << setw(5) << "5" << setw(25) << "Medical Allowance" << medical << endl;
    cout << left << setw(5) << "6" << setw(25) << "Bonus" << overtime << endl;
    cout << "\nTotal = " << Dearness + houserent + conveyance + medical + overtime + basicSalary << endl;

    cout << "\nDEDUCTIONS \n\n";
    cout << left << setw(5) << "Srno" << setw(25) << "Salary Head" << "Amount(Rs)" << endl;
    cout << left << setw(5) << "1" << setw(25) << "Professional Tax" << tax1 << endl;
    cout << left << setw(5) << "2" << setw(25) << "Tax deduction source" << tax2 << endl;
    cout << left << setw(5) << "3" << setw(25) << "Provident Fund" << profund << endl;
    cout << "\nTotal = " << tax1 + tax2 + profund << endl;
    cout << "\nTotal Salary = " << totalSalary << endl;
    }
};

class Technician : public Employee {
private:
    double bonus , Dearness , houserent , conveyance , medical , totalSalary ;
    double tax1 , tax2 , profund ;

public:
    Technician(string employeename, double salary, int ID) : Employee(employeename, salary, ID) {
        bonus = (basicSalary * 20) / 100;
       Dearness = (basicSalary *10)/100;
        houserent =  basicSalary / 2;
        conveyance = basicSalary * 0.04;
        medical = (basicSalary *10)/100;
        tax1 = basicSalary*0.01;
        tax2 = (basicSalary*30)/100;
        profund = basicSalary*0.045;
        totalSalary = (basicSalary + bonus + Dearness + houserent + conveyance + medical) - (tax1 + tax2 + profund);
    }

    void displayInfo() override {
        Employee::display();
        cout << "EARNINGS \n\n";
        cout << left << setw(5) << "Srno" << setw(25) << "Salary Head" << "Amount(Rs)" << endl;
        cout << left << setw(5) << "1" << setw(25) << "Basic Salary " << basicSalary <<endl;
        cout << left << setw(5) << "2" << setw(25) << "Dearness Allowance" << Dearness << endl;
        cout << left << setw(5) << "3" << setw(25) << "House rent Allowance" << houserent << endl;
        cout << left << setw(5) << "4" << setw(25) << "Conveyance Allowance" << conveyance << endl;
        cout << left << setw(5) << "5" << setw(25) << "Medical Allowance" << medical << endl;
        cout << left << setw(5) << "6" << setw(25) << "Bonus" << bonus << endl;
        cout << "\nTotal = " << Dearness + houserent + conveyance + medical + bonus + basicSalary << endl;

        cout << "\nDEDUCTIONS \n\n";
        cout << left << setw(5) << "Srno" << setw(25) << "Salary Head" << "Amount(Rs)" << endl;
        cout << left << setw(5) << "1" << setw(25) << "Professional Tax" << tax1 << endl;
        cout << left << setw(5) << "2" << setw(25) << "Tax deduction source" << tax2 << endl;
        cout << left << setw(5) << "3" << setw(25) << "Provident Fund" << profund << endl;
        cout << "\nTotal = " << tax1 + tax2 + profund << endl;

        cout << "\nTotal Salary = " << totalSalary << endl;
    }
};

int main() {
    double salaryManager, salaryEngineer, salaryTechnician;

    string managerName, engineerName, technicianName;
    
    int ID1, ID2, ID3;
    
    cout<<"Project Title: Employee Payroll Management System\n";
    cout<<"-------------------------------------\n";

    cout << "Enter name of manager: ";
    cin >> managerName;
    cout << "Enter basic salary of manager: ";
    cin >> salaryManager;
    cout << "Enter ID of manager: ";
    cin >> ID1;

    Manager manager(managerName, salaryManager, ID1);

    cout << "Enter name of Engineer: ";
    cin >> engineerName;
    cout << "Enter basic salary of Engineer: ";
    cin >> salaryEngineer;
    cout << "Enter ID of Engineer: ";
    cin >> ID2;

    Engineer engineer(engineerName, salaryEngineer, ID2);

    cout << "Enter name of Technician: ";
    cin >> technicianName;
    cout << "Enter basic salary of Technician: ";
    cin >> salaryTechnician;
    cout << "Enter ID of Technician: ";
    cin >> ID3;

    Technician technician(technicianName, salaryTechnician, ID3);
    
    cout<<"\n-------------------------------------------------\n";
    cout<<"Manager details \n";
    manager.displayInfo();
    
    cout<<"\n-------------------------------------------------\n";
    cout<<"Engineer details \n";
    engineer.displayInfo();
    
    cout<<"\n-------------------------------------------------\n"; 
    cout<<"Technician details \n";
    technician.displayInfo();
    
    return 0;
}
