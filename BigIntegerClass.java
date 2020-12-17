public class BigIntegerClass {
    static BigIntegerClass factorial(int N)
    {
        BigIntegerClass f=new BigIntegerClass("1");
        for(int i=2;i<=N;i++)
        {
            f=f.multiply(BigIntegerClass.valueOf(i));
            
        }
        return f;
    }
public static void main(String[] args) throws Exception {
int N=20;
System.out.println(factorial(N));        
    }
}

