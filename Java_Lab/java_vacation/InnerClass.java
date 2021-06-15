
class Outer{
	int outer_x= 100;
	void  test()
	{
		Inner inner= new Inner();
		inner.display();
	}
	class Inner 
	{
		void display()
		{
			System.out.println("Display : outer_x = "+outer_x);
		}
	}
}



public class InnerClass {

	public static void main(String[] args) {

		Outer outer = new Outer();
		outer.test();	
	}
}
