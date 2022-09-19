/**
 Do not return anything, modify matrix in-place instead.
 */

function makeZero(row, column, rowLength, columnLength, modifiedMatrix) {
  for (let i = 0; i < rowLength; i++) {
    modifiedMatrix[row][i] = 0;
  }
  for (let i = 0; i < columnLength; i++) {
    modifiedMatrix[i][column] = 0;
  }
  return modifiedMatrix;
}

function setZeroes(matrix) {
  const jsonString = JSON.stringify(matrix);
  let modifiedMatrix = JSON.parse(jsonString);
  for (let i = 0; i < matrix.length; i++) {
    for (let j = 0; j < matrix[i].length; j++) {
      if (matrix[i][j] === 0) {
        modifiedMatrix = makeZero(
          i,
          j,
          matrix[i].length,
          matrix.length,
          modifiedMatrix
        );
      }
    }
  }
  for (let i = 0; i < matrix.length; i++) {
    for (let j = 0; j < matrix[i].length; j++) {
      matrix[i][j] = modifiedMatrix[i][j];
    }
  }
  //matrix = modifiedMatrix;
  console.log(matrix);
}
