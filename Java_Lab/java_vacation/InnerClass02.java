class Outer1
{
	int outerx = 100;
	
	void test()
	{
		for (int i=0;i<10;i++)
		{
			class Inner 
			{
				void display()
				{
					System.out.println("Display : outer = "+outerx);
				}
			}
			Inner inner  = new Inner ();
			inner.display();
		}
	}
}
public class InnerClass02 {

	public static void main(String[] args) {
		Outer outer = new Outer();
		outer.test();		
	}
}
