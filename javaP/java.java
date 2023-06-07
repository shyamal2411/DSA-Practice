package javaP;
import java.util.*;
class One
{
public String Name= "Hello";
public One(String givenName)
{
Name= givenName;
}
}
class Two extends One
{
private int age;
public Two(String givenName, int givenage){
super(givenName);
age= givenage;
    }
}

public class java{

        public static void main(String[] args) {
            Two my= new Two("Hackerearth", 25);
            System.out.println(my.Name);
        }
}