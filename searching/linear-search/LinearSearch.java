public class LinearSearch {
    public static void main(String[] args) {
        int[] array = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        int target = 5;
        int index = search(array, target);
        if (index == -1) {
            System.out.println("Target not found");
        } else {
            System.out.println("Target found at index: " + index);
        }
    }

    public static int search(int[] array, int target) {
        for (int i = 0; i < array.length; i++) {
            if (array[i] == target) {
                return i;
            }
        }
        return -1;
    }
}