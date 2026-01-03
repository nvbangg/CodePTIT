import java.util.*;

import java.io.*;

class Point {

    private int x, y;

    public Point(int x, int y) {

        this.x = x;

        this.y = y;

    }

    public int getX() {

        return x;

    }

    public int getY() {

        return y;

    }

}

class Polygon {

    private Point[] a;

    public Polygon(Point[] a) {

        this.a = a;

    }

    public double getArea() {

        int n = a.length;

        long s = 0;

        for (int i = 0; i < n; i++) {

            int j = (i + 1) % n;

            s += 1L * a[i].getX() * a[j].getY() - 1L * a[j].getX() * a[i].getY();

        }

        return Math.abs(s) / 2.0;

    }

}

public class Bai11 {

    public static void main(String[] args) throws FileNotFoundException {

        Scanner in = new Scanner(new File("POLYGON.in"));

        int t = in.nextInt();

        while (t-- > 0) {

            int n = in.nextInt();

            Point p[] = new Point[n];

            for (int i = 0; i < n; i++) {

                p[i] = new Point(in.nextInt(), in.nextInt());

            }

            Polygon poly = new Polygon(p);

            System.out.printf("%.3f\n", poly.getArea());

        }

    }

}