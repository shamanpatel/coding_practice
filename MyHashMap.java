import java.util.LinkedList; 

class MyHashMap {
    private int size; 
    private LinkedList<String>[] values; // Array of LinkedLists to store key-value pairs.

    // Constructor to initialize the hash map with a specified size.
    public MyHashMap(int size) {
        this.size = size; 
        this.values = new LinkedList[size]; 

        // Initialize each container as a new LinkedList.
        for (int i = 0; i < size; i++) {
            values[i] = new LinkedList<>();
        }
    }

    // Hash function to determine the index for a given key.
    private int hash(int key) {
        return key % size; 
    }

    // Method to put a key-value pair into the hash map.
    public void put(int key, String value) {
        int index = hash(key);
        LinkedList<String> container = values[index]; 

        // Iterate through the Linkedlist to check if the key exists.
        for (int i = 0; i < container.size(); i += 2) { 
            if (Integer.parseInt(container.get(i)) == key) { 
                container.set(i + 1, value); // Update the value if the key exists.
                return; 
            }
        }

        // If key does not exist, add the key and value as a new pair.
        container.add(String.valueOf(key));
        container.add(value);
    }

    // Method to read a given key from the hash table.
    public String get(int key) {
        int index = hash(key); 
        LinkedList<String> container = values[index]; 

        // Iterate through the container to find the key.
        for (int i = 0; i < container.size(); i += 2) { 
            if (Integer.parseInt(container.get(i)) == key) { 
                return container.get(i + 1);
            }
        }
        return null; 
    }

    // Method to remove a key and it's value from the hash table.
    public void remove(int key) {
        int index = hash(key); 
        LinkedList<String> container = values[index];

        // Iterate through the container to find the key
        for (int i = 0; i < container.size(); i += 2) { 
            if (Integer.parseInt(container.get(i)) == key) { 
                container.remove(i); // Remove the key
                container.remove(i); // Remove the value
                return; 
            }
        }
    }
}


class Main {
    public static void main(String[] args) {
        MyHashMap hashmap = new MyHashMap(5); 

        // Added key-value pairs.
        hashmap.put(1, "Shaman");
        hashmap.put(4, "Sagar");
        hashmap.put(5, "Sachi");
        hashmap.put(1, "Updated Shaman"); 

        // Fetch the value at given key from get methid.
        System.out.println("The value at index 1 is " + hashmap.get(1)); 
        System.out.println("The value at index 4 is " + hashmap.get(4)); 
        System.out.println("The value at index 5 is " + hashmap.get(5)); 
        System.out.println("The value at index 2 is " + hashmap.get(2));

        // Removed the key 4 and try to get the value.
        hashmap.remove(4);
        System.out.println("The value at index 4 is " + hashmap.get(4)); // Should print null (after removal)
    }
}

//Output

// The value at index 1 is Updated Shaman
// The value at index 1 is Updated Shaman
// The value at index 4 is Sagar
// The value at index 5 is Sachi
// The value at index 2 is null
// The value at index 4 is null