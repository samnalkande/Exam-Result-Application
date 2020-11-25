#include<iostream>
using namespace std;


class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll no is "<< roll_no<<endl;
        }
};

class Test :virtual public Student{
    protected:
        float maths, physics;
        public:
            void set_marks(float m1, float m2){
                maths = m1;
                physics = m2;
            }

            void print_marks(void){
                cout << "You result is here: "<<endl
                     << "Maths: "<< maths<<endl
                     << "Physics: "<< physics<<endl;
            }
};

class Sports:virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }

        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }

};

class Result : public Test, public Sports{
    private:
        float average;
    public:
        void display(void){
            average = ((maths +physics + score)/300)*100 ;
            print_number();
            print_marks();
            print_score();
            cout<< "Your Average score is: "<<average<<endl;
        }
};




int main () {
    int roll;
Result Sasmit;
Result Gaurav;
Result Rohan;
cout<<"Enter Your Roll Number To View Your Result"<<endl;
cin>>roll;
if (roll == 1)
{
    Sasmit.set_number(1);
    Sasmit.set_marks(90, 100);
    Sasmit.set_score(95);
    Sasmit.display();
}

if (roll == 2)
{
    Gaurav.set_number(2);
    Gaurav.set_marks(89, 94);
    Gaurav.set_score(73);
    Gaurav.display();
}

if (roll == 3)
{
    Rohan.set_number(3);
    Rohan.set_marks(86, 95);
    Rohan.set_score(67);
    Rohan.display();
}

 return 0;
}