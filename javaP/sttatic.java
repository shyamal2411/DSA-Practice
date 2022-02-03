package javaP;

// import java.util.*;

public class sttatic{
    static void statMethod(){
        System.out.println("Static method called without object");
    }
    public void statMethod2(){
        System.out.println("Static method called with object");
    }
    public static void main(String[] args) {
        statMethod();
        sttatic s = new sttatic();
        s.statMethod2();
    }
}