
-- apex oracle workspace name : blackyspace 

desc student2;
-- creating a table from existing table

-- create table contactinfo AS select rollno,contactno from student2;
-- desc contactinfo;

-- truncating tables
-- truncate table contactinfo;

-- destroying table

-- drop table table_name;

--***************DML cmds****************************
-- //inserting into the rows
insert into student2(ROLLNO, registrationno,FIRSTNAME , contactno, ADDRESS,INTRESTS)
values (1,11,'Ayush',9876543210,'Punjab','cricket')

insert into student2(ROLLNO, registrationno,FIRSTNAME , contactno, ADDRESS,INTRESTS)
values (2,12,'abhi',98763343,'Himachal','Hockey')

insert into student2(ROLLNO, registrationno,FIRSTNAME , contactno, ADDRESS,INTRESTS)
values (3,13,'Vishu',9873543210,'Raipur','Coding')

insert into student2(ROLLNO, registrationno,FIRSTNAME , contactno, ADDRESS,INTRESTS)
values (4,14,'Mohit',95666543210,'Gujrat','Kabbadi')

-- //deleting the row
select * from student2 where rollno = 4;

-- ********updating the table************
update student2 set Address = 'Ahmedabad' where rollno = 4
select * from student2;

-- ************Adding values into the column**********
update student2 set branch = 'CSE' where rollno = 4
select * from student2;

-- for printing the unique values
select distinct * from student2 

-- for printing the value within the specified range

select * from student2 where ROLLNO between 1 and 3

-- like operator is used to return the row where the data starts with some value

select firstname , address from student2 where contactno like '9%';

--above row return the firstname and address of student2 where his contact no starts 
-- with 9