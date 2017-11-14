#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

class Student{
private:
    vector<int> grades_v;
    int sum;
public:
    void add_grade(int grade){
        if(grade > 0 && grade < 6){
            grades_v.push_back(grade);
            sum += grade;
        }
        else
            cout << "invalid input" << endl;
    }
    double get_avarage(){
        return (double) sum / grades_v.size();
    }
};

int main() {
    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades

    Student st;
    int size = 5
    for(int i = 0; i < size ; i++){
        int num = rand() % 5 + 1;
        st.add_grade(num);
        cout << num << " added" << endl;
    }
    
    cout << "The avg is: " << st.get_avarage() << endl;


    return 0;
}
