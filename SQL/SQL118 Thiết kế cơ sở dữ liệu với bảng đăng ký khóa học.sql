create table enrollments(
  enrollment_id int primary key,
  student_id int,
  course_id int,
  enrollment_date date,
  foreign key(student_id) references students(student_id), 
  foreign key(course_id) references courses(course_id)
);