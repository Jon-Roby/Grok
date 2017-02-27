package main

import "fmt"

// func zero(x int) {
//   x = 0
// }
//
// func main() {
//   x := 5
//   zero(x)
//   fmt.Println(x)
// }

func zero(xPtr *int) {
  *xPtr = 0
}

func main() {
  x := 5
  zero(&x)
  fmt.Println(x) // x is 0
}

// func main() {
//   var x *int
//   x = 5
//
//   fmt.Println(x)
// }
