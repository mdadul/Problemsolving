package main
import "fmt"

func Print(x int ){
  for i:=1; i<x; i++{
    fmt.Printf("%d ",i)
  }
  fmt.Print(x)
}
func main() {
  var x int
  fmt.Scanf("%d",&x)
  Print(x)
}
