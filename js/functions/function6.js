// const isEligible = (alive, age) =>
//     alive == true ?
//         age >= 81 ?
//             "Alive and age is greater than 81" :
//         "less than 81" :
//     "dead"

// ans = isEligible(true, 19)
// console.log(ans)

const checkName = (name) => name[1] ? (name.length > 4 ? "Perfect" : "Not greater than 4") : "Name too short";

const name1 = "John";  // Example value for name1
var ans = checkName(name1);
console.log(ans);

