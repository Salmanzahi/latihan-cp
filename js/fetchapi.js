const rescollection = [];
let resflag = true

 let i = 1

while (rescollection.length < 50) {

    try {
        const response =  await fetch(`https://dummyjson.com/products/${i}`)
        const data = await response.json()
        console.log(`Fetched: ${data.title} (Product ID: ${i})`)
        rescollection.push(data)
        i++

    } catch {
        console.warn(`Product with ID ${i} not found. Stopping fetch.`)
        break;

    }

     

}
console.log(rescollection.length) 