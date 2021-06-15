import java.util.*;

class ordinary_car
{
	private int  steering,wheels,seat, music,brake;
	
	public void setdata()
	{
		brake= 2;
		seat  = 4;
		music = 1;
		steering =1; 
		wheels = 4;		
	}
	public void print()
	{
		System.out.println("Brake in Ordinary car is "+brake);
		System.out.println("Steering in Ordinary car is "+steering);
		System.out.println("Music system in Ordinary car is "+music);
		System.out.println("Wheels in Ordinary car is "+wheels);
		System.out.println("Seats in Ordinary car is "+seat);
	}
}
	class medium extends ordinary_car
	{
			private int ac;
			public void set()
			{
				super.setdata();
				ac= 2;
				
			}
			public void print()
			{
				super.print();
				{
					System.out.println("AC in luxurious car is "+ac);
				}
			}
	}
	


public class cargarage {

	public static void main(String[] args) {
		
			ordinary_car oc = new ordinary_car();
			medium mm = new medium();
			
		
	}

}
