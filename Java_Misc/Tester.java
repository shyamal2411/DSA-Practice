package Java_Misc;

public class Tester {
	public static void main(String[] args) {
		int[][] numbers = { { 3, 2, 3, 6 }, { 2, 4 }, { 9 }, { 2, 3, 4, 2 } };
		int total = 0;

		for (int i = 0; i < numbers.length; i++) {
			for (int j = 0; j < numbers[i].length; j++) {
				if (i == j)
					continue;
				total += numbers[i][j];
			}
		}
		System.out.println("Result = " + total);
	}

}
