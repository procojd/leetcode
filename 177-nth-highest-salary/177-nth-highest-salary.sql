CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
SET N=N-1;
  RETURN (
      # Write your MySQL query statement below.
      SELECT Distinct salary FROM Employee
      order by salary desc
      LIMIT 1 OFFSET N
  );
END