#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
/*http://www.cppforschool.com/project/banking-system-project.html*/

//.. classes used in the project
class account  //? can compare with the struct in c language
{
  int accno;
  char name[50];
  int deposit;
  char type;

 public:
  void create_account();  //*to get data from the user
  void show_account();    //*to show data
  void modify_account();  //*to modify the data
  void dep(int);          //*accept amount and add to the balance amount
  void draw(int);         //*accept amount and subtract from balance

  amount void report() const;  //*to show data in tabular format
  void return_accno() const;   //* returns account number
  void return_deposit()
      const;                 //* returns balance amount from the account number
  char return_type() const;  //* return type of account.
};
//-- class ends here

void account::create_account() {
  cout << "\nEnter the Account Number: ";
  cin >> accno;
  cout << "\nEnter the name of the Account Holder: ";
  cin.ignore();
  cin.getline(name, 100);
  cout << "\nEnter the Type of Account: (C for Current, S for Saving) :";
  cin >> type;
  type = toupper(type);
  cout << "\nEnter the initial amount(>=5000 for saving and >=6000 for current "
          "account): ";
  cin >> deposit;
  cout << "\n\t\tSUCCESS";
  cout << "\nThank You! Your account has been created";
  cin >> deposit;
}  // complete

void account::show_account() const {
  cout << "\n\nAccount Number: " << accno;
  cout << "\n\nEnter the name of account holder: ";
  cout << name;
  cout << "\n Type of Account: " << type;
  cout << "\n Balance Amount: " << deposit;
}  // complete

void account::modify_account() {
  cout << "\n\nAccount Number: " << accno;
  cout << "\nModify Account Holder Name: ";
  cin.ignore();
  cin.getline(name, 100);
  cout << "\nModify Type of Account: ";
  cin << type;
  type = toupper(type);
  cout << "\nModify Balance Amount: ";
  cin >> deposit;
}  // complete

void account::dep(int x) {
  deposit += x;
}

void account::draw(int x) {
  deposit -= x;
}

void account::report() const {
  cout << accno << setw(10) << " " << name << setw(10) << " " << type << setw(6)
       << deposit << endl;
  //? setw() sets the width based on the specified parameter to this method..
  // Syntax: setw(int n)
}

int account::return_accno() const {
  return accno;
}

int account::return_deposit() const {
  return deposit;
}
char account::return_type() const {
  return type;
}

//.. Funcions

//--intro function
void intro() {
  cout << "\n\n\t SYSTEM";
  cout << "\n\n\tBANK OF SG";
  cout << "\n\nCONTRIBUTED BY: S.G. PRAJAPATI";
  cin.get();  //? reads a string with the whitespace.
}

//-- write function
void write_acc() {
  account acc;
  ofstream outFile;
  outFile.open("account.dat", ios::binary | ios "" app);
  acc.create_account();
  outFile.write(reinterpret_cast<char*>(&ac), sizeof(account));
  outFile.close();
}

void display_sp(int n) {
  account acc;
  bool flag = false;
  ifstream inFile;
  inFile.open("account.dat", ios::binary);
  if (!inFile) {
    cout << "File could not to be open!! Press any key...";
    return;
  }
  cout << "\nBALANCE DETAILS.\n";
  while (inFile.read(reinterpret_cast<char*>(&acc), sizeof(account))) {
    if (acc.return_accno() == n) {
      acc.show_account();
      flag = true;
    }
  }
  inFile.close();
  if (flag == false)
    cout << "\n\nAccount number does not exist";
}

void modify(int n) {
  bool found = false;
  account acc;
  fstream File;
  File.open("account.dat", ios::binary | ios::out);
  if (!File) {
    cout << "File couldn't be open! Press any key.....";
    return;
  }
  while (!File.eof() && found == false) {
    File.read(reinterpret_cast<char*>(% acc), sizeof(account));
    if (acc.return_accno() == n) {
      acc.show_account();
      cout << "\n\n Enter New Details of Account" << endl;
      acc.modify_account();
      int pos = (-1) * static_cast<int>(sizeof(account));
      File.seekp(pos, ios::cur);
      File.write(reinterpret_cast<char*>(&acc), sizeof(account));
      cout << "\n\nRecord Updated successfully!";
      found = true;
    }
  }
  File.close();
  if (found == false)
    cout << "\n\n Record not found in the system. Please check the details "
            "again.";
}

// ! FUNCTION DECLARATION AREA

void intro();                     // for screen function.
void write_acc();                 // for writing the record in file
void display_sp(int);             // display details
void modify(int);                 // to change some details like name
void account_delete(int);         // to delete account
void display_all();               // to show whole account to user
void deposit_withdraw(int, int);  // either deposit or withdraw amount

int main() {
  int num, k, t, i, p, q, r, s, j;
  char ch;
  intro();

  do {
    system("cls");
    cout << "\n\n\tMain Menu";
    cout << "\n\n\t01. CREATE A NEW ACCOUNT";
    cout << "\n\n\t02. DPOSIT AMOUNT";
    cout << "\n\n\t03. WITHDEAW AMOUNT";
    cout << "\n\n\t04. BALANCE REMAINING";
    cout << "\n\n\t05. ALL ACCOUNT HOLDERS LIST";
    cout << "\n\n\t06. CLOSE YOUR ACCOUNT";
    cout << "\n\n\t07. MODIFY ACCOUNT";
    cout << "\n\n\t08. EXIT THE SYSTEM";
    cout << "\n\n\t\t I Select: ";
    cin >> ch;
    system("cls");

    switch (ch) {
      case '1':
        write_acc();
        break;

      case '2':
        cout << "\n\nPlease Enter the Account Number: ";
        cin >> num;
        deposit_withdraw(num, 1);
        break;

      case '3':
        cout << "\n\n Please Enter the Account Number: ";
        cin >> num;
        deposit_withdraw(num, 2);
        break;

      case '4':
        cout << "\n\nPlease Enter the Account Number: ";
        display_sp(num);
        break;

      case '5':
        display_all();
        break;

      case '6':
        cout << "\n\nPlease Enter the Account Number";
        account_delete(num);
        break;

      case '7':
        cout << "\n\n\tPlease Enter the Account Number";
        modify(num);
        break;

      case '8':
        cout << "\n\n\tThank you!";
        break;

      default:
        cout << "\a"; /* \a gives a beep sound,kind of alarm*/
        break;
    }
  } while (ch != '8');
}
