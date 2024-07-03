console.log('This is my first script')
const obj = {
    height: 5,
    width:10,
    draw: () => this.height*this.width //arow function
}

console.log(obj.draw())