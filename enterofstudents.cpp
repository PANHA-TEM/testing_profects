#include <iostream>
#include <string>
using namespace std;

    int i;
    int id[100], age[100], amount_stu[100];//amount of students that user want to input
    string name[100], gender[100], address[100], contact[100], dob[100], search[100];
    
        void input() //enter informations of students
            {
                 cout << "\t How many students do you want to enter : ";
                 cin >> amount_stu[100];
                 cout << "\t ===========>>> enter of students info <<<=========== \n\n";
                    for ( i = 0; i < amount_stu[100]; i++)
                        {

                            cout << "\t Enter Students ID : ";
                            cin >>id[i];
                            cout << "\t Enter Students Name : ";
                            cin >>name[i];
                            cout << "\t Enter Students Age : ";
                            cin >>age[i];
                            cout << "\t Enter Students Gender : ";
                            cin >>gender[i];
                            cout << "\t Enter Students Date Of Birth : ";
                            cin >>dob[i];
                            cout << "\t Enter Students Address : ";
                            cin >>address[i];
                            cout << "\t Enter Students Contact : ";
                            cin >>contact[i];
                            cout <<endl;

                        }
            }
        void List()
            {

                cout << "\t ===========>>> List of students info <<<=========== \n\n";
                    for( i = 0; i < amount_stu[100]; i++)
                        {

                            cout << "ID_stu \tName_stu \tAge_stu \tGender_stu \tDOB_stu \tAddress_stu \tContact_stu \n\n";
                            cout <<id[i]<<"\t"<<name[i]<<"\t\t"<<age[i]<<"\t\t"<<gender[i]<<"\t\t"<<dob[i]<<"\t\t"<<address[i]<<"\t\t"<<contact[i];

                        }

            }
        void Research()
            {

                cout << "\t ===========>>> List of students info <<<=========== \n\n";
                cout << "\t Enter ot Research ID of  Students : ";
                cin >>search[100];
                    for( i = 0; i < search[100]; i++)
                        {
                            cout << "akgalkgagla;";
                        }

            }


int main()
    {
        system("cls");
        system("color A");
        input();
        List();

        return 0;
    }