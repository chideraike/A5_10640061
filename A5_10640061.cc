#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct student
{
         int id;
         string name;
         int Age;
         string Gender;
         float Score;
};

int main(){
    ofstream file;
    file.open("StudentsGrades.txt");

    const int noOfStudents = 5;
    student students[noOfStudents];
    int totalAge, averageAge, femalecount, malecount;
    float totalScore, averageScore;

    for ( int i = 0; i < noOfStudents; i++ )
    {
        cout << endl;
        cout << "Enter data for Student " << i + 1 << endl;
        cout << "Enter the Student's Name : ";
        cin >> students[i].name;
        cout << "Enter the Student's ID: ";
        cin >> students[i].id;
        cout << "Enter the Student's Age : ";
        cin >> students[i].Age;
        cout << "Enter the Student's Gender : ";
        cin >> students[i].Gender;
        cout << "Enter the Student's Score : ";
        cin >> students[i].Score;

        if(students[i].Score>=80){
            cout << "Grade: A" << endl;
        }else{
                if(students[i].Score>=70){
                    cout << "Grade: B" << endl;
                }else{
                    if(students[i].Score>=60){
                        cout << "Grade: C" << endl;
                    }else{
                        if(students[i].Score>=50){
                            cout << "Grade: D" << endl;
                        }else{
                            if(students[i].Score>=40){
                                cout << "Grade: E" << endl;
                            }else{
                                cout << "Grade: F" << endl;
                                    }
                        }
                    }
                }
        }
        if(students[i].Gender=="male"){
            malecount++;
        }else if(students[i].Gender=="female"){
            femalecount++;
        }
    }

     for ( int j = 0; j < noOfStudents; j++ )
     {
        totalAge = totalAge + students[j].Age ;
        totalScore = totalScore + students[j].Score ;

     }

     averageAge = totalAge / noOfStudents ;
     file << "\n The average age is : " << averageAge;
     averageScore = totalScore / noOfStudents ;
     file << "\n The average Score is : " << averageScore;
     file << "\n Male Count: " << malecount;
     file << "\n Female Count: " << femalecount;


     file.close();
     std::cin.get();
     return 0;
}
