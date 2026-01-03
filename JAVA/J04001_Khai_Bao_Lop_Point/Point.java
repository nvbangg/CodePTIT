public class Point {
    private double x, y;

    public Point() {
    }

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }
    
    public Point(Point p) {
        this.x = p.x;
        this.y = p.y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }
    
    public double distance(Point secondPoint) {
        return Math.sqrt(
                (this.x-secondPoint.x)*(this.x-secondPoint.x) +
                (this.y-secondPoint.y)*(this.y-secondPoint.y)       
        );
    }
    
    public double distance(Point p1, Point p2) {
        return Math.sqrt(
                (p1.x-p2.x)*(p1.x-p2.x) +
                (p1.y-p2.y)*(p1.y-p2.y)       
        );
    }

    @Override
    public String toString() {
        return super.toString();
    }
}