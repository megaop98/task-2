#include "exam.h"

int main() {
    ifstream inFile("students_scores.txt"); 
    ofstream outFile("students_averages.txt");

    if (!inFile.is_open() || !outFile.is_open()) {
        cout << "Error: Could not open input or output file." << endl;
        return 1;
    }

    Exam studentExam;
    while (inFile.peek() != EOF) { 
       
        studentExam.readData(inFile);

       
        studentExam.calculateAverage();

        
        studentExam.writeData(outFile);
    }


    inFile.close();
    outFile.close();

    cout << "The data has been successfully processed. Check 'students_averages.txt' for results." << endl;
    return 0;
}
