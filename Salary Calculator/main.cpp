/* Project By Shiam Prodhan*/

#include <iostream>
#include <conio.h>
#include <cstring>
#include <stdlib.h>
#include <windows.h>

using namespace std;

class project
{
private:
    string c_name,c_id="D86458",bd,add,password1,password2,bg;
    long int contact;




    long double BS,T_allowance,H_allowance,M_allowance,Total_salary;
    long double m;
    long double t;
    long double h;
    long double c_amount,d_amount;


    int choice,iccha;

    double Tax,T,c,d;

public:



    void intro()
    {
        cout<<"Please register yourself"<<endl;
        cout<<"Please give all correct information to make your account secure!"<<endl<<endl;
    }
    void phase_1()
    {
        cout<<"STEP:1"<<endl;
        cout<<"________"<<endl;
        cout<<"Name    : ";
        getline(cin,c_name);

        cout<<"Address : ";
        getline(cin,add);
        cout<<"Birth Date : ";
        getline(cin,bd);

        cout<<"Blood Group : " ;
        getline(cin,bg);

        cout<<"Contact number : " ;
        cin>>contact;
        cin.ignore();
        cout<<"Choose your password : ";
        getline(cin,password1);


    }
    string r1=password1;
    void information()
    {

        system("color 02");
        system("cls");
        cout<<"Please wait while gathering your information...";
        Sleep(5000);
        system("cls");
        cout<<"INFORMATION"<<endl;
        cout<<"____________"<<endl;
        Sleep(700);
        cout<<"YOUR NAME : "<<c_name<<endl;
        Sleep(700);
        cout<<"YOUR ADDRESS : "<<add<<endl;
        Sleep(700);
        cout<<"YOUR BIRTH DATE : "<<bd<<endl;
        Sleep(700);
        cout<<"YOUR BLOOD GROUP : "<<bg<<endl;
        Sleep(700);
        cout<<"YOUR CONTACT NUMBER : "<<contact<<endl<<endl;
        Sleep(700);
        cout<<"Please wait while generating your ID..."<<endl;
        Sleep(5000);
        cout<<"Your ID : D86458"<<endl;
        cout<<"Your PASSWORD : "<<password1<<endl<<endl;

        Sleep(1500);
        cout<<"/""Please remember your id and password""/"<<endl<<endl;
        Sleep(1000);
        cout<<"Press ENTER to start....";
        cin.ignore();
        phase_2();


    }

    void phase_2()
    {
        system("color 02");
        system("cls");
        cout<<"STEP:2"<<endl;
        cout<<"________"<<endl;
        cout<<"Enter your ID : ";
        getline(cin,c_id);
        cout<<"Enter your password : ";
        getline(cin,password2);

            if(c_id=="D86458" && password1==password2)
            {
                cout<<"Access Granted"<<endl;
                cout<<"You are ready to access your account."<<endl;
                Sleep(2000);
                cout<<"Press ENTER to start....";
                cin.ignore();
                phase_3();

            }
            else
            {
                cout<<"You have entered the wrong information"<<endl;
                cout<<"Please try again..."<<endl;
                Sleep(2500);
                phase_2();
            }

    }

    void phase_3()
    {
        system("color 02");
        system("cls");
        cout<<"Enter Your Basic Salary : ";
        cin>>BS;
        salary_cal();
    }

    double salary_cal()
    {
        m=(BS/100)*15;
        t=(BS/100)*10;
        h=(BS/100)*20;
        Total_salary=BS+m+h+t;
        showcase();
    }

    void showcase()
    {

        Sleep(1000);
        cout<<endl;
        cout<<"please wait..." <<endl<<endl ;
        Sleep(1500);
        cout<<"SALARY INFORMATION"<<endl;
        cout<<"__________________"<<endl;

        Sleep(500);
        cout<<"Name of the Employee : "<<c_name<<endl;
        Sleep(500);
        cout<<"Id of the Employee : "<<c_id<<endl;
        Sleep(500);
        cout<<"Basic salary of the Employee : "<<BS<<endl;
        Sleep(500);
        cout<<"House allowance of the Employee (20%) : "<<h<<endl;
        Sleep(500);
        cout<<"Transportation allowance  of the Employee (10%) : "<<t<<endl;
        Sleep(500);
        cout<<"Medical allowance of the Employee (15%) : "<<m<<endl;
        Sleep(500);
        cout<<"Total salary of the Employee : "<<Total_salary<<endl<<endl;
        Sleep(500);
        cout<<"Please wait while calculating your tax... ";
        Sleep(5000);
        Tax_cal();

    }

    double Tax_cal()

    {
        double p=Total_salary;
        double tax;

        if(p>0&&p<=25000)
        {

            Sleep(500);
            cout<<endl<<"Your tax is "<<"0%"<<endl;

            tax=(p/100)*0;
            Sleep(500);
            cout<<"Your total tax : "<<tax<<endl;
            Sleep(500);
            cout<<"Your salary after tax : "<<p-tax<<endl;
        }

        if(p>25000&&p<=50000)
        {
            ;
            Sleep(500);
            cout<<endl<<"Your tax is "<<"5%"<<endl;
            tax=(p/100)*5;
            Sleep(500);
            cout<<"Your total tax : "<<tax<<endl;
            Sleep(500);
            cout<<"Your salary after tax : "<<p-tax<<endl;
        }
        if(p>50000&&p<=75000)
        {

            Sleep(500);
            cout<<endl<<"Your tax is "<<"10%"<<endl;
            tax=(p/100)*10;
            Sleep(500);
            cout<<"Your total tax : "<<tax<<endl;
            Sleep(500);
            cout<<"Your salary after tax : "<<p-tax<<endl;
        }
        if(p>75000&&p<=99999)
        {

            Sleep(500);
            cout<<endl<<"Your tax is "<<"15%"<<endl;
            tax=(p/100)*15;
            Sleep(500);
            cout<<"Your total tax        : "<<tax<<endl;
            Sleep(500);
            cout<<"Your salary after tax : "<<p-tax<<endl;
        }
        if(p>99999)
        {

            Sleep(500);
            cout<<endl<<"Your tax is "<<"25%"<<endl;
            tax=(p/100)*20;
            Sleep(500);
            cout<<"Your total tax        : "<<tax<<endl;
            Sleep(500);
            cout<<"Your salary after tax : "<<p-tax<<endl;
        }
    Tax=p-tax;
    T=tax;

        cout<<endl<<"Do you want to open creat a Debit or Credit account ? "<<endl;
        cout<<"1.Yes\n2.No"<<endl;
        cout<<"Please choose your option : ";
        cin>>choice;

                if(choice==1)
                {
                    Sleep(1500);
                    cout<<endl<<"Which type of account you want to create ?"<<endl;
                    cout<<"1.Credit\n2.Debit"<<endl;
                    cout<<"Please choose your option : ";
                    cin>>iccha;

                            if(iccha==1)
                            {
                                Sleep(500);
                                cout<<endl<<"Name of the Employee      : "<<c_name<<endl;

                                cout<<"Id of the Employee        : "<<c_id<<endl;

                                cout<<"Balance                   : "<<Tax<<endl;

                                cout<<"Account type              : CREDIT "<<endl;

                                cout<<"Enter your amount         : ";
                                cin>>c_amount;
                                Sleep(2000);
                                cout<<"Your balance after credit : "<<Tax-c_amount<<endl;

                                Sleep(1000);
                                cout<<"Press any key to see all your details...";
                                getch();
                                ALLc();

                            }

                            if(iccha==2)
                                {
                                Sleep(500);
                                cout<<endl<<"Name of the Employee      : "<<c_name<<endl;

                                cout<<"Id of the Employee        : "<<c_id<<endl;

                                cout<<"Balance                   : "<<Tax<<endl;

                                cout<<"Account type              : DEBIT "<<endl;

                                cout<<"Enter your amount         : ";
                                cin>>d_amount;
                                Sleep(2000);
                                cout<<"Your balance after debit  : "<<Tax+d_amount<<endl;

                                Sleep(1000);
                                cout<<"Press any key to see all your details...";
                                getch();

                                ALLd();

                            }

                }



                if(choice==2)
                {
                    Sleep(2500);
                    cout<<"Thank You for using the software :)";
                }

                 c=Tax-c_amount;
                d=Tax+c_amount;


    }


    void ALLc()
    {
        system("color 02");
        system("cls");
        cout<<"PERSONAL INFORMATION"<<endl;
        cout<<"____________________"<<endl;
        Sleep(200);
        cout<<"NAME           : "<<c_name<<endl;
        Sleep(200);
        cout<<"ADDRESS        : "<<add<<endl;
        Sleep(200);
        cout<<"BIRTH DATE     : "<<bd<<endl;
        Sleep(200);
        cout<<"BLOOD GROUP    : "<<bg<<endl;
        Sleep(200);
        cout<<"CONTACT NUMBER : "<<contact<<endl<<endl;
        Sleep(200);

        cout<<"SALARY INFORMATION"<<endl;
        cout<<"____________"<<endl;
        Sleep(200);
        cout<<"Name of the Employee                            : "<<c_name<<endl;
        Sleep(200);
        cout<<"Id of the Employee                              : "<<c_id<<endl;
        Sleep(200);
        cout<<"Basic salary of the Employee                           : "<<BS<<endl;
        Sleep(200);
        cout<<"House allowance of the Employee (20%)           : "<<h<<endl;
        Sleep(200);
        cout<<"Transportation allowance  of the Employee (10%) : "<<t<<endl;
        Sleep(200);
        cout<<"Medical allowance of the Employee (15%)         : "<<m<<endl;
        Sleep(200);
        cout<<"Total salary of the Employee                    : "<<Total_salary<<endl;
        Sleep(200);
        cout<<"Your tax is                                     :"<<"25%"<<endl;Sleep(200);
        cout<<"Your total tax                                  : "<<T<<endl;Sleep(200);
        cout<<"Your salary after tax                           : "<<Tax<<endl;Sleep(200);


        cout<<endl<<"BANK INFORMATION"<<endl;
        cout<<"____________"<<endl;Sleep(200);
        cout<<"Name of the Employee      : "<<c_name<<endl;Sleep(200);

        cout<<"Id of the Employee        : "<<c_id<<endl;Sleep(200);

        cout<<"Balance                   : "<<Tax<<endl;Sleep(200);

        cout<<"Account type              : CREDIT "<<endl;Sleep(200);
        cout<<"Your Credit amount        : "<<c_amount<<endl;Sleep(200);
        cout<<"Your balance after credit : "<<Tax-c_amount<<endl;

        Sleep(2000);
        cout<<"Thank You for using the software :)";


    }

    void ALLd()
    {
        system("color 02");
        system("cls");
        cout<<"PERSONAL INFORMATION"<<endl;
        cout<<"____________________"<<endl;
        Sleep(200);
        cout<<"NAME           : "<<c_name<<endl;
        Sleep(200);
        cout<<"ADDRESS        : "<<add<<endl;
        Sleep(200);
        cout<<"BIRTH DATE     : "<<bd<<endl;
        Sleep(200);
        cout<<"BLOOD GROUP    : "<<bg<<endl;
        Sleep(200);
        cout<<"CONTACT NUMBER : "<<contact<<endl<<endl;
        Sleep(200);

        cout<<"SALARY INFORMATION"<<endl;
        cout<<"____________"<<endl;
        Sleep(200);
        cout<<"Name of the Employee                            : "<<c_name<<endl;
        Sleep(200);
        cout<<"Id of the Employee                              : "<<c_id<<endl;
        Sleep(200);
        cout<<"Basic salary of the Employee                           : "<<BS<<endl;
        Sleep(200);
        cout<<"House allowance of the Employee (20%)           : "<<h<<endl;
        Sleep(200);
        cout<<"Transportation allowance  of the Employee (10%) : "<<t<<endl;
        Sleep(200);
        cout<<"Medical allowance of the Employee (15%)         : "<<m<<endl;
        Sleep(200);
        cout<<"Total salary of the Employee                    : "<<Total_salary<<endl;
        Sleep(200);
        cout<<"Your tax is                                     :"<<"25%"<<endl;Sleep(200);
        cout<<"Your total tax                                  : "<<T<<endl;Sleep(200);
        cout<<"Your salary after tax                           : "<<Tax<<endl;Sleep(200);


        cout<<endl<<"BANK INFORMATION"<<endl;
        cout<<"____________"<<endl;Sleep(200);
        cout<<"Name of the Employee      : "<<c_name<<endl;Sleep(200);

        cout<<"Id of the Employee        : "<<c_id<<endl;Sleep(200);

        cout<<"Balance                   : "<<Tax<<endl;Sleep(200);

        cout<<"Account type              : DEBIT "<<endl;Sleep(200);
        cout<<"Your Debit amount         : "<<d_amount<<endl;Sleep(200);
        cout<<"Your balance after credit : "<<Tax+d_amount<<endl;

        Sleep(2000);
        cout<<"Thank You for using the software :)";

    }




};

int main()
{
    system("color 02");
    cout<<"Welcome to the\nSELFLESS TRUST FOR HELPING OURSELVES group..."<<endl<<"Please wait...";
    Sleep(7000);
    system("cls");
    project obj;
    obj.intro();
    obj.phase_1();
    obj.information();


    getch();
    return 0;
}
