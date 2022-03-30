
/*

SELECT *FROM  staff WHERE 1
*/
/*
 SELECT name FROM `staff` ; 
 
  */
/* Single line ko lagi garda kheri ; dinu pardaina last ma*/

/* Multiple column only display garna ko lagi

SELECT name , age FROM 'staff' 

*/

/*
distinct is used to avoid the repeated information of name or salary in staff sql database...

SELECT DISTINCT(name) from staff

*/

/*

SELECT *  FROM staff where id = 1 ;       Use coatation to insert value in = for strings ' string here ' 

*/

/*

SELECT * FROM staff WHERE age > 14 AND Salary > 10000 ;     [OR ko concept pani xa use it according study in permuatation according to the requirement]   [Use <> for not equalto to eliminate 21age do   --->   age <> 21]  

*/

/*
SELECT * FROM staff ORDER BY id DESC ;  [greater id no to smaller]  &&  (...... ORDER BY name ASC {or DESC} (AtoZ))    [DESC = Descending]
*/

/*
For inserting datas
insert into staff(name,age,phone,salary) VALUES('aayu rim',21,5464456,65454) ;

*/
/*

UPDATE staff SET age = 25 WHERE id = 6 ;   [!!ALERT!!: WHERE halena vane dekhi all database is F.ed UP]

[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]

UPDATE staff SET name='Salman Khan',age = 52 WHERE id = 5 ;

*/

/*
For DELETING

DELETE FROM staff WHERE id = 6 ;   [[[[Ae mg WHERE lekhna nabirsi ni...]]]]

*/

/*

Jamma first 4 lines ko data haru browse hunxa 

SELECT * FROM staff LIMIT 4;

*/

/*

Last bata limited data bottom bata

SELECT * FROM staff ORDER BY id DESC LIMIT 3 ;

*/

/*

TO SHOW MIN AGE Can also use MAX  and COUNT and AVG (average) and SUM features

SELECT MIN(age) FROM staff ; 

*/

/*

TO FIND NAME STARTING FROM A

SELECT * FROM staff WHERE name LIKE 'B%' ;   [LAST ma vako letter lai '%A']

*/

/*

create database dbname ; 

Making table using primary key

CREATE TABLE student( 
id INT AUTO_INCREMENT,
name VARCHAR(100) ,   
phone VARCHAR(15),
address VARCHAR(100),
PHYorBIO  VARCHAR(3),
PRIMARY KEY(id)

);

*/

/*

to insert in table

INSERT INTO student(name,phone,address,PHYorBIO) VALUE('aad dang',654654,'kathmandu','PHY');

*/

/*

Its to show nothin I guess

SELECT * FROM `student` WHERE PHYorBIO = NULL

*/

/*

FOR FOREIGN KEY


CREATE TABLE contacts(
    cid int(5) AUTO_INCREMENT,
    name VARCHAR(255),
    id int,
    PRIMARY KEY (cid),
    FOREIGN KEY (id) REFERENCES student(id)
    
    
    
    
    );

    

    after applying foreign key


SELECT name FROM contacts WHERE id = 3;
    

    
