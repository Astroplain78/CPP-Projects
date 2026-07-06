#include <iostream>
#include <iomanip>

// Function to calculate GPA
float calculateGPA(int totalCoursePoints, int totalCredits) {
    if (totalCredits == 0) {
        return 0.0; // Avoid division by zero
    }
    return static_cast<float>(totalCoursePoints) / totalCredits;
}

int main(){

    float gpa = 0.0;
    int credits = 0;
    const char stipulation = 'Q';
    const char stipulation2 = 'q';
    char answer = 'a';
    // int courseCount = 0;
    int coursePoints = 0;
    int totalCoursePoints = 0;

    // Prompt the user for initial course information
    std::cout << "would you like to continue or quit? (Q or q to Quit)" << std::endl;
    std::cin >> answer;
    
    // Loop to collect course information until the user decides to quit
    while (answer != 'Q' && answer != 'q') {
        int additional_credits = 0;
        float additional_gpa = 0.0;  
        
        std::cout << "How many credits is the course worth?" << std::endl;
        std::cin >> additional_credits;
        credits += additional_credits;
        std::cout << "total credits: " <<credits << std::endl;

        std::cout << "What was your GPA in the course?" << std::endl;
        std::cin >> additional_gpa;
        totalCoursePoints += additional_gpa * additional_credits;
        std::cout << "Total Course Points: " << totalCoursePoints << std::endl;

        std::cout << "would you like to continue or quit?" << std::endl;
        std::cin >> answer;

    };
    
    // Calculate and display the final GPA
    std::cout << "Your final Communalitive GPA is: " << std::endl;
    float finalGPA = calculateGPA(totalCoursePoints, credits);
    std::cout << "Your final Communalitive GPA is: " 
              << std::fixed << std::setprecision(2) << finalGPA 
              << std::endl;

    return 0;
}


