console.clear();
// this is str length function in strings
var my="hdkhkhskfhehrfwhf";
var i=my.length;
console.log(i);
 
// this is str index function in strings
var he="this is may name vaibhav gosavi";
var e=he.indexOf("vaibhav");
console.log(e)
console.log(he)


// this is str index function in strings 
var str3="bus,car,de,plane";
var try3=str3.slice(0,3);
console.log(try3)

// this is str replace function in strings
// var str5 = "palce";
var str4="this is my palce and also home";
var try4=str4.replace("palce","chech");
console.log(try4);

// adding  a number
var a=10;
var b=20+a;
var c=30;
var d=(a+b)/c;
console.log(d);
console.log(b);

// this is toprecision function in strings
var x=4.56678591;
var y=x.toPrecision();
console.log(y)

// converting a number to string in js
var a=123
b=a.toString()
console.log(b+12)

// taking input from user in js 
// this code will only run on the google chrome console section since it has prompt in  it 
var quest = prompt("whats your name");
var quest1 = prompt("whta is your fav color");
console.log("your name is "+ quest +"and your fav color is "+quest1);

// to convert a string to number we can use parseInt() 
const quantity="12";
console.log(parseInt(quantity));
console.log(parseFloat(quantity));