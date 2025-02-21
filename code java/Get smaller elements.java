public static ArrayList<Integer> getSmaller(int arr[], int target) {

    ArrayList<Integer> result = new ArrayList<>();

    for (int num : arr)
        if (num < target)
            result.add(num);

    return result;
}