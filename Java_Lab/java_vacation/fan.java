package java_vacation;

public class fan {
	
		private String make;
		private double radius;
		private String color;
		private boolean isOn;
	private byte speed;

		public Fan(String make, double radius, String color)
		{
			this.make = make;
			this.radius =radius;
			this.color = color;
			
			public String toString() {
			String.format("make - %s, radius -%f, color -%s, isOn -%s, speed - %d",make,radius,color,isOn,speed);
			}
		}
}

