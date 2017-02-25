package main

import "fmt"

func main() {
  // var x [5]float64
  // x[0] = 98
  // x[1] = 93
  // x[2] = 77
  // x[3] = 82
  // x[4] = 83
  // fmt.Println(x)

  /* Slice functions */
  // slice1 := []int{1,2,3}
  // slice2 := append(slice1, 4, 5)
  // fmt.Println(slice1, slice2)

  // slice1 := []int{1,2,3}
  // slice2 := make([]int, 2)
  // copy(slice2, slice1)
  // fmt.Println(slice1, slice2)

  /* Maps */
  // var x map[string]int
  // x["key"] = 10
  // fmt.Println(x)

  x := make(map[string]int)
  x["key"] = 10
  fmt.Println(x["key"])

  y := make(map[int]int)
  y[1] = 10
  fmt.Println(y[1])

  fmt.Println(x)
  delete(x, "key")
  fmt.Println(x)

  elements := make(map[string]string)
  elements["H"] = "Hydrogen"
  elements["He"] = "Helium"

  name, ok := elements["Un"]
  fmt.Println(name, ok)
  name2, ok2 := elements["He"]
  fmt.Println(name2, ok2)

  // Shorthand
  elements2 := map[string]string{
    "Li": "Lithium",
    "Be": "Beryllium",
  }
}
