process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

process.stdin.on('data', function (data) {
  input_stdin += data;
});

process.stdin.on('end', function () {
  input_stdin_array = input_stdin.split("\n");
  main();
});

function readLine() {
  return input_stdin_array[input_currentline++];
}

/////////////// ignore above this line ////////////////////

function getPoints(month1, month2, month3){
  var points_m1 = month1*10;
  var points_m2 = month2*10;
  var points_m3 = month3*10;

  if(points_m1 > 100) points_m1 = 100;
  if(points_m2 > 100) points_m2 = 100;
  if(points_m3 > 100) points_m3 = 100;

  return(points_m1+points_m2+points_m3)
}

function main() {
  var month1_temp = readLine().split(' ');
  var month1 = parseInt(month1_temp[0]);
  var month2 = parseInt(month1_temp[1]);
  var month3 = parseInt(month1_temp[2]);
  var pointsEarned = getPoints(month1, month2, month3);
  process.stdout.write(""+pointsEarned+"\n");

}
