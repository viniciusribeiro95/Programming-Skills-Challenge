CREATE TABLE Notes (Grade integer primary key, Min_Value integer, Max_Value integer );
INSERT INTO Notes (Grade,Min_Value,Max_Value) VALUES (
  '1',
  '0',
  '9'
),
(
  '2',
  '10',
  '19'
),
(
  '3',
  '20',
  '29'
),
(
  '4',
  '30',
  '39'
),
(
  '5',
  '40',
  '49'
),
(
  '6',
  '50',
  '59'
),
( '7',
  '60',
  '69'
 ),
 (
   '8',
  '70',
  '79'
),
( '9',
  '80',
  '89'
 ),
 (
   '10',
  '90',
  '100'
); SELECT * FROM Notes