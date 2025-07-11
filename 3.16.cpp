#include <iostream>
#include <ctime>

class HeartRates {
private:
    std::string firstName;
    std::string lastName;
    int birthMonth;
    int birthDay;
    int birthYear;

public:
    HeartRates(std::string fName, std::string lName, int bMonth, int bDay, int bYear)
        : firstName(fName), lastName(lName), birthMonth(bMonth), birthDay(bDay), birthYear(bYear) {}

    void setFirstName(std::string fName) {
        firstName = fName;
    }

    void setLastName(std::string lName) {
        lastName = lName;
    }

    void setBirthDate(int month, int day, int year) {
        birthMonth = month;
        birthDay = day;
        birthYear = year;
    }

    std::string getFirstName() {
        return firstName;
    }

    std::string getLastName() {
        return lastName;
    }

    void getBirthDate(int &month, int &day, int &year) {
        month = birthMonth;
        day = birthDay;
        year = birthYear;
    }

    int getAge() {
        int currentMonth, currentDay, currentYear;
        std::cout << "Enter the current month (1-12): ";
        std::cin >> currentMonth;
        std::cout << "Enter the current day (1-31): ";
        std::cin >> currentDay;
        std::cout << "Enter the current year (e.g., 2024): ";
        std::cin >> currentYear;

        int age = currentYear - birthYear;
        if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
            age--;
        }
        return age;
    }

    int getMaximumHeartRate() {
        return 220 - getAge();
    }

    void getTargetHeartRate(int &lowerBound, int &upperBound) {
        int maxHeartRate = getMaximumHeartRate();
        lowerBound = static_cast<int>(maxHeartRate * 0.50);
        upperBound = static_cast<int>(maxHeartRate * 0.85);
    }
};

int main() {
    std::string firstName, lastName;
    int birthMonth, birthDay, birthYear;

    std::cout << "Enter your first name: ";
    std::cin >> firstName;
    std::cout << "Enter your last name: ";
    std::cin >> lastName;

    std::cout << "Enter your birth month (1-12): ";
    std::cin >> birthMonth;
    std::cout << "Enter your birth day (1-31): ";
    std::cin >> birthDay;
    std::cout << "Enter your birth year: ";
    std::cin >> birthYear;

    HeartRates person(firstName, lastName, birthMonth, birthDay, birthYear);

    std::cout << "\nName: " << person.getFirstName() << " " << person.getLastName() << std::endl;

    int age = person.getAge();
    std::cout << "Age: " << age << " years" << std::endl;

    int maxHeartRate = person.getMaximumHeartRate();
    std::cout << "Maximum Heart Rate: " << maxHeartRate << " bpm" << std::endl;

    int lowerBound, upperBound;
    person.getTargetHeartRate(lowerBound, upperBound);
    std::cout << "Target Heart Rate: " << lowerBound << " - " << upperBound << " bpm" << std::endl;

    return 0;
}
