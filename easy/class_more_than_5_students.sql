# Write your MySQL query statement below
select class
From Courses
Group by class
Having count(class) >= 5
