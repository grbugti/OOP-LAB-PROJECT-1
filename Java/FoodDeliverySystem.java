import java.util.Scanner;

public class FoodDeliverySystem {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        Restaurant r1 = new Restaurant("GRide Food Delivery");

        r1.addFood(new FoodItem("Zinger Burger", 550));
        r1.addFood(new FoodItem("Pizza", 1200));
        r1.addFood(new FoodItem("Fries", 300));
        r1.addFood(new FoodItem("Cold Drink", 150));

        System.out.println("=================================");
        System.out.println(" FOOD DELIVERY MANAGEMENT SYSTEM ");
        System.out.println("=================================");

        System.out.print("Enter Your Name: ");
        String name = input.nextLine();

        System.out.print("Enter Phone Number: ");
        String phone = input.nextLine();

        Customer customer = new Customer(name, phone);

        Cart cart = new Cart();

        int choice;

        do {

            System.out.println("\n========== MENU ==========");
            System.out.println("1. Show Food Menu");
            System.out.println("2. Add Food To Cart");
            System.out.println("3. View Cart");
            System.out.println("4. Checkout");
            System.out.println("5. Exit");

            System.out.print("Enter Choice: ");
            choice = input.nextInt();

            switch (choice) {

                case 1:

                    r1.showMenu();
                    break;

                case 2:

                    r1.showMenu();

                    System.out.print("Select Food Number: ");
                    int foodChoice = input.nextInt();

                    cart.addToCart(r1.getFood(foodChoice - 1));
                    break;

                case 3:

                    cart.showCart();
                    break;

                case 4:

                    customer.displayCustomer();

                    System.out.println("\nOrder Placed Successfully!");
                    System.out.println("Delivery Contact: +92 3369240331");
                    break;

                case 5:

                    System.out.println("Application Closed.");
                    break;

                default:

                    System.out.println("Invalid Choice!");
            }

        } while (choice != 5);

        input.close();
    }
}