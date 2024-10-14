class MyHashMap{
    private int size;
    private String values[];

    public MyHashMap(int size){
        this.size = size;
        this.values = new String[size];
    }

    private int hash(int key){
        return key % size;
    }

    public void put(int key, String value){
        int index = hash(key);
        values[index] = value;
    }

    public String get(int key){
        int index = hash(key);
        if(values[index] == null){
            System.out.println("There is no value at given index. Pls enter a input data.");
        }
        return values[index];
    }

    public void remove(int key){
        int index = hash(key);
        values[index] = null;
        System.out.println("The value at index " + key + " is removed.");
    }
}

class Main{
    public static void main(String[] args) {
        MyHashMap hashmap = new MyHashMap(5);

        hashmap.put(1, "Shaman");
        hashmap.put(4, "Sagar");
        hashmap.put(5, "Sachi");

        System.out.println("The value at index 1 is " + hashmap.get(1) );
        System.out.println("The value at index 4 is " + hashmap.get(4) );
        System.out.println("The value at index 5 is " + hashmap.get(5) );
        System.out.println("The value at index 2 is " + hashmap.get(2) );

        hashmap.remove(4);
    }
}


//Output
// The value at index 1 is Shaman
// The value at index 4 is Sagar
// The value at index 5 is Sachi
// There is no value at given index. Pls enter a input data.
// The value at index 2 is null
// The value at index 4 is removed.