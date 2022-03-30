<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>First DB with PHP</title>
</head>
<body>
    <header>
        <h1>ASHIM's FIRST DB...</h1>
    </header>
    <h2>Sorry but Updating feature is not available. </h2>
    <?php 
    include 'db.php';
    $id = $_GET['id'];
    $sql = "SELECT * FROM newnames WHERE id = $id";
    $result = mysqli_query($conn,$sql);
    if($result){
        $row = mysqli_fetch_assoc($result);
        $contactname = $row ['id'];
        $contactname = $row ['name'];
        $contactname = $row ['phone'];
        $contactname = $row ['address'];

    }
    
    ?>

    <form action="datas.php" method="post">
        <div class="main">
            <label for="id">ID Number:</label><br>
            <input type="number" name="id" id="id" required><br>
            <label for="name">Name:</label><br>
            <input type="text" name="name" id="name" required><br>
            <label for="phone">Phone Number:</label><br>
            <input type="number" name="phone" id="phone" required><br>
            <label for="address">Address:</label><br>
            <input type="text" name="address" id="address" required><br><br>
            <input type="hidden" name = "id" id = "id" value = "<?php global $id; echo $id; ?>" required>
            <input type="submit" value="Update">
            <input type="reset" value = "Reset">
        </div>
        

        


           
        



    </form>

    
</body>
</html>