#include<iostream>
#include<fstream>
#include<conio.h>
#include<cstdlib>
#include<cstring>
using namespace std;
void logo();
void add();
void file_in();
void file_out();
void file_search();
void file_modify();
void deleter();
class addrecord
{
    private:
            char name[30],gender[30],face[30],crime[30],court[30],address[50],jname[30],adate[30],rdate[30],victim[30],vadd[30];
            int n,y,weight,act,jnum,contact,punishment;
            float height;
    public:
        void login();
        void mainmenu();
        void input();
        void output();
        void searchrecord();
        void editrecord();
        void viewrecord();
        void deleterecord();
        int return_code()
        {
            return n;
        }
};
int main()
{
    system("color 4f");
    logo();
   cout<<"\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
   cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
   cout<<"\t   WELCOME TO THE POLICE FIR MANAGEMENT SYSTEM"<<endl;
   cout<<"\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
   cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    addrecord p;
    system("pause");
    system("cls");
    cout<<"     <<^^>>   \t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
    cout<<"^||^  ^||^  ^||^\t      WELCOME TO THE LOGIN MENU "<<endl;
    cout<<" ||    ||    ||\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
    cout<<" || B _||_ A ||"<<endl;
    cout<<" |[____^^____]|"<<endl;
    cout<<"     |____|"<<endl;
    p.login();
    p.mainmenu();
    return 0;
}
void addrecord::login()
{
    int i=0,j=0,c;
    char uname[10],p[10]="nasim",q[10]="1234";
    char pword[10];
    do
    {
        cout<<"\n\n\n\n\n\t~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~"<<endl;
        cout<<"\n                     PLEASE LOGIN FIRST                  "<<endl;
        cout<<"\n\t~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~"<<endl;
        cout<<"\n\t\tENTER USERNAME     : "<<"\t";
        cin>>uname;
        cout<<"\n\t\tENTER PASSWORD     :  "<<"\t";
        while(i<5)
        {
            pword[i]=_getch();
            c=pword[i];
            if(c==13) break;
            else cout<<"*";
            i++;
        }
        pword[i]='\0';
        i=0;
        system("cls");
        if(strcmp(uname,p)==0 && strcmp(pword,q)==0)
        {
            break;
        }
        else
        {
            cout<<".OOPS...Login Unsuccessful"<<endl;
            j++;
            _getch();
            system("cls");
        }
    }
    while(j<=2);
    if(j>2)
    {
        cout<<"\n\n\t********************************************"<<endl;
        cout<<"\n\t   ! SORRY YOU HAVE ENTERED THE WRONG\n\n\t   USER NAME OR PASSWORD FOR MANY TIMES "<<endl;
        cout<<"\n\n\t********************************************"<<endl;
        _getch();
        exit(0);
    }
    system("cls");
}
void addrecord::mainmenu()
{
        cout<<"\n\t___________________________________________________________"<<endl;
        cout<<" \n \t\t MAIN MENU OF POLICE FIR  MANAGEMENT SYSTEM   "<<endl;
        cout<<"\t___________________________________________________________"<<endl;
        cout<<"\n\n \t\t: : MAIN MENU: :-\n"<<endl;
        cout<<"\t1. ADD RECORD"<<endl;
        cout<<"\n\t2. SEARCH RECORD"<<endl;
        cout<<"\n\t3. EDIT RECORD"<<endl;
        cout<<"\n\t4. VIEW RECORD"<<endl;
        cout<<"\n\t5. DELETE RECORD"<<endl;
        cout<<"\n\t6. EXIT"<<endl;
        cout<<"\n\n\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1";
        cout<<"\n\n\tEnter your choice:-\t\t";
        int n;
        cin>>n;
                switch(n)
        {
        case 1:
                add();
                break;
        case 2:
                searchrecord();
                break;
        case 3:
                editrecord();
                break;
        case 4:
                viewrecord();
                break;
        case 5:
                deleterecord();
                break;
        case 6:
                system("cls");
                cout<<"\t_____________________________________________________"<<endl;
                cout<<"\n\tTHANKYOU FOR USING THIS SOFTWARE"<<endl;
                cout<<"\n  \t                                 Developed by Nasim"<<endl;
                cout<<"\n\t_____________________________________________________\n\n\n"<<endl;
                logo();
                _getch();
                exit(0);
            default:
                system("cls");
                cout<<"\n\n OOPS ! YOU ENTER WRONG CHOICE.PRESS AGAIN.....\n"<<endl;
                system("pause");
                system("cls");
                mainmenu();
                _getch();
                break;
            }
}
void addrecord::input()
{
        cout<<"Convicts Code:\t";
        cin>>n;
        cout<<endl;
        cout<<"Convict's full  name:\t";
        cin.ignore();
        cin.getline(name,30);
        cout<<endl;
        cout<<"Age:\t";
        cin>>y;
        cout<<endl;
        cout<<"Gender:\t";
        cin.ignore();
        cin.getline(gender,30);
        cout<<endl;
        cout<<"Face details:\t";
        cin.getline(face,30);
        cout<<endl;
        cout<<"Crime :\t";
        cin.getline(crime,30);
        cout<<endl;
        cout<<"Victim's name:\t";
        cin.getline(victim,30);
        cout<<endl;
        cout<<"Victim's Address:\t";
        cin.getline(vadd,30);
        cout<<endl;
        cout<<"Court Name:\t";
        cin.getline(court,30);
        cout<<endl;
        cout<<"Under which convicted(number):\t";
        cin>>act;
        cout<<endl;
        cout<<"Punishment(year):\t";
        cin>>punishment;
        cout<<endl;
        cout<<"Jail name:\t";
        cin.ignore();
        cin.getline(jname,30);
        cout<<endl;
        cout<<"Jail cell num:\t";
        cin>>jnum;
        cout<<endl;
        cout<<"Convict Address:\t";
        cin.ignore();
        cin.getline(address,50);
        cout<<endl;
        cout<<"Relative contact:\t";
        cin>>contact;
        cout<<endl;
        cout<<"Arrest Date:\t";
        cin.ignore();
        cin.getline(adate,30);
        cout<<endl;
        cout<<"Release Date:\t";
        cin.getline(rdate,30);
        cout<<endl;
}
void addrecord::output()
{      cout<<"Details:"<<endl;
       cout<<"**************"<<endl;
        cout<<"\nConvicts Code:\t"<<n<<endl<<endl;

        cout<<"Convict's full  name:\t"<<name<<endl<<endl;

        cout<<"Age:\t"<<y<<endl<<endl;

        cout<<"Gender:\t"<<gender<<endl<<endl<<"Face details:\t"<<face<<endl<<endl<<"Crime :\t"<<crime<<endl<<endl;

        cout<<"Victim's name:\t"<<victim<<endl<<endl<<"Victim's Address:\t"<<vadd<<endl<<endl;
        cout<<"Court Name:\t"<<court<<endl<<endl<<"Under which convicted(number):\t"<<act<<endl<<endl;
        cout<<"Punishment(year):\t"<<punishment<<endl<<endl<<"Jail name:\t"<<jname<<endl<<endl<<"Jail cell num:\t"<<jnum<<endl<<endl;
        cout<<"Convict Address:\t"<<address<<endl<<endl<<"Relative contact:\t"<<contact<<endl<<endl<<"Arrest Date:\t"<<adate<<endl<<endl<<"Release Date:\t"<<rdate<<endl<<endl;
        cout<<"\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
        cout<<endl;
}
void addrecord::searchrecord()
{
    system("cls");
    cout<<"\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t"<<endl;
    cout<<"\t\t        SEARCH RECORD       \t"<<endl;
    cout<<"\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t"<<endl<<endl;
    file_search();
    cout<<"\t\tDo you want to search Again ? Press Y/y";
    cout<<"\n\t\t Or ! press any key to go back to the main menu\t:";

    char h;
    h=_getch();
    if(h=='Y' || h=='y')
    {
        searchrecord();
    }
    else
    {
        system("cls");
        mainmenu();
    }
}
void addrecord::editrecord()
{
    system("cls");
    cout<<"\t\t****************************"<<endl;
    cout<<"\t\t        EDIT RECORD          "<<endl;
    cout<<"\t\t*****************************"<<endl;
    file_modify();
    cout<<"\t\tDo you want to Edit Again ? Press Y/y";
    cout<<"\n\t\t Or ! press any key to go back to the main menu\t:";
    char m;
    m=_getch();
    if(m=='Y' || m=='y')
    {
        editrecord();
        cout<<"\n\t\tRecord Updated...";
    }
    else
    {
        cout<<"You Enter wrong choice\n\n";
        system("cls");
        mainmenu();
    }
}
void addrecord::viewrecord()
{
    system("cls");
    file_out();
    system("cls");
    mainmenu();
}
void addrecord::deleterecord()
{
    system("cls");
    cout<<"~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~"<<endl;
    cout<<"     DELETE ANY CONVICT'S RECORD   "<<endl;
    cout<<"~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ "<<endl;
    deleter();
    cout<<"\t\tDo you want to delete another record ? Press Y/y";
    cout<<"\n\t\t Or ! press any key to go back to the main menu\t:";
    char m;
    m=_getch();
    if(m=='Y' || m=='y')
    {
        deleter();
        cout<<"\n\t\tRecord Updated...";
    }
    else
    {
        cout<<"Record not Found\n\n";
        system("cls");
        mainmenu();
    }
}
void logo()
{
   cout<<"\n\t\t                 ______          ";
   cout<<"\n\t\t                |_    _|             ";
   cout<<"\n\t\t   *------*       |  |       *------*";
   cout<<"\n\t\t   *-*  *-*       |  |       *-*  *-*";
   cout<<"\n\t\t     *  *    _____|__|_____    *  *       ";
   cout<<"\n\t\t     *  *   |  ___    ___  |   *  *       ";
   cout<<"\n\t\t     *  *   |_|   |  |   |_|   *  *       ";
   cout<<"\n\t\t     *  *         |  |         *  *       ";
   cout<<"\n\t\t     *  *     B   |  |     A   *  *       ";
   cout<<"\n\t\t     *  *        _|  |_        *  *       ";
   cout<<"\n\t\t     *  *       |______|       *  *       ";
   cout<<"\n\t\t     *  *_________|  |_________*  *       ";
   cout<<"\n\t\t     *____________|  |____________*       ";
   cout<<"\n\t\t                 _|  |_                  ";
   cout<<"\n\t\t                |______|                \n\n";
}
void file_in()
{
        addrecord p;
        ofstream file;
        file.open("information.data",ios::binary |ios::app);
        if(!file.is_open())
        {
            cout<<"file doesn't exist"<<endl;
        }
        else
        {
            p.input();
            file.write((char*)(&p),sizeof(addrecord));
        }
}
 void file_out()
{
        addrecord p;
        ifstream file;
        file.open("information.data",ios::binary);
        if(!file.is_open())
        {
            cout<<"file doesn't exist"<<endl;
        }
        else
        {
            while(file.read( (char*)(&p) ,sizeof(addrecord)))
            {
    cout<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    cout<<"\t\t       VIEWED ALL RECORD      \n";
    cout<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
                p.output();
                cout<<"\t\tPress Enter to watch more record:.....";
                system("pause");
                system("cls");
            }
        }
        file.close();
}
void add()
{
        char k;
        addrecord p;
        system("cls");
        cout<<"\t\t\t--------------------------------------------"<<endl;
        cout<<"\t\t                    ADD CONVICT RECORD          "<<endl;
        cout<<"\t\t\t________________________________________"<<endl;
        file_in();
        cout<<"\n\t\trecord added.........."<<endl;
        cout<<"\t\tDo you wants to add another record?  press:y/Y"<<"\n";
        cout<<"\t\tOr,Press any key to go back main menu:\t";
        k=_getch();
        if(k=='Y' || k=='y')
        {
            add();
        }
        else
        {
            system("cls");
            p.mainmenu();
        }
}
void file_search()
{
    addrecord p;
    cout<<"\n\nEnter convict's code for searching..:\t";
    int L;
    cin>>L;
    cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
    fstream file;
    file.open("information.data",ios::in | ios::out |ios::binary);
    if(!file.is_open())
    {
        cout<<"File doesn't exist";
    }
    else
    {
        while(!file.eof())
        {
            file.read((char*)(&p),sizeof(addrecord));
            if(p.return_code()==L)
            {
                p.output();
            file.read((char*)(&p),sizeof(addrecord));
                file.close();
            }
        }
    }
}
void file_modify()
{
    int k;
    cout<<"Enter convict's code for editing\t:";
    cin>>k;
    cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    cout<<endl;
    addrecord p;
    bool found=false;
    fstream file;
    file.open("information.data",ios::in | ios::out | ios::binary);
    file.seekg(0);
	if(!file)
	{
		cout<<"\n\nFIle doesn't exist !!\t";
		system("pause");
		system("cls");
		p.mainmenu();
	}
	while(!file.eof() && found==false)
	{
		file.read((char*)(&p),sizeof(addrecord));
		if(p.return_code()==k)
		{
			cout<<"\n\nEnter The New Details of account"<<endl;
			p.input();
			int pos=(-1)*static_cast<int>(sizeof(addrecord));
			file.seekp(pos,ios::cur);
			file.write((char*)(&p),sizeof(addrecord));
			cout<<"\n\n\tRecord Updated......\n";
			found=true;
		  }
	}
	file.close();
	if(found==false)
    cout<<"\n\nRecord Not Found ";
}
void deleter()
{
    cout<<"Which information you want to delete? Enter code:\t";
    int f;
    cin>>f;
    cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    addrecord p;
    ifstream file;
    ofstream ofile;
    file.open("information.data",ios::binary);
    if(!file.is_open())
    {
        cout<<"File doesn't exist";
    }
    ofile.open("temp.data",ios::binary);
    file.seekg(0,ios::beg);
    while(file.read((char*)(&p),sizeof(addrecord)))
    {
        if(p.return_code()!=f)
        {
            ofile.write((char*)(&p),sizeof(addrecord));
        }
    }
    ofile.close();
    file.close();
    remove("information.data");
    rename("temp.data","information.data");
    cout<<"\n\tRecord deleted...\n";
}
