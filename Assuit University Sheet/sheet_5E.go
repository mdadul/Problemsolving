package main
import "fmt"

func swap(x,y int)(b,a int){
  return y,x
}
func main() {
  var x,y int
  fmt.Scanf("%d %d",&x,&y)
  fmt.Println(swap(x,y))
}
