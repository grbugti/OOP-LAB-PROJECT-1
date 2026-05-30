import java.util.ArrayList;

public class Cart {
    
    private ArrayList<FoodItem> cartItems;

    public Cart() {

        cartItems = new ArrayList<>();
}

    public void addToCart(FoodItem item) {

        cartItems.add(item);

        System.out.println(item.getName() + " Added To Cart.");
    }

    public void showCart() {

        double total = 0;

        System.out.println("\n===== YOUR CART =====");

        for (FoodItem item : cartItems) {

            item.displayItem();
            total += item.getPrice();
        }

        System.out.println("----------------------");
        System.out.println("Total Bill = Rs." + total);
    }
}