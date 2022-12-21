#include <iostream>
using namespace std;
#define number_of_stud 3
#define number_of_marks 3
class student
{
    private:
    string IndeficationDate;
    int grates[number_of_marks];
    public:
    void InputMatrix()
    {
        for (int j=0;j<number_of_marks;j++)
        {
            cout<<"["<<j+1<<"] = ";
            cin>>grates[j];
        }
    }
    float CalculateTheAverageScore() {
        float sum=0;
        for( int i=0; i<number_of_marks; i++)
        {
            sum+=grates[i];
        }
        sum=sum/number_of_marks;
        return sum;
    }
};
class groupOFstudents: public student
{
private:
    float rating[number_of_stud] = {0};
   
 public:
    int GetTOP(float Average_score){
        for (int w = 0; w < number_of_stud; w++){
            if (rating[w] == Average_score) {
                return w+1;
            }
        }
        return 0;
    }
    
    void AddStudentMark(float mark){
        for (int y = 0; y < number_of_stud; y++){
            if (rating[y] == 0) {
                rating[y] = mark;
                break;}
            else if (rating[y] == mark){
                break;}
        }
    }
    
    void Rating (){
        for (int j = 0; j < number_of_stud - 1; j++){
            for (int i=0; i<number_of_stud-1; i++ ){
                if (rating[i] < rating[i+1]){
                    float temp=rating[i];
                    rating[i]=rating[i+1];
                    rating[i+1] = temp;}}
        }
    }
};
