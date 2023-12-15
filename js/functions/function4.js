function getUserData(n, age, email, ph) {
    n = prompt("Enter your name: ")
    age = prompt("Enter your age : ")
    email = prompt("Enter you email: ")
    ph = prompt("Enter your phone number : ")
    return n, age, email, ph;
}

function displayUserData(n, age, email, ph) {
    alert("Name : " + n + "\nAge: " + age + "\nEmail: " + email + "\nPhone NUmber: " + ph);
}

var n, age, email, ph
n, age, email, ph = getUserData(n, age, email, ph);
displayUserData(n, age, email, ph);
