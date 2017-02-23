package main

import "fmt"

func main() {
  var x string = "Hello World"
  x = "goodbye"
  fmt.Println(x)

  y := "golang"
  fmt.Println(y)

  // can't reassign a
  const a string = "immutable"

  var (
    b = 1
    c = 2
    d = 3
  )
}
