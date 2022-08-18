fun main(){
    val fruits = arrayOf<String>("Apple","Mango","Banana","Orange","Orange")

    // println(fruits.get(0))
    // println(fruits.size)    // size of fruits array

    // for (i in fruits) {     // for loop
    //     println(i)
    // }
    
    // if("Mango" in fruits){  // if else
    //     println("found")
    // }
    // else{
    //     println("not found")
    // }

    // val distinct = fruits.distinct()  // to make a distinct array of elements

    // for(it in distinct){
    //     println(it + " index is "+ distinct.indice)
    // }

    // println(distinct.size)  // printing distinct size

    var result = fruits.drop(2)

    
    for(it in result){
        println(it)
    }
    
    println("dropLast");
    result = result.dropLast(1)

    for(it in result){
        println(it)
    }
}