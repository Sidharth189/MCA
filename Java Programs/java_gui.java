import javax.swing.*;
//import javax.swing.ImageIcon;
import java.awt.*;
import java.awt.event.*;

class GUI implements ActionListener{
    JFrame frame;
    JLabel label1,label2,label3;
    JTextField textbox1,textbox2,textbox3;
    JButton button;
    GUI(){
        frame = new JFrame();
        frame.setSize(500,250);
        frame.setTitle("Student Data Entry !!");
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        label1 = new JLabel("Enter Name");
        textbox1= new JTextField(30);

        label2 = new JLabel("Enter Age");
        textbox2= new JTextField(5);

        label3 = new JLabel("Enter Course");
        textbox3= new JTextField(20);

        button= new JButton("Add");
        button.addActionListener(this);


        frame.setLayout(new FlowLayout());
        frame.add(label1);
        frame.add(textbox1);
        frame.add(label2);
        frame.add(textbox2);
        frame.add(label3);
        frame.add(textbox3);
        frame.add(button);
        
        frame.setResizable(false);
        frame.revalidate();
    }

    public void actionPerformed(ActionEvent e){
        JOptionPane.showMessageDialog(frame,"Name: "+textbox1.getText()+"  Age: "+textbox2.getText()+"  Course: "+textbox3.getText(),"Student Details !!",JOptionPane.PLAIN_MESSAGE);
    }
}
class Main{
    public static void main(String[] args){
//        JOptionPane.showMessageDialog(null,"NEE ETHAA ? ","GUI Hello",JOptionPane.QUESTION_MESSAGE);
        new GUI();
    }
}