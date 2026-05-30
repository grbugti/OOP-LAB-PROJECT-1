public class Customer {
        private String customerName;
    private String phoneNumber;

    public Customer(String customerName, String phoneNumber) {

        this.customerName = customerName;
        this.phoneNumber = phoneNumber;
}

    public void displayCustomer() {

        System.out.println("\nCustomer Name : " + customerName);
        System.out.println("Phone Number  : " + phoneNumber);
    }
}
