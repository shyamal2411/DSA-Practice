package Java_Lab;

class methodOverload1 {
    private String formatnumber(int value) {
        return String.format("%d", value);
    }

    private String formatnumber(double value) {
        return String.format("%.3f", value);
    }

    private String formatnumber(String value) {
        return String.format("%.2f",
                Double.parseDouble(value));/* No clue about parse double here, we aren't take any cmd args */
    }

    public static void main(String[] args) {
        methodOverload1 method = new methodOverload1();
        System.out.println(method.formatnumber(24));
        System.out.println(method.formatnumber(11.123));
        System.out.println(method.formatnumber("24"));
    }
}