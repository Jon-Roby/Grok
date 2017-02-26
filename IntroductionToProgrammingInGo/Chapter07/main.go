package main

import "fmt"

// func average(xs []float64) float64 {
//   total := 0.0
//   for _, v := range xs {
//     total += v
//   }
//   return total / float64(len(xs))
// }
//
// func main() {
//   xs := []float64{98,93,77,82,83}
//   fmt.Println(average(xs))
// }

// func main() {
//   add := func(x, y int) int {
//     return x + y
//   }
//   fmt.Println(add(1,1))
// }

// func makeEvenGenerator() func() (int, int) {
//   i := 0
//   return func() (ret int, ret2 int) {
//     ret = i
//     i += 2
//     ret2 = i * 2
//     return
//   }
// }
//
// func main() {
//   nextEven := makeEvenGenerator()
//   fmt.Println(nextEven())
//   fmt.Println(nextEven())
//   fmt.Println(nextEven())
// }

func factorial(x uint) uint {
  if x == 0 {
    return 1
  }
  return x * factorial(x-1)
}
