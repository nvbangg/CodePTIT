import java.util.ArrayList;
import java.util.Scanner;
import vn.edu.ptit.Invoice;
import vn.edu.ptit.Rule;
import vn.edu.ptit.Student;
import vn.edu.ptit.Subject;


public class PaymentController {

    public PaymentController() {
    }
    
    public Invoice getInvoice() {
        Scanner sc = new Scanner(System.in);
        Student student = new Student();
        student.setCode(sc.nextLine());
        student.setName(sc.nextLine());
        
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<Subject> subjects = new ArrayList<>();
        int numberOfCredits = 0;
        while(n-- > 0) {
            Subject subject = new Subject();
            subject.setCode(sc.nextLine());
            subject.setName(sc.nextLine());
            subject.setCredit(Integer.parseInt(sc.nextLine()));
            subjects.add(subject);
            
            numberOfCredits += subject.getCredit();
        }
        
        Rule rule = new Rule();
        rule.setCode(sc.nextLine());
        rule.setName(sc.nextLine());
        rule.setCreditPrice(Double.parseDouble(sc.nextLine()));
        
        Invoice invoice = new Invoice(rule);
        invoice.setSt(student);
        invoice.setAlSubject(subjects);
        invoice.setAmount(numberOfCredits * rule.getCreditPrice());
        
        return invoice;
    }
}