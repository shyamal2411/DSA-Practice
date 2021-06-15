import java.util.ArrayList;
public class Arraylistex {

	public static void main(String[] args) {

		ArrayList<String> cars = new ArrayList<String>();
		
		cars.add("Volvo");
		cars.add("bmw");
		cars.add("Ford");
		
		cars.size();
		System.out.println(cars);


		System.out.println(cars);
		cars.remove("Volvo");
		System.out.println(cars);
		cars.set(1,"volvo" );
		System.out.println(cars);

		cars.clear();
		System.out.println(cars);
		
	}

}
