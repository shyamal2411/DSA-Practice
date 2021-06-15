import java.util.HashMap;
public class Hashmap {

	public static void main(String[] args) {

		HashMap<String,String> capitalCities =new HashMap<String, String>();
		
		capitalCities.put("England", "London");
		capitalCities.put("Germany","Berlin");
		capitalCities.put("Norway", "Oslo");
		
		System.out.println(capitalCities);
	
		capitalCities.get("England");
		System.out.println(capitalCities);
		
		capitalCities.remove("England");
		System.out.println(capitalCities);
		
		
	}

}
