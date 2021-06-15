
public class Strings_ex {
	public static void main(String args[]) {
		System.out.println();
		String s0 = new String("Coding ");
		String s1 = "is";
		String s2 = "awesome\u0021";
		String s3 = new String("Hello");
		String s4 = new String("This is Shyamal Prajapati");

		// what is this shit????

		String s5 = "Hello";
		System.out.println(s0 = s1 + s2);
		System.out.println(s3 == s4);
		System.out.println(s3.contentEquals(s4));
		System.out.println(s5 == "hello");
	}
}
