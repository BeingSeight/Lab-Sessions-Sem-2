// Store student details taken from input

import java.util.Scanner;
public class StoreStudentDetails {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the name of the student: "); // stores the name of the student
        String name = sc.nextLine(); // next line is used to store next input
        System.out.println("Enter the roll number of the student: "); // stores the roll number of the student
        int rollNumber = sc.nextInt(); // next int is used to store next integer input
        System.out.println("Enter the marks for subject 1: "); // stores the marks for subject 1
        int marks1 = sc.nextInt(); // next int is used to store next integer input
        System.out.println("Enter the marks for subject 2: "); // stores the marks for subject 2
        int marks2 = sc.nextInt(); // next int is used to store next integer input
        System.out.println("Enter the marks for subject 3: "); // stores the marks for subject 3
        int marks3 = sc.nextInt(); // next int is used to store next integer input
        System.out.println("Name: " + name); // prints the name of the student
        System.out.println("Roll Number: " + rollNumber); // prints the roll number of the student
        System.out.println("Marks for subject 1: " + marks1); // prints the marks for subject 1
        System.out.println("Marks for subject 2: " + marks2); // prints the marks for subject 2
        System.out.println("Marks for subject 3: " + marks3); // prints the marks for subject 3

        // Calculate total marks, percentage, and pass/fail status
        int totalMarks = marks1 + marks2 + marks3;
        double percentage = totalMarks / 3.0;
        String result = (marks1 >= 35 && marks2 >= 35 && marks3 >= 35) ? "Pass" : "Fail";

        // For showing the results
        System.out.println("Total Marks: " + totalMarks);
        System.out.println("Percentage: " + percentage + "%");
        System.out.println("Result: " + result);

        sc.close(); // closes the scanner
    }
}