import java.util.ArrayList;

public class ArrayListloop {

	public static void main(String[] args) {

			ArrayList<String> cars = new ArrayList<String>();
			
			cars.add("Volvo");
			cars.add("bmw");
			cars.add("Mercedes");
			for (int i=0; i<cars.size(); i++)
			{
				System.out.println(cars.get(i));
	}
}

}




