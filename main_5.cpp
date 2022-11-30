
#include <iostream>
using namespace std;
#define kilkist_stud 3
#define kilkist_marks 3
class student
{
    private:
    string Indf_date;
    int grates[kilkist_marks];
    public:
    void InputMatrix()
    {
        for (int j=0;j<kilkist_marks;j++)
        {
            cout<<"["<<j+1<<"] = ";
            cin>>grates[j];
        }
    }
    float ntd() {
        float sum=0;
        for( int i=0; i<kilkist_marks; i++)
        {
            sum+=grates[i];
        }
        sum=sum/kilkist_marks;
        return sum;
    }
};
class groupOFstudents: public student
{
private:
    float raytynh[kilkist_stud] = {0};
   
 public:
    int getTOP(float serBal){
        for (int w = 0; w < kilkist_stud; w++){
            if (raytynh[w] == serBal) {
                return w+1;
            }
        }
        return 0;
    }
    
    void addStudentMark(float mark){
        for (int y = 0; y < kilkist_stud; y++){
            if (raytynh[y] == 0) {
                raytynh[y] = mark;
                break;
            } else if (raytynh[y] == mark){
                break;
            }
        }
    }
    
    void reitung (){
        for (int j = 0; j < kilkist_stud - 1; j++){
            for (int i=0; i<kilkist_stud-1; i++ ){
                if (raytynh[i] < raytynh[i+1]){
                    float temp=raytynh[i];
                    raytynh[i]=raytynh[i+1];
                    raytynh[i+1] = temp;
                }
            }
        }
    }
};




int main(int argc, const char * argv[])
{
    student Vasyl;
    cout<<"greats"<<endl;
    Vasyl.InputMatrix();
    cout<<"Vasyl GPA= "<< Vasyl.ntd() <<endl<<endl;
    
    student Maksym;
    cout<<"greats"<<endl;
    Maksym.InputMatrix();
    cout<<"Maksym GPA= "<< Maksym.ntd() <<endl<<endl;
    
    student Nika;
    cout<<"greats"<<endl;
    Nika.InputMatrix();
    cout<<"Nika GPA= "<< Nika.ntd() <<endl<<endl;
    
    groupOFstudents IR_15;
    IR_15.addStudentMark(Vasyl.ntd());
    IR_15.addStudentMark(Maksym.ntd());
    IR_15.addStudentMark(Nika.ntd());
    IR_15.reitung();
    cout << "Vasyl " << IR_15.getTOP(Vasyl.ntd()) << endl;
    cout << "Maksym " << IR_15.getTOP(Maksym.ntd()) << endl;
    cout << "Nika " << IR_15.getTOP(Nika.ntd()) << endl;
    
    return 0;
}

