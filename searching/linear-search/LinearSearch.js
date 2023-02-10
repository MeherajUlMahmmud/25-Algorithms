const search = (array, target) => {
  for (let i = 0; i < array.length; i++) {
    if (array[i] === target) {
      return i;
      }
    }
  }
    return -1;
};

const array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
const target = 5;
const index = search(array, target);
if (index === -1) {
  console.log('Target not found');
} else {
  console.log(`Target found at index: ${index}`);
}