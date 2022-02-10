#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class voting{
    private:
    long  int aadhar_no;
    string name;
    int age;
    string mobileno;
    public:
    void setdata(long int aadhar_no_a,string name_a,string mobileno_a){
        aadhar_no = aadhar_no_a;
        name = name_a;
        //age = age_a;
        mobileno=mobileno_a;}

        long int getaadhar_no(){
            return aadhar_no;

        }
        string getname(){
            return name;
        }
        /*int getage(){
            return age;
        }*/
        string getmobileno(){
            return mobileno;
        }
        void eligibility(int age_a){
            if(age_a>=18  && age_a<=60){
                cout<<endl<<"your are eligible for vote"<<endl;
                cout<<"ur age is"<<age_a<<endl;
                _getch();

            }
            else{
                cout<<endl<<"your not eligible for vote"<<endl;
                _getch();
            }
        }
        void setmobile(string mob_prev,string mob_new){
        if(mob_prev == mobileno){
            mobileno = mob_new;
            cout<<endl<<"Successfully mobile number is added!...."<<endl;
            _getch();

        }
        else{
            cout<<endl<<"OOps! check the mobile no";
            _getch();
        }
    }




};
int main(){
    int choice = 0,enterage;
    long int enteraadhar_no;
    system("cls");
    voting user1;
    user1.setdata(123456789,"Tharun","9392746638");
    do{
        system("cls");
        cout<<endl<<"**WELCOME TO ONLINE VOTING **"<<endl;
        cout<<endl<<"enter the AADHAR NO:";
        cin>>enteraadhar_no;

        cout<<endl<<"enter age:";
        cin>>enterage;
        if((enteraadhar_no == user1.getaadhar_no())){
            do{
                string oldmobile_no,newmobile_no;
                system("cls");
                cout<<endl<<"**WELCOME TO ONLINE VOTING **"<<endl;
                cout<<endl<<"select options";
                cout<<endl<<"1.CHECK ALIGIBILITY";
                cout<<endl<<"2. SHOW USER DETAILS";
                cout<<endl<<"3.UPDATE MOBILE NO:";
                cout<<endl<<"4.EXIT"<<endl;

                cin>>choice;
                switch(choice){
                    case 1:
                    cout<<endl<<"enter ur age:";
                    cin>>enterage;
                    user1.eligibility(enterage);

                    _getch();
                    break;
                    case 2:
                    cout<<endl<<"**user details are:-"<<endl;
                    cout<<endl<<"->Aadhar  number is:"<<user1.getaadhar_no()<<endl;
                    cout<<endl<<"->user name  is:"<<user1.getname()<<endl;
                    cout<<endl<<"->Mobile  number is:"<<user1.getmobileno()<<endl;

                    _getch();
                    case 3:
                    cout<<endl<<"enter old mobile no:"<<endl;
                    cin>>oldmobile_no;

                    cout<<endl<<"enter new mobile no:"<<endl;
                    cin>>newmobile_no;

                    user1.setmobile(oldmobile_no,newmobile_no);
                    break;
                    case 4:
                      exit(0);
                    default:
                      cout<<endl<<"enter valid data!...";
                }
            }
            while(1);
        }
    }
    while(1);

}

