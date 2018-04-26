package main
import ("fmt"
"math/big"
)

func main(){
	
  var t, n int64
  
  fmt.Scanln(&t)
  for ; t > 0; t-- {
    fmt.Scanln(&n)
  
    result := big.NewInt(1)
    fmt.Println(result.MulRange(2, n))
  }
}
