// console.log('Hello world')
// let person = {
//     name: "Anil",
//     lname: "Sahu"
// }

// for(const i in person){
//     console.log(person[i])
// }

// hii()
// function hii(){
//     console.log('good morning')
// }

// const a = 5
// console.log(a)

// function hii(){
//     const a=9
//     console.log(a)
// }

// hii()

// let arr = new Array(1,2,3)
// console.log(typeof arr)

// let arr = [1,3,5,7,9,11,18,21,30];

// let ans = arr.find(value, index, array) => value % array[1]===0 && value % array[3]===0 && value!==array[6] && value!==array[9] ;

// let arr = [1, 3, 5, 7, 9, 11, 18, 21, 30];

// let ans = arr.findIndex((value, index, array) => value % array[1] === 0 && value % array[3] === 0 && value !== array[6] && value !== array[9]);

// console.log(ans);

// async function utility(){
//     // let content = fetch('https://jsonplaceholder.typicode.com/todos/1')
//     // let output = await content.json()
//     let data = fetch('https://jsonplaceholder.typicode.com/todos/1')
//       .then(response => response.json())
//       .then(json => console.log(json))
// }

// utility()

async function helper() {
  let option = {
    method: "POST",
    body: JSON.stringify({
      title: "Anil",
      body: "Strong",
      userId: 10102002,
    }),
    headers: {
      "Content-type": "application/json; charset=UTF-8",
    },
  };
  let content = await fetch("https://jsonplaceholder.typicode.com/posts", option);
  let ans = content.json();
  return ans;
}

async function utility() {
  let ans =await helper();
  console.log(ans);
}

utility()
