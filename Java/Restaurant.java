import java.util.ArrayList;

public class Restaurant {
    private String restaurantName;
    private ArrayList<FoodItem> menu;

    public Restaurant(String restaurantName) {

        this.restaurantName = restaurantName;
        menu = new ArrayList<>();
}

public void addFood(FoodItem item) {

        menu.add(item);
    }

    public void showMenu() {

        System.out.println("\n===== " + restaurantName + " MENU =====");

        for (int i = 0; i < menu.size(); i++) {

            System.out.print((i + 1) + ". ");
            menu.get(i).displayItem();
        }
    }

    public FoodItem getFood(int index) {

        return menu.get(index);
    }
}
