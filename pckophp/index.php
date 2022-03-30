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
    <hr>

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
            <input type="submit" value="Submit...">
            <input type="reset" value = "Reset">
        </div>
        <hr>

        <h2>
            Overall contestants who helped in my first database project...
        </h2>

        <table>
            <tr>
                <th>ID Number</th>
                <th>Name</th>
                <th>Phone Number</th>
                <th>Address</th>
                <th>Actions</th>
            </tr>
            <?PHP 
            
            include 'db.php';
            $sql = "SELECT * FROM newnames";
            $result = mysqli_query($conn,$sql);
            if($result){
                while($row = mysqli_fetch_assoc($result)){
                    $id = $row['id'];
                    $name = $row['name'];
                    $phone = $row['phone'];
                    $address = $row['address'];


                    ?>


<tr>
                <td><?php echo $id ?></td>
                <td><?php echo $name ?>
                </td>
                <td><?php echo $phone ?></td>
                <td> <?php echo $address ?></td>
                <td>
                    <a href="update.php?id = <?php echo $id; ?>">Update</a>
                    <a href="delete.php?id=<?php echo $id; ?>">Delete</a>


                </td>
            </tr>
                    <?php


                }
            }
            
            ?>


           
        </table>



    </form>

    
</body>
</html>