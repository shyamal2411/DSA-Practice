
/*
1. It is required to compute SPI (semester performance index) of n students of a class for their registered subjects in a semester.
Assume that all students register for 6 subjects and each subject carry 5 credits. Also, follow GTU convention and method for computation
of SPI. Declare a class called student having following data members: id_no, grades_obtained and spi. Define constructor, display and
calculate_spi methods. Define main to process data of n students
*/
import java.util.Scanner;
class Student
{
  String id_no;
  String[] grades_obtained = new String[6];
  int[] grade = new int[6];
  double spi;
  Student(){}
 
  void display()
  {
    System.out.println("Enrollment no: " + id_no + " has spi: "+spi);
  }
 
  void calculate_spi(int[] grades)
  {
    spi = 0;
    double total = 0;
    for(int i=0;i<6;i++)
    {
      total = total + (grades[i]*5);
      spi = total/30;
    }
    display();
  }

  public static void main(String[] args)
  {
    int n = Integer.parseInt(args[0]);
 
    Student[] s = new Student[n];
 
    for(int i=0;i<n;i++)
    {
      s[i] = new Student();
    }
    Scanner sc = new Scanner(System.in);
    for(int i=0;i<n;i++)
    {
      System.out.println("enter id of student " + (i+1));
      s[i].id_no = sc.nextLine();
      for(int j=0;j<6;j++)
      {
        System.out.println("enter grades of subject " + (j+1));
        s[i].grades_obtained[j] = sc.nextLine();
        switch(s[i].grades_obtained[j])
        {
          case "AA":
            s[i].grade[j] = 10;
            break;
          case "AB":
            s[i].grade[j] = 9;
            break;
          case "BB":
            s[i].grade[j] = 8;
            break;
          case "BC":
            s[i].grade[j] = 7;
            break;
          case "CC":
            s[i].grade[j] = 6;
            break;
          case "CD":
            s[i].grade[j] = 5;
            break;
          case "DD":
            s[i].grade[j] = 4;
            break;
          case "FF":
            s[i].grade[j] = 0;
            break;
        }
        System.out.println(s[i].grade[j]);
      }
    }
    for (int i=0;i<n ;i++ )
    {
      s[i].calculate_spi(s[i].grade);
    }
  }
}
