const apifetch = [{
    content: 'https://tokokandang.com/api/v1/products?per_page=100',
    title: 'Tokokandang',
    val: 2,
    state: false
}, {
    content: 'https://tokokandang.com/api/v1/categories?per_page=100',
    title: 'Tokokandang2',
    val: 100,
    state: true
}, {
    content: 'https://tokokandang.com/api/v1/brands?per_page=100',
    title: 'Tokokandang3',
    val: 600,
    state: null
}, {
    content: 'https://tokokandang.com/api/v1/attributes?per_page=100',
    title: 'Tokokandang4',
    val: 900,
    state: null
}]


// const getcontent = apifetch.forEach((item) => {
//     console.log(item.content)
// })

const data = [2,4,5,7,8,9]

const mapcontent = apifetch.map((item) => {
    return {
       content: item.content,
        val: item.val
    }
})


function multiplier(val, multiplier) {
    return val * multiplier
}


const aggregate = data.map(item => {
    return multiplier(item, 2)
})
const reduce = mapcontent.reduce((acc, item) => {
    return acc + item.val
}, 0)
console.log(mapcontent)
console.log(aggregate)

console.log(reduce)