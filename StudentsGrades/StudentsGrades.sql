CREATE TABLE Students (ID integer PRIMARY KEY, Name text, Value integer );
INSERT INTO Students (ID,Name,Value) VALUES ('1','Julia','81'),('2','Carol','68'),('3','Maria','99'),('4','Andreia','78'),('5','Jaqueline','63'),('6','Marcela','88');

CREATE TABLE Notes (Grade integer primary key, Min_Value integer, Max_Value integer );
INSERT INTO Notes (Grade,Min_Value,Max_Value) VALUES ('1','0','9'),('2','10','19'),('3','20','29'),('4','30','39'),('5','40','49'),('6','50','59'),('7','60','69'),('8','70','79'),('9','80','89'),('10','90','100');

SELECT CASE 
	WHEN Notes.Grade < 8 THEN 'NULL' 
	ELSE Students.Name 
	END 
, Notes.Grade, Students.Value 
FROM Students, Notes 
WHERE Students.Value >= Notes.Min_Value AND Students.Value <= Notes.Max_Value 
ORDER BY Notes.Grade DESC, Students.Name;