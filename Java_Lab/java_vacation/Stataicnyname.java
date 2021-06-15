
class StaticDemo {
	static int a = 42;
	static int b = 99;

	static void callme() { // no understood, ask any senior//
		System.out.println("a = " + a);
	}
}

public class Stataicnyname {

	public static void main(String[] args) {
		StaticDemo.callme();
		System.out.println("b = " + StaticDemo.b);

	}

}
