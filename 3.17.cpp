#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

class HealthProfile {
private:
    std::string firstName;
    std::string lastName;
    std::string gender;
    int birthMonth;
    int birthDay;
    int birthYear;
    int height;  
    int weight;  

public:
  
    HealthProfile(std::string fName, std::string lName, std::string gen, int bMonth, int bDay, int bYear, int h, int w)
        : firstName(fName), lastName(lName), gender(gen), birthMonth(bMonth), birthDay(bDay), birthYear(bYear), height(h), weight(w) {}


    void setFirstName(std::string fName) { firstName = fName; }
    void setLastName(std::string lName) { lastName = lName; }
    void setGender(std::string gen) { gender = gen; }
    void setBirthDate(int month, int day, int year) { birthMonth = month; birthDay = day; birthYear = year; }
    void setHeight(int h) { height = h; }
    void setWeight(int w) { weight = w; }

    
    std::string getFirstName() const { return firstName; }
    std::string getLastName() const { return lastName; }
    std::string getGender() const { return gender; }
    void getBirthDate(int &month, int &day, int &year) const { month = birthMonth; day = birthDay; year = birthYear; }
    int getHeight() const { return height; }
    int getWeight() const { return weight; }

    
    int getAge() const {
        time_t t = time(0);  
        struct tm *now = localtime(&t);
        int currentYear = now->tm_year + 1900;
        int currentMonth = now->tm_mon + 1;
        int currentDay = now->tm_mday;

        int age = currentYear - birthYear;
        if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
            age--;
        }
        return age;
    }

    
    int getMaximumHeartRate() const {
        return 220 - getAge();
    }

    
    void getTargetHeartRate(int &lowerBound, int &upperBound) const {
        int maxHeartRate = getMaximumHeartRate();
        lowerBound = static_cast<int>(maxHeartRate * 0.50);
        upperBound = static_cast<int>(maxHeartRate * 0.85);
    }

    
    double calculateBMI() const {
        return (static_cast<double>(weight) / (height * height)) * 703;
    }

    
    void printBMIValuesChart() const {
        std::cout << "\nBMI Values Chart:\n";
        std::cout << std::setw(20) << "BMI" << std::setw(30) << "Weight Status" << std::endl;
        std::cout << std::setw(20) << "< 18.5" << std::setw(30) << "Underweight" << std::endl;
        std::cout << std::setw(20) << "18.5 - 24.9" << std::setw(30) << "Normal weight" << std::endl;
        std::cout << std::setw(20) << "25.0 - 29.9" << std::setw(30) << "Overweight" << std::endl;
        std::cout << std::setw(20) << "30.0 and above" << std::setw(30) << "Obesity" << std::endl;
    }
};

int main() {
    
    std::string firstName, lastName, gender;
    int birthMonth, birthDay, birthYear, height, weight;

    
    std::cout << "Enter your first name: ";
    std::cin >> firstName;
    std::cout << "Enter your last name: ";
    std::cin >> lastName;
    std::cout << "Enter your gender: ";
    std::cin >> gender;
    std::cout << "Enter your birth month (1-12): ";
    std::cin >> birthMonth;
    std::cout << "Enter your birth day (1-31): ";
    std::cin >> birthDay;
    std::cout << "Enter your birth year: ";
    std::cin >> birthYear;
    std::cout << "Enter your height (in inches): ";
    std::cin >> height;
    std::cout << "Enter your weight (in pounds): ";
    std::cin >> weight;

   
    HealthProfile person(firstName, lastName, gender, birthMonth, birthDay, birthYear, height, weight);

    
    std::cout << "\nName: " << person.getFirstName() << " " << person.getLastName() << std::endl;
    std::cout << "Gender: " << person.getGender() << std::endl;
    std::cout << "Age: " << person.getAge() << " years" << std::endl;
    std::cout << "Height: " << person.getHeight() << " inches" << std::endl;
    std::cout << "Weight: " << person.getWeight() << " pounds" << std::endl;

    
    double bmi = person.calculateBMI();
    std::cout << "BMI: " << std::fixed << std::setprecision(2) << bmi << std::endl;

    
    int maxHeartRate = person.getMaximumHeartRate();
    std::cout << "Maximum Heart Rate: " << maxHeartRate << " bpm" << std::endl;

    
    int lowerBound, upperBound;
    person.getTargetHeartRate(lowerBound, upperBound);
    std::cout << "Target Heart Rate: " << lowerBound << " - " << upperBound << " bpm" << std::endl;

    
    person.printBMIValuesChart();

    return 0;
}

