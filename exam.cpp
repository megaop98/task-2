#include "exam.h"


Exam::Exam() : studentName(""), midterm1(0), midterm2(0), finalExam(0), average(0) {}


void Exam::readData(ifstream& inFile) {
    inFile >> studentName >> midterm1 >> midterm2 >> finalExam;
}


void Exam::calculateAverage() {
    average = 0.25 * midterm1 + 0.25 * midterm2 + 0.5 * finalExam;
}


void Exam::writeData(ofstream& outFile) const {
    outFile << studentName << " " << midterm1 << " " << midterm2 << " " << finalExam << " " << average << endl;
}
