import java.util.TreeSet;

class WordSet {
    private TreeSet<String> set;

    public WordSet(String s) {
        set = new TreeSet<>();
        String[] words = s.toLowerCase().split("\\s+");
        for (String w : words) {
            set.add(w);
        }
    }

    public WordSet(TreeSet<String> s) {
        set = new TreeSet<>(s);
    }

    public WordSet union(WordSet other) {
        TreeSet<String> result = new TreeSet<>(set);
        result.addAll(other.set);
        return new WordSet(result);
    }

    public WordSet intersection(WordSet other) {
        TreeSet<String> result = new TreeSet<>(set);
        result.retainAll(other.set);
        return new WordSet(result);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        for (String x : set) {
            sb.append(x).append(" ");
        }
        return sb.toString().trim();
    }
}