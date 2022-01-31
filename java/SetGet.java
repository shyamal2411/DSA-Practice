package java;

import java.util.*;

class Customer {
	// Private member variables
	private String customerId;
	private String customerName;
	private long contactNumber;
	private String address;

	// Public getter and setter methods
	public String getCustomerId() {
		return customerId;
	}

	public void setCustomerId(String customerId) {
		this.customerId = customerId;
	}

	public String getCustomerName() {
		return customerName;
	}

	public void setCustomerName(String customerName) {
		this.customerName = customerName;
	}

	public long getContactNumber() {
		return contactNumber;
	}

	public void setContactNumber(long contactNumber) {
		this.contactNumber = contactNumber;
	}

	public String getAddress() {
		return address;
	}

	public void setAddress(String address) {
		this.address = address;
	}
}

class SetGet {

	public static void main(String args[]) {
		Customer customer = new Customer();

		// Creating object of Customer class
		customer.setCustomerId("C101");

		// Setting values of the instance variables using setter methods
		customer.setCustomerName("Jack");
		customer.setContactNumber(9870345687L);
		customer.setAddress("D089, St. Louis Street, Springfield");

		System.out.println("Displaying Customer Details");
		// Displaying values of the instance variables using getter methods
		System.out.println("Customer Id : " + customer.getCustomerId());
		System.out.println("Customer Name : " + customer.getCustomerName());
		System.out.println("Contact Number : " + customer.getContactNumber());
		System.out.println("Address : " + customer.getAddress());
	}
}
