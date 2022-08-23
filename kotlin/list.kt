// List in Kotlin
// contains ele in ordered manner

fun main() {
    // declaration 
    val theList = listOf("1","two","three","four")
    println(theList);

    // to create a mutable list
    val theMutableList = mutableListOf("one","two","three","four")
    println(theMutableList);

    // iterator to list
    val itr = theList.listIterator()
    while(itr.hasNext()){
        println(itr.next())
    }


    theList.forEach{
        println(it)
    }

    println("size of list "+ theList.size)

    if("two" in theList){
        println(true)
    }
    else{
        println(false)
    }

    if(theList.contains("two")){
        println(true)
    }
    else{
        println(false)
    }

    println(theList.isEmpty())

    println("index of 'two':  "+ theList.indexOf("two"))

    println("element at 3rd position " + theList.get(2))

    val firstList = listOf("one","two","three")
    val secondList = listOf("four", "five", "six")
    val resultList = firstList+ secondList
    println(resultList)

    val resultList2 = secondList - firstList
    println(resultList2)

    val theList2 = listOf("one","two","three","four","five","six")
    val resultList3 = theList2.slice(2..4)

    println(resultList3)

    val firstList4 = theList.drop(1)

    println(firstList4)

    val theList5 = Listof
    val firstList5 = theList.groupBy( it % 3)
    println(firstList5)
}