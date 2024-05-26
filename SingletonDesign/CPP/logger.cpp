#include<iostream>
#include "logger.hpp"
using namespace std;

Logger :: Logger() {
    cout << "New Instance Created "<< endl;

}

void Logger :: Log(string msg){
    cout << msg << endl;
}

