#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    ifstream source;
    string textline;
    source.open("score.txt");
    int count = 0;
    float sum = 0, mean, SD, sum_sqr = 0;
    while(getline(source, textline)){
        sum += atof(textline.c_str());
        sum_sqr += pow(atof(textline.c_str()), 2);
        count++;
    }

    mean = sum/count;
    SD = sqrt((sum_sqr / count) - pow(mean, 2));

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << SD;

    source.close();
}