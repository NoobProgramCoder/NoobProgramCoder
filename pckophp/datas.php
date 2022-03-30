<?php 
$id = $_POST['id'];
$name = $_POST['name']; 
$Phone = $_POST['phone'];
$address = $_POST['address'];
echo "ID is ".$id . " Name is ".$name. "  Phone Number is " . $Phone . " The Address is " .$address ; 
include 'db.php';
$sql = "INSERT INTO newnames(id , name ,phone , address )VALUES('$id','$name','$Phone','$address')";
$result = mysqli_query($conn,$sql);
if ($result)
{
    header('Location:index.php');

}

?>