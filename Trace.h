#ifndef _TRACE_H
#define _TRACE_H

#include<string>
#include<iostream>
using namespace std;
// class Trace
// {
// private:
//     string theFunctionName;
// public:
//     Trace(const char* name);
//     ~Trace();
//     void debug(const char *msg);

//     const static bool traceIsActive=true;
// };

// Trace::Trace(const char *name)
// {
//     if(traceIsActive){
//         cout<<"Enter function"<<name<<endl;
//     }
// }
// void Trace::debug(const char *msg)
// {
//     if(traceIsActive){
//         cout<<msg<<endl;
//     }
// }

// Trace::~Trace()
// {
//     if(traceIsActive){
//         cout<<"Exit function"<<theFunctionName<<endl;
//     }
// }

class Trace
{
private:
    string *theFunctionName;

public:
    Trace(const char *name):theFunctionName(0)
    {
        if (traceIsActive)
        {
            cout << "Enter function" << name << endl;
            theFunctionName = new string(name);
        }
    }
    ~Trace();
    void debug(const char *msg);

    const static bool traceIsActive = true;
};


 inline void Trace::debug(const char *msg)
{
    if (traceIsActive)
    {
        cout << msg << endl;
    }
}

 inline Trace::~Trace()
{
    if (traceIsActive)
    {
        cout << "Exit function" << theFunctionName << endl;
        delete theFunctionName;
    }
}

#endif