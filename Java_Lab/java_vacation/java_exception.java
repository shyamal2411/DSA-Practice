
public class java_exception {

	public static void main(String[] args) {

		try {
			int a[] = new int[2];
			System.out.println();
			System.out.println("Access elements three :" + a[3]);

		} catch (ArrayIndexOutOfBoundsException e) {
			System.out.println();
			System.out.println("Exception thrown: " + e);
		}
		System.out.println();
		System.out.println("Out of the block.");
	}
}
