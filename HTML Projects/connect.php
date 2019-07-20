<?php
 $Your_Name = filter_input(INPUT_POST, 'Your_Name');
 $Phone_No. = filter_input(INPUT_POST, 'Phone_No.');
 if (!empty($Your_Name)){
if (!empty($Phone_No.)){
$host = "localhost";
$dbYour_Name = "root";
$dbPhone_No. = "";
$dbname = "youtube";
// Create connection
$conn = new mysqli ($host, $dbYour_Name, $dbPhone_No., $dbname);
if (mysqli_connect_error()){
die('Connect Error ('. mysqli_connect_errno() .') '
. mysqli_connect_error());
}
else{
$sql = "INSERT INTO account (Your_Name, Phone_No.)
values ('$Your_Name','$Phone_No.')";
if ($conn->query($sql)){
echo "New record is inserted sucessfully";
}
else{
echo "Error: ". $sql ."
". $conn->error;
}
$conn->close();
}
}
else{
echo "Phone_No. should not be empty";
die();
}
}
else{
echo "Your_Name should not be empty";
die();
}
?>