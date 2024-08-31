#include <iostream>
#include <string>
using namespace std;

// Base class for Patient Information
class Patient {
protected:
    string patientName;
    int bedNumber;
    string wardName;

public:
    void inputPatientDetails() {
        cout << "Enter Patient Name: ";
        cin >> patientName;
        cout << "Enter Bed Number: ";
        cin >> bedNumber;
        cout << "Enter Ward Name: ";
        cin >> wardName;
    }

    void displayPatientDetails() {
        cout << "Patient Name: " << patientName << endl;
        cout << "Bed Number: " << bedNumber << endl;
        cout << "Ward Name: " << wardName << endl;
    }
};

// Derived class for Doctor Information
class Doctor : public Patient {
protected:
    string doctorName;
    string doctorateDegree;

public:
    void inputDoctorDetails() {
        cout << "Enter Doctor Name: ";
        cin >> doctorName;
        cout << "Enter Doctorate Degree: ";
        cin >> doctorateDegree;
    }

    void displayDoctorDetails() {
        cout << "Doctor Name: " << doctorName << endl;
        cout << "Doctorate Degree: " << doctorateDegree << endl;
    }
};

// Further derived class for Dues Information
class Dues : public Doctor {
private:
    int patientDues;

public:
    void inputDuesDetails() {
        cout << "Enter Dues of Patient: ";
        cin >> patientDues;
    }

    void displayDuesDetails() {
        cout << "Total Dues of Patient: " << patientDues << endl;
    }
};

int main() {
    Dues patientDetails;
    
    cout << "Enter Data" << endl;
    patientDetails.inputPatientDetails();
    patientDetails.inputDoctorDetails();
    patientDetails.inputDuesDetails();
    
    cout << "\nInserted Data is:" << endl;
    patientDetails.displayPatientDetails();
    patientDetails.displayDoctorDetails();
    patientDetails.displayDuesDetails();

    return 0;
}
