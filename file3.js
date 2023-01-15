//this run in the google chrome console section try to run this code there
// the below code is about the a basic bill ordering system


console.log("hello welcome to the store");
console.log("we offer coffee for 2$ each and cookies for 1$ each");
var q1=prompt("how many coffee would you like to have");
var q2=prompt("how many cookies would you like to have");
var q3=prompt("how much would you like to leave as a tip");
q1=parseFloat(q1);
q2=parseFloat(q2);
q3=parseFloat(q3);


console.log(q1);
console.log(q2);
console.log(q3);

c1=q1*2;
c2=q2*3;

var taxes=(c1+c2)*0.1;
var total=c1+c2+q3+taxes;

var yes=00;
console.log("you have ordered "+q1+"coffee for a total of "+c1+"$");
console.log("you have also orderded "+q2+"cookies fora total of"+c2+"$");
console.log("you have left "+q3+"$ as tip");
console.log("your total amount is "+total+"$ included all taxes");
//console.log("if you want to know the taxes on your bill type YES");
var showtax=prompt("if you want to know the taxes on your bill type 00");

if(showtax==yes){
    console.log("the tax in your bill is"+taxes+"$");
}
else{
    console.log("the coustomer does not want the taxes on the bill ");
}