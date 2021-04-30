// Online Java Compiler
// Use this editor to write, compile and run your Java code online



class Student
{
private int age;
private String name;
private float cpi;



public void setAge(int age)
{
if(age>=20 || age<10)
{
System.out.println("Please set correct age");
}
else
{
this.age = age;
}

}
public void setName(String name)
{
this.name=name;


}
public void setCPI(float cpi)
{

this.cpi = cpi;

}

public int getAge()
{
return age;
}
public String getName()
{
return name;
}
public float getCPI()
{
return cpi;
}

public boolean equals(Student o)
{
if(this.getCPI() == o.getCPI())
{
return true;
}
else
{
return false;
}
}
}



class HelloWorld {
public static void main(String[] args) {

Student s1 = new Student();
//Student s2 = new Student(18, "Nistha", 9.4f);
Student s2 = new Student();
s2.setAge(18);
s2.setName("Shrushti");
s2.setCPI(9.4f);

s1.setAge(18);
s1.setName("Shyamal");
s1.setCPI(9.4f);




if(s1.equals(s2))
{
System.out.println("Both are Equal");

}
else
{
System.out.println(" Both are not Not Equal");
}



}
}

