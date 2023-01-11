CREATE TABLE Cats (id INTEGER NOT NULL PRIMARY KEY, name VARCHAR(50) NOT NULL );
INSERT INTO Cats(id, name) values('1','Belinha'),('2','Farofa'),('3','Catarina');

CREATE TABLE Dogs (id INTEGER NOT NULL PRIMARY KEY, name VARCHAR(50) NOT NULL );
INSERT INTO Dogs(id, name) values('1','Belinha'),('2','Jade'),('3','Nina');

SELECT name FROM Dogs
UNION 
SELECT name FROM Cats;