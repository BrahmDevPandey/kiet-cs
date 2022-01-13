// ordinary function in js
function sum(a, b){
    return a+b;
}

// object function in js
let mul = function multiply(a,b) {
    return a*b;
}

// anonymous function in js
let div = function(a, b) {
    return a/b;
}

// arrow function in js without rerurning
let demo = () => {
    console.log("In arrow function demo");
}

// arrow function having return statement
let mod = (a,b) => {
    console.log("In arrow function mod");
    return a%b;
}

// arrow function having just a single line as return statement
let diff = (a, b) => a-b;

// immediate invocation function expression (IIFE)
(() => console.log("IIFE Function"))();


// function to print triangle
function triangle() {
    for(let i = 1; i < 10; i++) {
        for(let j = 1; j <= i; j++){
            // console.log("# ");
            process.stdout.write("# ");
        }
        console.log();
    }
}

// drivers of all the functions
let s = sum(30, 50);
console.log(s);
triangle();
