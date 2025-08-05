
create database student;

use student;



create table customer(cid int primary key, cust_name varchar(30), city varchar(20), grade int, saleman_id int);

create table saleman(sid int primary key, saleman_name varchar(30), city varchar(20), comission double);

insert into customer(cid, cust_name, city, grade, saleman_id)values(1001, 'Nick rimando', 'New York', 100, 5001);
insert into customer(cid, cust_name, city, grade, saleman_id)values(1002, 'Brad Davis', 'New York', 200, 5001);
insert into customer(cid, cust_name, city, grade, saleman_id)values(1003, 'Ghraham Juisy', 'Calafornia', 200, 5002);
insert into customer(cid, cust_name, city, grade, saleman_id)values(1004, 'Lulin Green', 'London', 300, 5002);
insert into customer(cid, cust_name, city, grade, saleman_id)values(1005, 'Fabian Johnson', 'Paris', 300, 5006);
insert into customer(cid, cust_name, city, grade, saleman_id)values(1006, 'Geoff Germon', 'Berlin', 100, 5003);
insert into customer(cid, cust_name, city, grade, saleman_id)values(1007, 'Jocy Jack', 'Moscow', 200, 5007);
insert into customer(cid, cust_name, city, grade, saleman_id)values(1008, 'Brad', 'London', 100, 5005);

select *from customer;

insert into saleman(sid, saleman_name, city, comission)values(101,'James Hook','Newyork', 0.15);
insert into saleman(sid, saleman_name, city, comission)values(102,'Nail Knif','Paris', 0.13);
insert into saleman(sid, saleman_name, city, comission)values(103,'Pit Alex','London', 0.12);
insert into saleman(sid, saleman_name, city, comission)values(104,'Mc Loyn','Paris', 0.11);
insert into saleman(sid, saleman_name, city, comission)values(105,'Paul Adam','Sanjohn', 0.14);
insert into saleman(sid, saleman_name, city, comission)values(106,'Lausom Hen','Rome', 0.13);


select *from saleman;


    
create table saleman(sid int primary key, saleman_name varchar(30), city varchar(20), comission double);


INSERT INTO saleman(sid, saleman_name, city, comission) VALUES
(5001, 'James Hook', 'Newyork', 0.15),
(5002, 'Nail Knif', 'Paris', 0.13),
(5003, 'Pit Alex', 'London', 0.12),
(5005, 'Mc Loyn', 'Paris', 0.11),
(5006, 'Paul Adam', 'Sanjohn', 0.14),
(5007, 'Lausom Hen', 'Rome', 0.13);

SELECT 
	customer.cust_name AS Customer_Name,
    customer.city AS Customer_City,
    saleman.saleman_name AS Salesman_Name,
    saleman.comission AS Commission
FROM 
    customer
JOIN 
    saleman 
ON 
    customer.saleman_id = saleman.sid;









