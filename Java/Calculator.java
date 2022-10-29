import java.awt.*;
import java.applet.*;
import java.awt.event.*;
public class Calculator extends Applet implements ActionListener
{
    TextField inp;
    //Function to add features to the frame
    public void init()
    {
	setBackground(Color.white);
	setLayout(null);
	int i;
	inp = new TextField();
	inp.setBounds(150,100,270,50);
	this.add(inp);
	Button button[] = new Button[10];
	for(i=0;i<10;i++)
	{
	    button[i] = new Button(String.valueOf(9-i));
	    button[i].setBounds(150+((i%3)*50),150+((i/3)*50),50,50);
	    this.add(button[i]);
	    button[i].addActionListener(this);
	}
	Button dec=new Button(".");
	dec.setBounds(200,300,50,50);
	this.add(dec);
	dec.addActionListener(this);
 
	Button clr=new Button("C");
	clr.setBounds(250,300,50,50);
	this.add(clr);
	clr.addActionListener(this);
 
	Button operator[] = new Button[5];
	operator[0]=new Button("/");
	operator[1]=new Button("*");
	operator[2]=new Button("-");
	operator[3]=new Button("+");
	operator[4]=new Button("=");
	for(i=0;i<4;i++)
	{
	    operator[i].setBounds(300,150+(i*50),50,50);
	    this.add(operator[i]);
	    operator[i].addActionListener(this);
	}
	operator[4].setBounds(350,300,70,50);
	this.add(operator[4]);
	operator[4].addActionListener(this);
    }
    String num1="";
    String op="";
    String num2="";
    //Function to calculate the expression
    public void actionPerformed(ActionEvent e)
    {
	String button = e.getActionCommand();
        char ch = button.charAt(0);
	if(ch>='0' && ch<='9'|| ch=='.') 
	{ 
	    if (!op.equals("")) 
		num2 = num2 + button; 
	    else
		num1 = num1 + button;   
	    inp.setText(num1+op+num2); 
	} 
	else if(ch=='C') 
	{ 
	    num1 = op = num2 = ""; 
	    inp.setText(""); 
	}
	else if (ch =='=') 
	{ 
	    if(!num1.equals("") && !num2.equals(""))
	    {
		double temp;
		double n1=Double.parseDouble(num1);
		double n2=Double.parseDouble(num2);
		if(n2==0 && op.equals("/"))
		{
		    inp.setText(num1+op+num2+" = Zero Division Error");
		    num1 = op = num2 = "";
		}
		else
		{
		    if (op.equals("+")) 
		        temp = n1 + n2; 
		    else if (op.equals("-")) 
		        temp = n1 - n2; 
		    else if (op.equals("/")) 
	  	        temp = n1/n2; 
		    else
		        temp = n1*n2; 
		    inp.setText(num1+op+num2+" = "+temp); 
		    num1 = Double.toString(temp);
		    op = num2 = ""; 
	        }
            }
	    else
	    {
		num1 = op = num2 = ""; 
		inp.setText("");
	    }
        } 
	else 
	{ 
	    if (op.equals("") || num2.equals("")) 
		op = button; 
	    else 
	    { 
		double temp;
		double n1=Double.parseDouble(num1);
		double n2=Double.parseDouble(num2);
		if(n2==0 && op.equals("/"))
		{
		    inp.setText(num1+op+num2+" = Zero Division Error");
		    num1 = op = num2 = "";
		}
		else
		{
		    if (op.equals("+")) 
		        temp = n1 + n2; 
		    else if (op.equals("-")) 
		        temp = n1 - n2; 
		    else if (op.equals("/")) 
	  	        temp = n1/n2; 
		    else
		        temp = n1*n2; 
		    num1 = Double.toString(temp); 
		    op = button; 
		    num2 = ""; 
	        }
            }
	    inp.setText(num1+op+num2);
        }
    }
}
/*
<applet code = Calculator.class width=600 height=600>
</applet>
*/
