package main

import ("fmt"; "math")

// func distance(x1, y1, x2, y2 float64) float64 {
//   a := x2 - x1
//   b := y2 - y1
//   return math.Sqrt(a*a + b*b)
// }
//
// func rectangleArea(x1, y1, x2, y2 float64) float64 {
//   l := distance(x1, y1, x1, y2)
//   w := distance(x1, y1, x2, y1)
//   return l * w
// }
//
// func circleArea(x, y, r float64) float64 {
//   return math.Pi * r*r
// }
//
// func main() {
//   var rx1, ry1 float64 = 0, 0
//   var rx2, ry2 float64 = 10, 10
//   var cx, cy, cr float64 = 0, 0, 5
//
//   fmt.Println(rectangleArea(rx1, ry1, rx2, ry2))
//   fmt.Println(circleArea(cx, cy, cr))
// }

type Circle struct {
  x, y, r float64
}

func circleArea(c Circle) float64 {
  return math.Pi * c.r * c.r
}

// In between the keyword 'func' and the function name, is a
// receiver.
func (c *Circle) area() float64 {
  return math.Pi * c.r * c.r
}

func main() {
  // Create a new circle
  // var c Circle
  // c := new(Circle)
  // c := Circle{x: 0, y: 0, r: 5}
  c := Circle{0, 0, 5}
  fmt.Println(circleArea(c))

  fmt.Println(c.area())
  // Methods
}
