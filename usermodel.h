#ifndef USERMODEL_H
#define USERMODEL_H

#include <QString>

class User
{
public:
    int Cnic;
    QString Name;
    QString Rollno;
    QString Pin;
    int Dailylimit;
    int Monthlylimit;
    bool Status;
    QString Phoneno;
    bool Loan;
    QString Profilepic;

    User(int Cnic,
         QString Name,
         QString Rollno,
         QString Pin,
         int Dailylimit,
         int Monthlylimit,
         bool Status,
         QString Phoneno,
         bool Loan,
         QString Profilepic) : Cnic(Cnic),
        Name(Name),
        Rollno(Rollno),
        Pin(Pin),
        Dailylimit(Dailylimit),
        Monthlylimit(Monthlylimit),
        Status(Status),
        Phoneno(Phoneno),
        Loan(Loan),
        Profilepic(Profilepic) {}

    User() {}
};

#endif // USERMODEL_H
