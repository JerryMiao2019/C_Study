#include <iostream>
#include <cmath>

int light_year_fun(double light_year)
{
    int astronomical_units = light_year * 63240;
    return astronomical_units;
}

int main()
{
    using namespace std;
    double light_years;
    cout << "Enter the number of light years: ";
    cin >> light_years;
    cout << light_years << " light years = " << light_year_fun(light_years) << " astronomical units." << endl;
    return 0;
}

