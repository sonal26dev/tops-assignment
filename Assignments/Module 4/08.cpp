// Assume a class cricketer is declared. Declare a derived class batsman from cricketer.Data member of batsman.Total runs, Average runs and best performance.Member functions input data, calculate average runs, Display data.(Single Inheritance)
#include<iostream>
using namespace std;
class Cricketer
{
    public:
        string name;
        int TotalRuns, AverageRuns, BestPerformance, NumMatches;

        void getdata()
        {
            cout << "Enter Name:  ";
            getline(cin, name);

            cout << "Enter Total Runs:  ";
            cin >> TotalRuns;

            cout << "Enter Matches Played Number :  ";
            cin >> NumMatches;

            cout << "Enter Best Score:  ";
            cin >> BestPerformance;
        }
        void avgcount()
        {
            AverageRuns = TotalRuns / NumMatches;
            cout << "Average Runs:   " << AverageRuns << endl
                 << endl;
        }
};
class Batsman :public Cricketer
{
    public:
    void display()
    {
            cout <<"-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- "<< endl;
            cout << "Name:  " <<name<< endl;
            cout << "TotalRuns:  " << TotalRuns << endl;
            cout << "Best Score:  " << BestPerformance << endl;
            cout << "Average Runs:  " << AverageRuns << endl;
    }

};
int main()
{
    Batsman Player1;
    Player1.getdata();
    Player1.avgcount();
    Player1.display();

    return 0;
}