import java.util.TreeSet;

class IntSet {
    private TreeSet<Integer> set;

    public IntSet(int[] a) {
        set = new TreeSet<>();
        for (int x : a) {
            set.add(x);
        }
    }

    public IntSet(TreeSet<Integer> s) {
        set = new TreeSet<>(s);
    }

    public IntSet union(IntSet other) {
        TreeSet<Integer> result = new TreeSet<>(set);
        result.addAll(other.set);
        return new IntSet(result);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        for (int x : set) {
            sb.append(x).append(" ");
        }
        return sb.toString().trim();
    }
}