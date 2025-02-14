// Create a Product class and extend it into Electronics, Clothing, and Furniture, with appropriate attributes and methods.

class Product {
    String name;
    int price;
    int quantity;

    Product(String name, int price, int quantity) {
        this.name = name;
        this.price = price;
        this.quantity = quantity;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Price: " + price);
        System.out.println("Quantity: " + quantity);
    }
}

class Electronics
        extends Product {
    String brand;

    Electronics(String name, int price, int quantity, String brand) {
        super(name, price, quantity);
        this.brand = brand;
    }

    void display() {
        super.display();
        System.out.println("Brand: " + brand);
    }
}

class Clothing
        extends Product {
    String size;

    Clothing(String name, int price, int quantity, String size) {
        super(name, price, quantity);
        this.size = size;
    }

    void display() {
        super.display();
        System.out.println("Size: " + size);
    }
}

class Furniture
        extends Product {
    String material;

    Furniture(String name, int price, int quantity, String material) {
        super(name, price, quantity);
        this.material = material;
    }

    void display() {
        super.display();
        System.out.println("Material: " + material);
    }
}

public class WAP35 {
    public static void main(String[] args) {
        Electronics e = new Electronics("Laptop", 50000, 10, "Dell");
        Clothing c = new Clothing("Shirt", 1000, 20, "M");
        Furniture f = new Furniture("Table", 5000, 5, "Wood");

        e.display();
        c.display();
        f.display();
    }
}