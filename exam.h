#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Exam {
private:
    string studentName;
    float midterm1;
    float midterm2;
    float finalExam;
    float average;

public:
    
    Exam();

    
    void readData(ifstream& inFile);

    
    void calculateAverage();

   
    void writeData(ofstream& outFile) const;
};
