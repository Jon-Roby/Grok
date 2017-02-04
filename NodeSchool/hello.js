// function dynamic() {
//   console.log(x)
// }


function dynamic() {
  console.log(this)
}

dynamic()

console.log('-----')

const fatArrow = () => {
  console.log(this)
}

fatArrow()

// yo = 'goodbye'
//
// dynamic()

// function dynamic2() {
//   yo = 'hello'
//
// }
//
//
// yo = 'goodbye'
// const test = dynamic()
// test()
// const test2 = dynamic2()
// test2()
