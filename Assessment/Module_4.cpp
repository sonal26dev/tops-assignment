//  Create a lecture management System
#include <iostream>
using namespace std;
class Lecture_Details
{
public:
    string Lec_name;
    string Sub_name;
    string Cou_name;
    int Lec_num;

    Lecture_Details()
    {
        string Lec_name = " ";
        string Sub_name = " ";
        string cou_name = " ";
        int lec_num = 0;
    }
    void get_Details()
    {

        cout << endl
             << "Enter Name of The Lecturer:  ";
        cin >> Lec_name;
        cout << "Enter Name of The Subject: ";
        cin >> Sub_name;
        cout << "Enter Name of Course: ";
        cin >> Cou_name;
        cout << "Enter Number of Lecturers: ";
        cin >> Lec_num;
    }
    void show_Details()
    {
        cout << endl
             << "   The LECTURE SYSTEM are...." << endl
             << endl;
        cout << "Name of The Lecturer:  " << Lec_name << endl;
        cout << "Name of The Subject: " << Sub_name << endl;
        cout << "Name of Course: " << Cou_name << endl;
        cout << "Number of Lecturers: " << Lec_num << endl;
    }
};
int main()
{
    // Lecture_Details l;
    // l.get_Details();
    // l.show_Details();

    int n;
    cout << "Enter The Number of Lecturers Details: ";
    cin >> n;

    Lecture_Details l[n];

    for (int i = 0; i < n; i++)
    {

        l[i].get_Details();
        l[i].show_Details();
    }
    return 0;
}