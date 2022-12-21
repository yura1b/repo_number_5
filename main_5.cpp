#include "head.cpp"
#define number_of_stud 3
#define number_of_marks 3


int main(int argc, const char * argv[])
{
    student Vasyl;
    cout<<"greats"<<endl;
    Vasyl.InputMatrix();
    cout<<"Vasyl Average score= "<< Vasyl.CalculateTheAverageScore() <<endl<<endl;
    
    student Maksym;
    cout<<"greats"<<endl;
    Maksym.InputMatrix();
    cout<<"Maksym Average score= "<< Maksym.CalculateTheAverageScore() <<endl<<endl;
    
    student Nika;
    cout<<"greats"<<endl;
    Nika.InputMatrix();
    cout<<"Nika Average score= "<< Nika.CalculateTheAverageScore() <<endl<<endl;
    
    groupOFstudents IR_15;
    IR_15.AddStudentMark(Vasyl.CalculateTheAverageScore());
    IR_15.AddStudentMark(Maksym.CalculateTheAverageScore());
    IR_15.AddStudentMark(Nika.CalculateTheAverageScore());
    IR_15.Rating();
    cout << "Vasyl " << IR_15.GetTOP(Vasyl.CalculateTheAverageScore()) << endl;
    cout << "Maksym " << IR_15.GetTOP(Maksym.CalculateTheAverageScore()) << endl;
    cout << "Nika " << IR_15.GetTOP(Nika.CalculateTheAverageScore()) << endl;
    
    return 0;
}

