#include <iostream>
using namespace std;

class birthday{
private:
    int year;
    int month;
    int day;
public:
    birthday(int year, int month, int day){
        this->year = year;
        this->month = month;
        this->day = day;
    }

    void print(){
        cout<<year<<" "<<month<<" "<<day<<endl;
    }
};


class address{
    private:
      string city;
      int m;
      int z;
      int d;

    public:
        address(string city, int m, int z, int d){
            this->city = city;
            this->m=m;
            this->z=z;
            this->d=d;
        }

        void print(){
            cout<<city<<endl;
        }
};

class student{

private:
    string name;
    int level;
    string branch;
    birthday date;
    address adr;


public:
    student(string name, int level, string branch, int year, int month, int day, string city, int m, int z, int d):date(year, month, day),adr(city,m,z,d){
    this->name = name;
    this->level = level;
    this->branch = branch;
    }

    void print(){
    cout<<name<<" "<<level<<" "<<branch<<endl;
    date.print();
    adr.print();
    }

};


int main()
{

    student *s1;
    s1 = new student("Ali", 2, "NW", 1999, 10, 13, "baghdad", 406, 10, 30);

    s1->print();

    delete s1;

    return 0;
}



