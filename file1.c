// this is a program to create a superclass and sub class 
// creating methods and calling the method one by one
import java.util.Scanner;
public class superandsub {
    Scanner sc=new Scanner(System.in);
    String name,id,phoneno,salary;
        void getdataA(){
            System.out.println("entre the staff name");
            name=sc.nextLine();
            System.out.println("enter the staff id");
            id = sc.nextLine();
            System.out.println("enter the phone number ");
            phoneno = sc.nextLine();
            System.out.println("enter the salary");
            salary = sc.nextLine();
        }
        void dispalydataA(){
            System.out.println("name="+name);
            System.out.println("staff id="+id);
            System.out.println("phone number="+phoneno);
            System.out.println("salary="+salary);
        }
}
class teaching extends superandsub{
    String domain,publication;
    void getdataB(){
        Scanner sc=new Scanner(System.in);
        System.out.println("entre the domain");
        domain=sc.nextLine();
        System.out.println("enter the publication");
        publication = sc.nextLine();
    }
    void getdisplayB(){
        System.out.println("domain="+domain);
        System.out.println("publication="+publication);
    }
}
class techinal extends superandsub{
    String skills;
    void getdataC(){
        Scanner sc=new Scanner(System.in);
        System.out.println("entre the skills");
        skills=sc.nextLine();
    }
    void getdisplayC(){
        System.out.println("skills = "+skills);
    }
}
class contract extends superandsub{
    String peroid;
    void getdataD(){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the peroid");
        peroid=sc.nextLine();
    }
    void getdisplayD(){
        System.out.println("period = "+peroid);
    }
}
class staff {
    public static void main(String[] args) {
        int i;
        double n1,n2,n3;
        teaching t1[]=new teaching[10];
        techinal t2[]= new techinal[10];
        contract t3[]=new contract[10];
        for(i=0;i<10;i++){
            t1[i]=new teaching();
            t2[i]=new techinal();
            t3[i]=new contract();
        }
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number of teaching staff");
        n1= sc.nextDouble();
        for( i=0;i<n1;i++){
            t1[i].getdataA();
            t1[i].dispalydataA();
            t1[i].getdataA();
            t1[i].getdisplayB();
        }
        Scanner Sc=new Scanner(System.in);
        System.out.println("enter the number of teaching staff");
        n2= Sc.nextDouble();
        for( i=0;i<n2;i++){
            t2[i].getdataA();
            t2[i].dispalydataA();
            t2[i].getdataC();
            t2[i].getdisplayC();
        }
        Scanner Scan=new Scanner(System.in);
        System.out.println("enter the number of teaching staff");
        n3= Scan.nextDouble();
        for( i=0;i<n3;i++){
            t3[i].getdataA();
            t3[i].dispalydataA();
            t3[i].getdataD();
            t3[i].getdisplayD();
        }
    }
}
