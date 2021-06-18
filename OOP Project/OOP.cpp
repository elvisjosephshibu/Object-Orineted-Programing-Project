#include<iostream>
#include<string>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<windows.h>
using namespace std;
class STUDENT
{

 public:
        int an,age;
 string name,contact,dob;
        void accept();
        void display();
        int adno(int r);

};
int  STUDENT::adno(int r)
{
   an=r;
   return an;
}
void STUDENT::accept()
{
 cout<<"\nEnter the following details details:\n";
 cout<<"\nEnter your name: ";
 cin.ignore();
 getline(cin,name);
 cout<<"\nEnter your Date of Birth: ";
 cin>>dob;
 cout<<"\nEnter your age: ";
 cin>>age;
 cout<<"\nEnter your Contact Number: ";
 cin>>contact;

}
void STUDENT::display()
{
 cout<<"\n\t\t\t\tSTUDENT BIO DATA\n";
 cout<<"\n\tNAME : ";
 cout<< name;
  cout<<"\n\tADMISSIN NO : "<<an;
 cout<<"\n\tCONTACT NUMBER : "<<contact;
 cout<<"\n\tAGE: "<<age;


}

class parent
{

  public:
        string fname,mname,focc,mocc,fcontact,mcontact;
        void getinfo()
        {
            cout<<"\nEnter Father's Name: ";
            cin.ignore();
            getline(cin,fname);
            cout<<"\nEnter Mother's Name: ";
            //cin.ignore();
            getline(cin,mname);
            cout<<"\nEnter Father's Contact Number: ";
            cin>>fcontact;
            cout<<"\nEnter Mother's Contact Number: ";
            cin>>mcontact;
            cout<<"\nEnter Father's Occupation: ";
            cin.ignore();
			getline(cin,focc);
            cout<<"\nEnter Mother's Occupation: ";
            //cin.ignore();
			getline(cin,mocc);


        }

        void putinfo()
        {
            cout<<"\n\tFATHER'S NAME: "<<fname;
            cout<<"\n\tMOTHER'S NAME: "<<mname;
            cout<<"\n\tFATHER'S CONTACT NUMBER: "<<fcontact;
            cout<<"\n\tMOTHER'S CONTACT NUMBER: "<<mcontact;
            cout<<"\n\tFATHER'S OCCUPATION: "<<focc;
            cout<<"\n\tMOTHER'S OCCUPATION: "<<mocc;

        }
};

class address
{
 public:

        string housename,post,city,district;
        int pin;

	void getaddress()
	{
	cout<<"\nEnter Housename: ";
	cin>>housename;
	cout<<"\nEnter post: ";
	cin>>post;
	cout<<"\nEnter city: ";
	cin>>city;
	cout<<"\nEnter district: ";
	cin>>district;
	cout<<"\nEnter pin number: ";
	cin>>pin;
	}
		void putaddress()
	{
	cout<<"\n\tHOUSE NAME: "<<housename;
	cout<<"\n\tPOST: "<<post;
	cout<<"\n\tCITY: "<<city;
	cout<<"\n\tDISTRICT: " <<district;
	cout<<"\n\tPIN NUMBER: "<<pin;
	}

};

class academic: public STUDENT, public parent, public address
{public:
 		float m1,m2;
 		string dep;

        void academic_in()
        {
          cout<<"\nEnter the 10th Mark: ";
          cin>>m1;
          cout<<"\nEnter the 12th Mark: ";
          cin>>m2;
          cout<<"\nEnter Your Department: ";
          cin.ignore();
			getline(cin,dep);

        }
        void academic_out()
        {
         cout<<"\n\t10th MARK: "<<m1;
         cout<<"\n\t12th MARK: "<<m2;
         cout<<"\n\tDEPARTMENT: "<<dep;
        }
        string dlt(string a)
        {
            a=" ";
            return a;
        }
        int dlt(int a)
        {
            a=0;
            return a;
        }
        float dlt(float a)
        {
            a=0;
            return a;
        }
        string upd(string b)
        {
            cin.ignore();
            getline(cin,b);
            return b;
        }
        int upd(int b)
        {
            cin>>b;
            return b;
        }
        float upd(float b)
        {
            cin>>b;
            return b;
        }
};
int main()
{
    int c,ano,d;
    academic p[1000];
    do{
    cout<<"\n\n1.Enter Student Details\n2.Display Student Details\n3.Delete Student Details\n4.Update Details\n5.Exit Program";
    cout<<"\nEnter ur choice";
    cin>>c;

    switch(c)
    {
        case 1: cout<<"\nEnter Admission No.: ";
                cin>>ano;
                system("cls");
                p[ano].adno(ano);
                p[ano].accept();
                p[ano].getinfo();
                p[ano].getaddress();
                p[ano].academic_in();
                system("cls");
            break;
        case 2:  cout<<"\nEnter Admission No.: ";
                 cin>>ano;
                 if(p[ano].an!=ano)
        		{
                  cout<<"\nNo record Found";
                  break;
        		}
                 system("cls");
                 p[ano].display();
                 p[ano].putinfo();
                 p[ano].putaddress();
                 p[ano].academic_out();
                 Sleep(5000);
                 system("cls");
                break;
        case 3: cout<<"Enter Admission No.: ";
                cin>>ano;
                system("cls");
                p[ano].name=p[ano].dlt(p[ano].name);
                p[ano].age=p[ano].dlt(p[ano].age);
                p[ano].an=p[ano].dlt(p[ano].an);
                p[ano].dob=p[ano].dlt(p[ano].dob);
                p[ano].contact=p[ano].dlt(p[ano].contact);
                p[ano].fname=p[ano].dlt(p[ano].fname);
                p[ano].mname=p[ano].dlt(p[ano].mname);
                p[ano].fcontact=p[ano].dlt(p[ano].fcontact);
                p[ano].mcontact=p[ano].dlt(p[ano].mcontact);
                p[ano].focc=p[ano].dlt(p[ano].focc);
                p[ano].mocc=p[ano].dlt(p[ano].mocc);
                p[ano].housename=p[ano].dlt(p[ano].housename);
                p[ano].post=p[ano].dlt(p[ano].post);
                p[ano].city=p[ano].dlt(p[ano].city);
                p[ano].district=p[ano].dlt(p[ano].district);
                p[ano].pin=p[ano].dlt(p[ano].pin);
                p[ano].m1=p[ano].dlt(p[ano].m1);
                p[ano].m2=p[ano].dlt(p[ano].m2);
                p[ano].dep=p[ano].dlt(p[ano].dep);
                cout<<"\nThe Record is Deleted";
                Sleep(2000);
                system("cls");
            break;
        case 4: cout<<"\nEnter Admission No.: ";
        		cin>>ano;
        		if(p[ano].an!=ano)
        		{
                  cout<<"\nNo record Found";
                  Sleep(2000);
                  system("cls");
                  break;
        		}
        		cout<<"\n\n1 Update Name\n2 Update Age\n3 Update Date of Birth\n4 Update Contact Number\n5 Update Father's Name\n6 Update Mother's Name\n7 Update Father's Contact Number\n8 Update Mother's Contact Number\n9 Update Father's Occupation\n10 Update Mother's Occupation\n11 Update House Name\n12 Update Post\n13 Update City\n14 Update District\n15 Update Pin Number\n16 Update 10th Mark\n17 Update 12th Mark\n18 Update Department\n19 Go to the main Screen";
        		cout<<"\nEnter your Choice";
        		cin>>d;
				switch(d)
        		{
        			case 1: cout<<"\nEnter your Name: ";
        					p[ano].name=p[ano].upd(p[ano].name);
        				break;
        			case 2: cout<<"\nEnter your Age: ";
        					p[ano].age=p[ano].upd(p[ano].age);
        				break;
					case 3: cout<<"\nEnter your Date of Birth: ";
        					p[ano].dob=p[ano].upd(p[ano].dob);
        				break;
					case 4: cout<<"\nEnter your Contact Number: ";
        					p[ano].contact=p[ano].upd(p[ano].contact);
        				break;
					case 5: cout<<"\nEnter your Father's Name: ";
        					p[ano].fname=p[ano].upd(p[ano].fname);
        				break;
					case 6: cout<<"\nEnter your Mother's Name: ";
        					p[ano].mname=p[ano].upd(p[ano].mname);
        				break;
					case 7: cout<<"\nEnter your Father's Contact Number: ";
        					p[ano].fcontact=p[ano].upd(p[ano].fcontact);
        				break;
					case 8: cout<<"\nEnter your Mother's Contact Number: ";
        					p[ano].mcontact=p[ano].upd(p[ano].mcontact);
        				break;
					case 9: cout<<"\nEnter your Father's Occupation: ";
        					p[ano].focc=p[ano].upd(p[ano].focc);
        				break;
					case 10: cout<<"\nEnter your Mother's Occupation: ";
        					p[ano].mocc=p[ano].upd(p[ano].mocc);
        				break;
					case 11: cout<<"\nEnter your House Name: ";
        					p[ano].housename=p[ano].upd(p[ano].housename);
        				break;
					case 12: cout<<"\nEnter your Post: ";
        					p[ano].post=p[ano].upd(p[ano].post);
        				break;
					case 13: cout<<"\nEnter your City: ";
        					p[ano].city=p[ano].upd(p[ano].city);
        				break;
					case 14: cout<<"\nEnter your District : ";
        					p[ano].district=p[ano].upd(p[ano].district);
        				break;
					case 15: cout<<"\nEnter your Pin Number: ";
        					p[ano].pin=p[ano].upd(p[ano].pin);
        				break;
					case 16: cout<<"\nEnter your 10th Mark: ";
        					p[ano].m1=p[ano].upd(p[ano].m1);
        				break;
					case 17: cout<<"\nEnter your 12th Mark: ";
        					p[ano].m2=p[ano].upd(p[ano].m2);
        				break;
        			case 18: cout<<"\nEnter your Department: ";
        					p[ano].dep=p[ano].upd(p[ano].dep);
        				break;
                    case 19:
                            cout<<"\nThe Record is Updated";
                            Sleep(2000);
                            system("cls");
                        break;
					default: cout<<"\nInvalid Choice";

				}
				Sleep(2000);
                system("cls");
            break;
        case 5 :exit(0);
                break;
        default: cout<<"\nInvalid Choice";
    }

    }while(c<5);


 return 0;
}


